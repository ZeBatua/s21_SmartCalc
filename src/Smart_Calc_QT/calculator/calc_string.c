#include "../calc.h"

double calc_string(char *start_string, char *x_string) {
    char buf[256] = {'\0'};
    strncpy(buf, start_string, 256);
    int status = 0;
    double result = 0.0, x_result = 0.0;
    x_result = read_string(x_string, &status);
    add_x_value_in_string(start_string, x_result);
    result = read_string(start_string, &status);
    
    char nothing = '\0';
    memset(start_string, nothing, 256);
    strncpy(start_string, buf, 256);

  return result;
}

  // gcc calc.c adapt_string.c valid_string.c read_string.c -g -o main && ./main


