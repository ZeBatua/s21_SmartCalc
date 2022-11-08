#include "../calc.h"

double exec_expression_with_minus(char *current_string, int *string_position) {
  double result = 0.0;
  if (get_num(current_string, string_position, &result)) {
    result *= -1;
  } else {
    result = calc_string(&current_string[*string_position], 1);
  }
  return result;
}
