#include "../calc.h"

double calc_string(char *start_string, int break_status) {
  num_stack *n_head = NULL;
  func_stack *f_head = NULL;
  double current_num = 0.0;
  char current_function = '\0';
  int priority_status = 0, string_position = 0, end_string_status = 0,
      bug_stop = 0;
  size_t check_size = strlen(start_string);

  while (string_position < strlen(start_string) || bug_stop == 20 || break_status != 0) {
    if (get_num(start_string, &string_position, &current_num)) {
      push_num(&n_head, current_num);
      printf("peek_num = %F\n", peek_num(n_head));
      printNumStack(n_head);
    } else if (get_function(start_string, &string_position, &current_function)) {
      priority_status = push_function(&f_head, current_function);
      printf("peek_function = %c\n", peek_function(f_head));
      printFuncStack(f_head);
      if (peek_function(f_head) == '-') {
        printf("AAA string = %s\n", &start_string[string_position]);
        printf("string poition = %d\n", string_position);
        if (string_position == 1) {
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
      exit(INVALID_VALUE);
    }
    if (priority_status || strlen(start_string) == string_position) {
      if (strlen(start_string) == string_position) {
        end_string_status = 1;
        break_status = 0;
      }
      calc_current_values(&n_head, &f_head, end_string_status);
    }
    bug_stop++;
  }
  current_num = pop_num(&n_head);
  return current_num;
}
