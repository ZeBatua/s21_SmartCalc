#include "calc.h"

int is_math_operator(char symbol);
double get_minus(char *start_string, int *string_position, num_stack **n_head, func_stack **f_head);
double get_div(char *start_string, int *string_position, num_stack **n_head, func_stack **f_head);

double read_string(char *start_string, int *break_status) {
  // printf("input string: %s\n", start_string);
  num_stack *n_head = NULL;
  func_stack *f_head = NULL;
  double current_num = 0.0, buf_current_num = 0.0;
  char current_function = '\0';
  int priority_status = 0, string_position = 0, end_string_status = 0, bug_stop = 0;
  int break_power_signal = 0;
  char previous_function = '\0';
  
  size_t check_size = strlen(start_string);
  while (string_position < strlen(start_string)) {
    // buf_current_num = current_num;
    if (get_num(start_string, &string_position, &current_num)) {
      push_num(&n_head, current_num);

      if (*break_status == 4 && check_power_next_function(start_string, string_position)) {
        continue;
      } else if (*break_status == 4 && !check_power_next_function(start_string, string_position)) {
        break;
      }

      if (*break_status == 77 && check_power_next_function(start_string, string_position)) {
        continue;
      } else if (*break_status == 77 && !check_power_next_function(start_string, string_position)) {
        break;
      }

    } else if (get_function(start_string, &string_position, &current_function)) {
      previous_function = peek_function(f_head);
      push_function(&f_head, current_function);

      if (current_function == '(') {
        current_num = exec_expression_with_open_bracket(start_string, &string_position);
        current_function = pop_function(&f_head);
        push_num(&n_head, current_num);
        if (*break_status == 77 && check_power_next_function(start_string, string_position)) {
          continue;
        } else if (*break_status == 77 && !check_power_next_function(start_string, string_position)) {
          break;
        }

        if (*break_status == 4 && check_power_next_function(start_string, string_position)) {
          continue;
        } else if (*break_status == 4 && !check_power_next_function(start_string, string_position)) {
          break;
        }

      }


      if (current_function  == '^') {
        current_num = exec_expression_with_power(start_string, &string_position, peek_num(n_head));
        if (*break_status == 77 || *break_status == 4) {
          pop_num(&n_head);
          pop_function(&f_head);
          push_num(&n_head, current_num);
          break;
        } else {
          pop_num(&n_head);
          pop_function(&f_head);
          push_num(&n_head, current_num);
        }
      }
      if (is_lower_priority(previous_function, current_function, &start_string[string_position - 1])) {
        current_function = pop_function(&f_head);
        calc_current_values(&n_head, &f_head);
        push_function(&f_head, current_function);
      }
      if (peek_function(f_head) == '-') current_num = get_minus(start_string, &string_position, &n_head, &f_head);
      if (peek_function(f_head) == '/') current_num = get_div(start_string, &string_position, &n_head, &f_head);
    } 
    if ( strlen(start_string) == string_position || current_function == ')' ) {
      calc_current_values(&n_head, &f_head);
      if ((current_function == ')') && (*break_status != 0)) break;
    }
    // printNumStack(n_head);
    // printFuncStack(f_head);
  }
  if (peek_function(f_head) != '\0' && *break_status == 0) calc_current_values(&n_head, &f_head);
  if (*break_status != 0) *break_status = string_position;

  if (*start_string != '\0') current_num = pop_num(&n_head);
  // printf("FINAL RESULT = %F\n", current_num);
  return current_num;
 }

int check_power_next_function(char *part_string, int string_position) {
  int status = 0;
  char power = '^';
  int skip_status = 0;

  for (; status == 0 && &part_string[string_position] != NULL; string_position++) {
    if (part_string[string_position] == '^') {
      status = 1;
    } else if (is_num(part_string[string_position])){
      continue;
    } else if (part_string[string_position] == '(') {
      skip_status = 1;
    } else if (!is_num(part_string[string_position]) && skip_status == 1 && part_string[string_position] != ')' ) {
      continue;
    } else if (part_string[string_position] == ')' && skip_status == 1) {
      skip_status = 0;
    } else if (part_string[string_position] == ')' && skip_status != 1) {
      status = 3;
    } else {
      status = 3;
    }
  }
  if (status == 3) status = 0;

  return status;
}

double exec_expression_with_power(char *curent_string, int *string_position, double current_num) {
  double result = 0.0;
  int extra_position = 77;

  result = read_string(&curent_string[*string_position], &extra_position);
  result = pow(current_num, result);
  *string_position += extra_position;

  return result;
}

