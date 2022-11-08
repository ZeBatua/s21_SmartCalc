#include "../calc.h"

int s21_strcmp(char current_function, char *struct_function) {
  int status = 0;
  if (current_function == struct_function[0]) status = 1;
  return status;
}