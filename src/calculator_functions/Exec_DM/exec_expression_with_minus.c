#include "../../calc.h"

double exec_expression_with_minus(char *curent_string, int *string_position) {
  double result = 0.0;
  int extra_position = 3;
  if (get_num(curent_string, string_position, &result)) {
    result *= -1;
  } else {
    result = read_string(&curent_string[*string_position], &extra_position);
    result *= -1;
    *string_position += extra_position;
  }
  return result;
}
