#include "../calc.h"

double exec_expression_with_division(char *curent_string, int *string_position) {
  double result = 0.0;
  if (get_num(curent_string, string_position, &result)) {
    result = 1.0 / result;
  } else {
    printf("cho za bred\n");
    exit(0);
  }
  return result;
}