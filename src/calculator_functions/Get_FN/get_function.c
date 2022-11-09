#include "../../calc.h"

int get_function(char *part_string, int *string_position, char *function) {
  int status = 0;
  const char str_functions[60] = "(|)|+|-|*|/|^|%|U|u|c|s|t|C|S|T|q|l|L";
  *function = *strchr(str_functions, part_string[*string_position]);
  if (function != NULL) {
    status = 1;
    *string_position += 1;
  }
  return status;
}

  // if (*function == '-' || *function == '+' || *function == '*' || *function == '/') {
  //   status = 1;
  //   *string_position += 1;
  // } else if (*function == 'c' || *function == 'C' || *function == 's' || *function == 'S' || 
  //            *function == 't' || *function == 'T' || *function == 'q' || *function == 'l' ||
  //            *function == 'L' ||) {
  //   status = 1;
  //   *string_position += 2;
  //   // bracket_status += 1;
  // } else if (*function == '(') {
  //   // bracket_status += 1;
  //   *string_position += 1;
  // } else if (*function == ')') {
  //   // bracket_status -= 1;
  //   *string_position += 1;
  // }