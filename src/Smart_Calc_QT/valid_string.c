#include "calc.h"

int check_valid_brackets(char *string);

int valid_string(char *input_string) {
    int status = 0;
    size_t size_string = strlen(input_string);
    for (size_t i = 0; size_string < i; i++) {
        check_valid_brackets(input_string[i]);
    }

    return status;
}

int check_valid_brackets(char *string) {
    int status = 0;
    static int bracket = 0;

    if (*string == '(' ||
        *string == 'c' ||
        *string == 'C' ||
        *string == 's' ||
        *string == 'S' ||
        *string == 't' ||
        *string == 'T' ||
        *string == 'q' ||
        *string == 'l' ||
        *string == 'L' ||) {
        bracket += 1;
    } else if (*string == ')') {
        bracket -= 1;
    }
    if (bracket == 0) status = 1;

    return status;
}