void calc_current_values(num_stack **num_head, func_stack **function_head) {
  double first_value = 0.0;
  double second_value = 0.0;

  // printNumStack(*num_head);
  // printFuncStack(*function_head);

  first_value = pop_num(num_head);
  char current_function = '\0', last_function = '\0';;
  current_function = pop_function(function_head);

  OPS chtoto = {"(",   ")",   "+",   "-",   "*",   "/",   "^",
                "%",   "U",   "u",   "c",   "s",   "t",   "C",
                "S",   "T",   "q",   "l",   "L"};

  int bug_stop = 0;

  while (current_function != '\0') {
    if (current_function == ')' || current_function == ')') {
      current_function = pop_function(function_head);
      if (current_function == '\0') break;
    }
    if (s21_strcmp(current_function, chtoto.addition)) {
      second_value = pop_num(num_head);
      push_num(num_head, first_value + second_value);
    } else if (s21_strcmp(current_function, chtoto.subtraction)) {
      second_value =  pop_num(num_head);
      push_num(num_head, second_value - first_value);
    } else if (s21_strcmp(current_function, chtoto.multiplication)) {
      second_value = pop_num(num_head);
      push_num(num_head, first_value * second_value);
    } else if (s21_strcmp(current_function, chtoto.division)) {
      second_value = pop_num(num_head);
      push_num(num_head, second_value / first_value);
    } else if (s21_strcmp(current_function, chtoto.modulus)) {
      second_value = pop_num(num_head);
      push_num(num_head, fmod(second_value, first_value));
    } else if (s21_strcmp(current_function, chtoto.power)) {
      second_value = pop_num(num_head);
      push_num(num_head, pow(second_value, first_value));
    } else if (s21_strcmp(current_function, chtoto.cosine)) {
      push_num(num_head, cos(first_value));
    } else if (s21_strcmp(current_function, chtoto.sinus)) {
      push_num(num_head, sin(first_value));
    } else if (s21_strcmp(current_function, chtoto.tangent)) {
      push_num(num_head, tan(first_value));
    } else if (s21_strcmp(current_function, chtoto.arccosine)) {
      push_num(num_head, acos(first_value));
    } else if (s21_strcmp(current_function, chtoto.arcsine)) {
      push_num(num_head, asin(first_value));
    } else if (s21_strcmp(current_function, chtoto.arc_tangent)) {
      push_num(num_head, atan(first_value));
    } else if (s21_strcmp(current_function, chtoto.square_root)) {
      push_num(num_head, sqrt(first_value));
    } else if (s21_strcmp(current_function, chtoto.natural_logarithm)) {
      push_num(num_head, log(first_value));
    } else if (s21_strcmp(current_function, chtoto.decimal_logarithm)) {
      push_num(num_head, log10(first_value));
    }
    current_function = pop_function(function_head);
    first_value = pop_num(num_head);
  }
  push_num(num_head, first_value);
}

int is_math_operator(char symbol) {
  int status = 0;
  if (symbol == 'c' || symbol == 'C' || symbol == 's' || symbol == 'S' || symbol == '^' || symbol == 'l' || symbol == 'L' || symbol == 't' || symbol == 'T' || symbol == 'q') {
    status = 1;
  }
  return status;
}

int push_function(func_stack **head, char current_function) {
  char previous_function = '\0';
  int priority = 0;
  func_stack *tmp = malloc(sizeof(func_stack));
  if (tmp == NULL) {
    exit(STACK_OVERFLOW);
  }
  tmp->next = *head;
  tmp->function = current_function;
  *head = tmp;



  return priority;
}

void push_num(num_stack **head, double num) {
  num_stack *tmp = malloc(sizeof(num_stack));
  if (tmp == NULL) {
    exit(STACK_OVERFLOW);
  }
  tmp->next = *head;
  tmp->num = num;
  *head = tmp;
}

void printNumStack(num_stack *head) {
  printf("stack > ");
  while (head) {
    printf("%F ", head->num);
    head = head->next;
  }
  putchar('\n');
}

void printFuncStack(func_stack *head) {
  printf("stack > ");
  while (head) {
    printf("%c ", head->function);
    head = head->next;
  }
  putchar('\n');
}

char pop_function(func_stack **head) {
  func_stack *out;
  char value = '\0';
  if (*head == NULL) {
    return value;
  }
  out = *head;
  *head = (*head)->next;
  value = out->function;
  free(out);
  return value;
}

double pop_num(num_stack **head) {
  num_stack *out;
  double value = 0.0;
  if (*head == NULL) {
    exit(STACK_UNDERFLOW);
  }
  out = *head;
  *head = (*head)->next;
  value = out->num;
  free(out);
  return value;
}

char peek_function(const func_stack *head) {
  if (head == NULL) {
    // printf("peeked function = null\n");
    return '\0';
  }
  return head->function;
}

