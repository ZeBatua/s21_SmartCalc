#include "../../calc.h"

char s21_strchr(char string, char symbol) {
  int check = 0;
  if (string == symbol) {
    check = 1;
    return string;
  }
  return '\0';
}