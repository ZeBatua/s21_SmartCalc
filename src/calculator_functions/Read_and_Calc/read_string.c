#include "../../calc.h"

int check_power_next_function(char *part_string, int string_position);
double exec_expression_with_power(char *curent_string, int *string_position, double current_num);

double read_string(char *start_string, int *break_status) {
  num_stack *n_head = NULL;
  func_stack *f_head = NULL;
  double current_num = 0.0;
  char current_function = '\0';
  int priority_status = 0, string_position = 0, end_string_status = 0,
      bug_stop = 0;
  int break_power_signal = 0;
  size_t check_size = strlen(start_string);

  while (string_position < strlen(start_string)) {
    if (start_string[string_position] == ' ') {
      string_position += 1;
      if (string_position == strlen(start_string)) {
        end_string_status = 1;
        calc_current_values(&n_head, &f_head, end_string_status, &priority_status);
      }
      continue;
    } else if (get_num(start_string, &string_position, &current_num)) {
      push_num(&n_head, current_num);
      printf("peek_num = %F\n", peek_num(n_head));
      printNumStack(n_head);
    } else if (get_function(start_string, &string_position, &current_function)) {


      //---внимание_гавнокод---//
      char previous_function = '\0';
      previous_function = peek_function(f_head);

      if (current_function == '^') {
        if (*break_status != 0) {
          calc_current_values(&n_head, &f_head, 1, &priority_status);
          // free function
        }
        // priority_status = 1;
        // calc_current_values(&n_head, &f_head, end_string_status, &priority_status);
        current_num = peek_num(n_head);
        current_num = exec_expression_with_power(start_string, &string_position, current_num);
        pop_num(&n_head);
        push_num(&n_head, current_num); /// 1 + 2 ^ ( 3 * 7)
        // pop_function(&f_head);
        if (*break_status == 4) {
          break;
        }
        // push_function(&f_head, current_function);  
        continue;
      } else if ((previous_function == '*' || previous_function == '/' || previous_function == '^') && (current_function == '-' || current_function == '+')) {
        priority_status = 1;
        calc_current_values(&n_head, &f_head, end_string_status, &priority_status);

        if (current_function != '-') {
          push_function(&f_head, current_function);  
          continue;
        }
      }
      previous_function = '\0';
      //---внимание_гавнокод---//

      push_function(&f_head, current_function);
      printf("peek_function = %c\n", peek_function(f_head));
      printFuncStack(f_head);
      if (peek_function(f_head) == '-') {
        printf("AAA string = %s\n", &start_string[string_position]);
        printf("string poition = %d\n", string_position);
        // if (string_position == 1) { // унарный минус unary minus
        if (is_unary_minus(start_string - 1, string_position)) { // унарный минус
          current_num = exec_expression_with_minus(start_string, &string_position);
          push_num(&n_head, current_num);
          pop_function(&f_head);
        } else {
          current_num = exec_expression_with_minus(start_string, &string_position);
          push_num(&n_head, current_num);
          pop_function(&f_head);
          current_function = '+';
          push_function(&f_head, current_function);
        }
      }
      if (peek_function(f_head) == '/') {
        current_num = exec_expression_with_division(start_string, &string_position);
        push_num(&n_head, current_num);
        pop_function(&f_head);
        current_function = '*';
        push_function(&f_head, current_function);
      }
    } else {
      printf("ti nacosiachil vo vvode!\n");
      exit(INVALID_VALUE);
    }
    if (priority_status || strlen(start_string) == string_position || current_function == ')' ) {
      if (strlen(start_string) == string_position) {
        end_string_status = 1;
      }
      if (check_power_next_function(start_string, string_position)) {
        break_power_signal = 1; 
        continue;
      }
      calc_current_values(&n_head, &f_head, end_string_status, &priority_status);
      if ((current_function == ')') && (*break_status != 0)) { // exec_minus
        break;
      }
      if (break_power_signal == 1 && (*break_status != 0)) {
        break;
      }
    }
    bug_stop++;
  }
  if (peek_function(f_head) != '\0') {
    calc_current_values(&n_head, &f_head, 1, &priority_status);
  }
  printNumStack(n_head);
  printFuncStack(f_head);
  if (*break_status != 0) *break_status = string_position;

  current_num = pop_num(&n_head);
  return current_num;
}

int check_power_next_function(char *part_string, int string_position) {
  int status = 0;
  char power = '^';

  for (; status == 0; string_position++) {
    if (part_string[string_position] == ' ') {
      // nothing
    } else if (part_string[string_position] == '^') {
      status = 1;
    } else {
      status = 3;
    }
  }
  if (status == 3) status = 0;

  return status;
}

double exec_expression_with_power(char *curent_string, int *string_position, double current_num) {
  double result = 0.0;
  int extra_position = 3;

  while (curent_string[*string_position] == ' ') {
    *string_position += 1;
  } 

  if (get_num(curent_string, string_position, &result)) {
    result = pow(current_num, result);
  } else {
    result = read_string(&curent_string[*string_position], &extra_position);
    result = pow(current_num, result);
    *string_position += extra_position;
  }
  return result;
}
