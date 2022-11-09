#include "../../calc.h"

int is_unary_minus(char *curent_string, int string_position) {
  int sign_status = 0;
  if (curent_string[string_position - 1] == 'c' ||
      curent_string[string_position - 1] == 'C' ||
      curent_string[string_position - 1] == 's' ||
      curent_string[string_position - 1] == 'S' ||
      curent_string[string_position - 1] == 't' ||
      curent_string[string_position - 1] == 'T' ||
      curent_string[string_position - 1] == 'q' ||
      curent_string[string_position - 1] == 'l' ||
      curent_string[string_position - 1] == 'L' ||
      curent_string[string_position - 1] == '(' ||
      string_position == 1) {
    sign_status = 1;
  }
  return sign_status;
}