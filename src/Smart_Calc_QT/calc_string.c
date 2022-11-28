#include "calc.h"

double calc_string(char *start_string, char *x_string) {
  if (valid_string(start_string, x_string)) {
    int status = 0;
    double result = 0.0, x_result = 0.0;
    x_result = read_string(x_string, &status);
    add_x_value_in_string(start_string, x_result);
    result = read_string(start_string, &status);
    
    printf("result = %F\n", result);
  } else {
    printf("NOT VALID\n");
  }
  return 0;
}

  // ты можешь возвращать конкретный код ошибки в соотвествии прописывать ее выводе qt
  // gcc calc.c adapt_string.c valid_string.c read_string.c -g -o main && ./main

