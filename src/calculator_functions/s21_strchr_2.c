#include "../calc.h"

char s21_strchr_2(char *string, char symbol) {
  int check = 0;
  int i = 0;
  for (; i < strlen(string); i++) {
    if (string[i] == symbol) {
      check = 1;
      return string[i];
    }
  }
  return '\0';
}
