#include "../calc.h"

int get_function(char *part_string, int *string_position, char *function) {
  int status = 0;
  const char str_functions[60] = "(|)|+|-|*|/|^|%|U|u|c|s|t|C|S|T|q|l|L";

  *function = *strchr(str_functions, part_string[*string_position]);
  if (function != NULL) {
    status = 1;
    *string_position += 1;
  }
  // printf("function = %c\n", *function);
  return status;
}
