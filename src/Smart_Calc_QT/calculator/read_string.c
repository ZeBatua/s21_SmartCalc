#include "../calc.h"

int is_math_operator(char symbol);
double get_minus(char *start_string, int *string_position, num_stack **n_head, func_stack **f_head);
double get_div(char *start_string, int *string_position, num_stack **n_head, func_stack **f_head);
double second_calc_value(double second_value, func_stack **f_head);
int is_needed_to_calc_now(char function);

double read_string(char *start_string, int *break_status) {
  num_stack *n_head = NULL;
  func_stack *f_head = NULL;
  double current_num = 0.0;
  char current_function = '\0', previous_function = '\0';
  int string_position = 0;
  int size = strlen(start_string);
  while (string_position < size) {
    if (get_num(start_string, &string_position, &current_num)) {
      push_num(&n_head, current_num);
      if (*break_status == 4 && check_power_next_function(start_string, string_position)) continue;
      else if (*break_status == 4 && !check_power_next_function(start_string, string_position)) break;
      if (*break_status == 77 && check_power_next_function(start_string, string_position)) continue;
      else if (*break_status == 77 && !check_power_next_function(start_string, string_position)) break;
      if (*break_status == 3 && is_needed_to_calc_now(current_function)) {
        calc_current_values(&n_head, &f_head);
        break;
      }
    } else if (get_function(start_string, &string_position, &current_function)) {
      previous_function = peek_function(f_head);
      push_function(&f_head, current_function);
      if (current_function == '(') {
        current_num = exec_expression_with_open_bracket(start_string, &string_position);
        pop_function(&f_head);
        current_function = peek_function(f_head);
        push_num(&n_head, current_num);
        if (*break_status == 77 && check_power_next_function(start_string, string_position)) continue;
        else if (*break_status == 77 && !check_power_next_function(start_string, string_position)) break;
        if (*break_status == 4 && check_power_next_function(start_string, string_position)) continue;
        else if (*break_status == 4 && !check_power_next_function(start_string, string_position)) break;
      }
      if (current_function  == '^') {
        current_num = exec_expression_with_power(start_string, &string_position, peek_num(n_head)); //// c1
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
      if (string_position != 1) { 
        if (is_lower_priority(previous_function, current_function, &start_string[string_position - 1])) {
          current_function = pop_function(&f_head);
          calc_current_values(&n_head, &f_head);
          push_function(&f_head, current_function);
        }
      }
      if (peek_function(f_head) == '-') current_num = get_minus(start_string, &string_position, &n_head, &f_head);
      if (peek_function(f_head) == '/') current_num = get_div(start_string, &string_position, &n_head, &f_head);
    }
    if ((int)strlen(start_string) == string_position || current_function == ')') {
      calc_current_values(&n_head, &f_head);
      if ((current_function == ')') && (*break_status != 0)) break;
    }
  }
  if (peek_function(f_head) != '\0' && *break_status == 0) calc_current_values(&n_head, &f_head);
  if (*break_status != 0) *break_status = string_position;
  if (*start_string != '\0') current_num = pop_num(&n_head);
  return current_num;
 }

int check_power_next_function(char *part_string, int string_position) {
  int status = 0;
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
  first_value = pop_num(num_head);
  char current_function = '\0';
  current_function = pop_function(function_head); // 
  // 33.(3) == 33.0 * 3

  OPS chtoto = {"(",   ")",   "+",   "-",   "*",   "/",   "^",
                "%",   "U",   "u",   "c",   "s",   "t",   "C",
                "S",   "T",   "q",   "l",   "L"};

  while (current_function != '\0') {
    if (current_function == ')' || current_function == ')') {
      current_function = pop_function(function_head);
      if (current_function == '\0') break;
    }
    if (s21_strcmp(current_function, chtoto.addition)) {
      second_value = pop_num(num_head);
      second_value = second_calc_value(second_value, function_head);
      push_num(num_head, first_value + second_value);
    } else if (s21_strcmp(current_function, chtoto.subtraction)) {
      second_value =  pop_num(num_head);
      second_value = second_calc_value(second_value, function_head);
      push_num(num_head, second_value - first_value);
    } else if (s21_strcmp(current_function, chtoto.multiplication)) {
      second_value = pop_num(num_head);
      second_value = second_calc_value(second_value, function_head);
      push_num(num_head, first_value * second_value);
    } else if (s21_strcmp(current_function, chtoto.division)) {
      second_value = pop_num(num_head);
      second_value = second_calc_value(second_value, function_head);
      push_num(num_head, second_value / first_value);
    } else if (s21_strcmp(current_function, chtoto.modulus)) {
      second_value = pop_num(num_head);
      second_value = second_calc_value(second_value, function_head);
      push_num(num_head, fmod(second_value, first_value));
    } else if (s21_strcmp(current_function, chtoto.power)) {
      second_value = pop_num(num_head);
      second_value = second_calc_value(second_value, function_head);
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

double second_calc_value(double second_value, func_stack **f_head) {
  char function = '\0';
  if (is_needed_to_calc_now(function = peek_function(*f_head))) {
    num_stack *n_tmp_head = NULL;
    func_stack *f_tmp_head = NULL;
    push_function(&f_tmp_head, function);
    push_num(&n_tmp_head, second_value);
    calc_current_values(&n_tmp_head, &f_tmp_head);
    second_value = pop_num(&n_tmp_head);

    pop_function(f_head);
  }
  return second_value;
}

int is_needed_to_calc_now(char function) {
  int status = 0;
  if (function == 'c' || function == 'C' || function == 's' || function == 'S' || function == 't' || function == 'T' || function == 'l' || function == 'L' || function == 'q') {
    status = 1;
  }
  return status;
}

int is_math_operator(char symbol) {
  int status = 0;
  if (symbol == 'c' || symbol == 'C' || symbol == 's' || symbol == 'S' || symbol == '^' || symbol == 'l' || symbol == 'L' || symbol == 't' || symbol == 'T' || symbol == 'q') {
    status = 1;
  }
  return status;
}

int push_function(func_stack **head, char current_function) {
  int priority = 0;
  func_stack *tmp = malloc(sizeof(func_stack));
  if (tmp == NULL) exit(STACK_OVERFLOW);
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
  if (*head == NULL) return value;
  out = *head;
  *head = (*head)->next;
  value = out->function;
  free(out);
  return value;
}

double pop_num(num_stack **head) {
  num_stack *out;
  double value = 0.0;
  if (*head == NULL) exit(STACK_UNDERFLOW);
  out = *head;
  *head = (*head)->next;
  value = out->num;
  free(out);
  return value;
}

char peek_function(const func_stack *head) {
  if (head == NULL) {
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

int is_unary_minus(char *curent_string, int string_position) {
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
  int i = 0;
  for (; i < 11; i++) {
    if (string[i] == symbol) {
      return string[i];
    }
  }
  return '\0';
}

char s21_strchr(char string, char symbol) {
  if (string == symbol) {
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
  int extra_position = 9;
  result = read_string(&curent_string[*string_position], &extra_position);
  *string_position += extra_position;
  return result;
}


int is_lower_priority(char previous_function, char current_function, char *string) {
  int status = 0;
  if (string != NULL) {
    if (((previous_function == '*' || previous_function == '/' || previous_function == '^') && (current_function == '-' || current_function == '+')) ||
        (is_math_operator(previous_function) && current_function != '(' && current_function != '-' && !is_math_operator(current_function)) ) {
      status = 1;
    }
    if ((string - 1) != NULL && string != NULL) {
      if (*string == '-' && (*(string - 1) == '*' || *(string - 1) == '/' || *(string - 1) == '%' || *(string - 1) == '^')) status = 0;
    }
    if ((!is_needed_to_calc_now(current_function) && is_needed_to_calc_now(previous_function)) && !is_needed_to_calc_now(*(string - 1))) {
      status = 1;
    }
  }
  return status;
}
