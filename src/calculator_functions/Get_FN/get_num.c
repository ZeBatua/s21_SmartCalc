#include "../../calc.h"

int get_num(char *part_string, int *string_position, double *value) {
  int status = 0;
  static int debug_exit = 0;
  debug_exit++;
  printf("string: %s\n", &part_string[*string_position]);
  if (debug_exit == 40) {
    printf("debug_exit\n");
    exit(0);
  }
  char str_num[11] = "0123456789.";
  *value = atof(&part_string[*string_position]);
  char *debug = '\0';
  while (s21_strchr_2(str_num, part_string[*string_position]) != '\0') {
    *string_position += 1;
    status = 1;
    if (*string_position == 25) {
      printf("loh\n");
      exit(0);
    }
  }
  return status;
}