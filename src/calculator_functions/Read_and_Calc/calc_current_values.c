#include "../../calc.h"

void calc_current_values(num_stack **num_head, func_stack **function_head, int end_strig, int *status_priority) {
  double first_value = 0.0;
  double second_value = 0.0;

  printNumStack(*num_head);
  printFuncStack(*function_head);

  first_value = pop_num(num_head);
  char current_function = '\0';
  current_function = pop_function(function_head);
  int find_second_bracket = 0;
  if (current_function == ')') {
    find_second_bracket = 1;
    current_function = pop_function(function_head);
  }

  printNumStack(*num_head);
  printFuncStack(*function_head);

  OPS chtoto = {"(",   ")",   "+",   "-",   "*",   "/",   "^",
                "%",   "U",   "u",   "c",   "s",   "t",   "C",
                "S",   "T",   "q",   "l",   "L"};

  int bug_stop = 0;

  while (find_second_bracket != 0 || *status_priority != 0 || end_strig != 0) {
    if (current_function == '\0' || current_function == '(') {
      if (end_strig != 0) {
        push_num(num_head, first_value);
      } else {
        break;
      }
    }
    if (s21_strcmp(current_function, chtoto.open_bracket)) {
      find_second_bracket = 0;
    } else if (s21_strcmp(current_function, chtoto.closing_bracket)) {
      // *status_priority = 1;
    } else if (s21_strcmp(current_function, chtoto.addition)) {
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
      find_second_bracket = 0;
    } else if (s21_strcmp(current_function, chtoto.cosine)) {
      push_num(num_head, cos(first_value));
      find_second_bracket = 0;
    } else if (s21_strcmp(current_function, chtoto.sinus)) {
      push_num(num_head, sin(first_value));
      find_second_bracket = 0;
    } else if (s21_strcmp(current_function, chtoto.tangent)) {
      push_num(num_head, tan(first_value));
      find_second_bracket = 0;
    } else if (s21_strcmp(current_function, chtoto.arccosine)) {
      push_num(num_head, acos(first_value));
      find_second_bracket = 0;
    } else if (s21_strcmp(current_function, chtoto.arcsine)) {
      push_num(num_head, asin(first_value));
      find_second_bracket = 0;
    } else if (s21_strcmp(current_function, chtoto.arc_tangent)) {
      push_num(num_head, atan(first_value));
      find_second_bracket = 0;
    } else if (s21_strcmp(current_function, chtoto.square_root)) {
      push_num(num_head, sqrt(first_value));
      find_second_bracket = 0;
    } else if (s21_strcmp(current_function, chtoto.natural_logarithm)) {
      push_num(num_head, log(first_value));
      find_second_bracket = 0;
    } else if (s21_strcmp(current_function, chtoto.decimal_logarithm)) {
      push_num(num_head, log10(first_value));
      find_second_bracket = 0;
    }

    if (*status_priority = 1 && (peek_function(*function_head) == '*' || peek_function(*function_head) == '/')) {
    } else {
      *status_priority = 0;
    }


    first_value = pop_num(num_head);
    if (end_strig == 1 && peek_function(*function_head) == '\0') break;
    // if (*status_priority == 1) break;
    current_function = pop_function(function_head);
    if (current_function == '(') {
      pop_function(function_head);
      break;
    }
  }
  push_num(num_head, first_value);
}