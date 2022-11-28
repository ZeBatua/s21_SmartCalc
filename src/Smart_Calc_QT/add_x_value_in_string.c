#include "calc.h"

void add_x_value_in_string(char *start_string, double x_value) {
  char new_string[256] = {'\0'};
  char x_string[100] = {'\0'};
  size_t string_len = strlen(start_string);
  for (size_t i = 0, j = 0; i < string_len; i++) {
    if (start_string[i] != 'x') {
      new_string[i] = start_string[i];
    } else {
      snprintf(x_string, 100, "%F", x_value);
      strncpy(&new_string[i], x_string, 256);
      if (&start_string[i + 1] != NULL) {
        size_t new_string_len = strlen(new_string);
        strncpy(&new_string[new_string_len], &start_string[i + 1], 256);
      }
      break;
    }
  }
  char nothing = '\0';
  memset(start_string, nothing, 256);
  strncpy(start_string, new_string, 256);
}