double peek_num(const num_stack *head) {
  if (head == NULL) {
    exit(STACK_UNDERFLOW);
  }
  return head->num;
}

int get_function(char *part_string, int *string_position, char *function) {
  int status = 0;
  const char str_functions[60] = "(|)|+|-|*|/|^|%|U|u|c|s|t|C|S|T|q|l|L";
  *function = *strchr(str_functions, part_string[*string_position]);
  if (function != NULL) {
    status = 1;
    *string_position += 1;
  }
  return status;
}

int get_num(char *part_string, int *string_position, double *value) {
  int status = 0;
  char str_num[11] = "0123456789.";
  *value = atof(&part_string[*string_position]);
  while (s21_strchr_2(str_num, part_string[*string_position]) != '\0') {
    *string_position += 1;
    status = 1;
  }
  return status;
}

double exec_expression_with_division(char *curent_string, int *string_position) {
  double result = 0.0;
  int extra_position = 4;

  result = read_string(&curent_string[*string_position], &extra_position);
  result = 1.0 / result;
  *string_position += extra_position;

  return result;
}

double exec_expression_with_minus(char *curent_string, int *string_position) {
  double result = 0.0;
  int extra_position = 3;

  while (curent_string[*string_position] == ' ') {
    *string_position += 1;
  } 

  if (get_num(curent_string, string_position, &result)) {
    result *= -1;
  } else {
    result = read_string(&curent_string[*string_position], &extra_position);
    result *= -1;
    *string_position += extra_position;
  }
  return result;
}

int is_unary_minus(char *curent_string, int string_position) { // номрально напиши 
  int sign_status = 0;
  if (string_position == 1) {
    sign_status = 1;
  } else if (curent_string[string_position - 1] == 'c' ||
      curent_string[string_position - 1] == 'C' ||
      curent_string[string_position - 1] == 's' ||
      curent_string[string_position - 1] == 'S' ||
      curent_string[string_position - 1] == 't' ||
      curent_string[string_position - 1] == 'T' ||
      curent_string[string_position - 1] == 'q' ||
      curent_string[string_position - 1] == 'l' ||
      curent_string[string_position - 1] == 'L' ||
      curent_string[string_position - 1] == '*' ||
      curent_string[string_position - 1] == '/' ||
      curent_string[string_position - 1] == '^' ||
      curent_string[string_position - 1] == '%' ||
      curent_string[string_position - 1] == '(') {
    sign_status = 1;
  }
  return sign_status;
}

char s21_strchr_2(char *string, char symbol) {
  int check = 0;
  int i = 0;
  for (; i < 11; i++) {
    if (string[i] == symbol) {
      check = 1;
      return string[i];
    }
  }
  return '\0';
}

char s21_strchr(char string, char symbol) {
  int check = 0;
  if (string == symbol) {
    check = 1;
    return string;
  }
  return '\0';
}

int s21_strcmp(char current_function, char *struct_function) {
  int status = 0;
  if (current_function == struct_function[0]) status = 1;
  return status;
}

double get_minus(char *start_string, int *string_position, num_stack **n_head, func_stack **f_head) {
  double current_num = 0.0;

  if (is_unary_minus(start_string - 1, *string_position)) {
    current_num = exec_expression_with_minus(start_string, string_position);
    push_num(n_head, current_num);
    pop_function(f_head);
  } else {
    current_num = exec_expression_with_minus(start_string, string_position);
    pop_function(f_head);
    push_num(n_head, current_num);
    char current_function = '+';
    push_function(f_head, current_function);
  } 
  return current_num;
}

double get_div(char *start_string, int *string_position, num_stack **n_head, func_stack **f_head) {
  double current_num = 0.0;
  current_num = exec_expression_with_division(start_string, string_position);
  push_num(n_head, current_num);
  pop_function(f_head);
  char current_function = '*';
  push_function(f_head, current_function);
  return current_num;
}


double exec_expression_with_open_bracket(char *curent_string, int *string_position) {
  double result = 0.0;

  int extra_position = 9; // find close bracket_and_do
  result = read_string(&curent_string[*string_position], &extra_position);
  *string_position += extra_position;

  return result;
}




int is_lower_priority(char previous_function, char current_function, char *string) {
  int status = 0;
  if ((previous_function == '*' || previous_function == '/' || previous_function == '^') && (current_function == '-' || current_function == '+') ||
      (is_math_operator(previous_function) && current_function != '(' && current_function != '-' && !is_math_operator(current_function)) ) {
    status = 1;
  }
  if ((string - 1) != NULL) {
    if (*string == '-' && (*(string - 1) == '*' || *(string - 1) == '/' || *(string - 1) == '%' || *(string - 1) == '^')) {
      status = 0;
    }
  }
  return status;
}