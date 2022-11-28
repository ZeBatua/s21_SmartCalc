#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
    char str[80];
    double kek = 12345678912345678.123;
    snprintf (str, 80, "%F", kek);
    printf("string: %s\n", &str[0]);
    int length = strlen(str);
    printf("length = %d\n", length);

}