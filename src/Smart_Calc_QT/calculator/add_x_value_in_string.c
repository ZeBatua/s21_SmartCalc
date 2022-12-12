#include "../calc.h"

void add_x_value_in_string(char *start_string, double x_value) {
  // printf("!!!size start = %d\n", sizeof(start_string));
  char new_string[256] = {'\0'};
  char x_string[100] = {'\0'};
  size_t string_len = strlen(start_string);

  snprintf(x_string, 100, "%F", x_value);
  size_t x_len = strlen(x_string);

  for (size_t i = 0, j = 0; i < string_len; i++, j++) {
    if (start_string[i] != 'x') {
      new_string[j] = start_string[i];
    } else {
      strcpy(&new_string[j], x_string);
      j += x_len - 1;
    }
  }
  char nothing = '\0';
  memset(start_string, nothing, 256);
  strcpy(start_string, new_string);
}
