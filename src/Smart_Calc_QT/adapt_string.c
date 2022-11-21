#include "calc.h"

int ez_skip(char symbol);

void adapt_string(char *string) {
    char new_string[256] = {'\0'};

    size_t string_length = strlen(string);
    for (size_t i = 0, j = 0; i < string_length; i++) {
        if (ez_skip(string[i])) {
            new_string[j] = string[i];
        } else if (string[i] == 'l' && string[i + 1] == 'n' && string[i + 2] != '(') { // ln 
            new_string[j] = 'l';
            i += 1;
        } else if (string[i] == 'l' && string[i + 1] == 'n' && string[i + 2] == '(') { // ln(
            new_string[j] = 'l';
            i += 2;
        } else if (string[i] == 'l' && string[i + 1] == 'g' && string[i + 2] != '(') { // lg
            new_string[j] = 'L';
            i += 1;
        } else if (string[i] == 'l' && string[i + 1] == 'g' && string[i + 2] == '(') { // lg(
            new_string[j] = 'L';
            i += 2; 
        } else if (string[i] == 'c'  && string[i + 3] != '(') { // cos
            new_string[j] = 'c';
            i += 2;
        } else if (string[i] == 'c'  && string[i + 3] == '(') { // cos(
            new_string[j] = 'c';
            i += 3;
        } else if (string[i] == 'a' && string[i + 1] == 'c' && string[i + 4] != '(') { // acos
            new_string[j] = 'C';
            i += 3;
        } else if (string[i] == 'a' && string[i + 1] == 'c' && string[i + 4] == '(') { // acos(
            new_string[j] = 'C';
            i += 4;
        } else if (string[i] == 's' && string[i + 1] == 'i' && string[i + 3] != '(') { // sin
            new_string[j] = 's';
            i += 2;
        } else if (string[i] == 's' && string[i + 1] == 'i' && string[i + 3] == '(') { // sin(
            new_string[j] = 's';
            i += 3;    
        } else if (string[i] == 'a' && string[i + 1] == 's' && string[i + 4] != '(') { // asin
            new_string[j] = 'S';
            i += 3;
        } else if (string[i] == 'a' && string[i + 1] == 's' && string[i + 4] == '(') { // asin(
            new_string[j] = 'S';
            i += 4;
        } else if (string[i] == 't' && string[i + 3] != '(') { // tan
            new_string[j] = 't';
            i += 2;
        } else if (string[i] == 't' && string[i + 3] == '(') { // tan(
            new_string[j] = 't';
            i += 3;
        } else if (string[i] == 'a' && string[i + 1] == 't' && string[i + 4] != '(') { // atan
            new_string[j] = 'T';
            i += 3;
        } else if (string[i] == 'a' && string[i + 1] == 't' && string[i + 4] == '(') { // atan(
            new_string[j] = 'T';
            i += 4;
        } else if (string[i] == 'm') { // mod
            new_string[j] = '%';
            i += 2;
        } else if (string[i] == 's' && string[i + 1] == 'q' && string[i + 4] != '(') { // sqrt
            new_string[j] = '^';
            i += 3;
        } else if (string[i] == 's' && string[i + 1] == 'q' && string[i + 4] == '(') { // sqrt(
            new_string[j] = '^';
            i += 4;
        } else { 
            printf("\n!!!SMOTRI ADAPT STRING TI NAKOSIACHILL!!!\n");
        }
        j++;
    }
    char nothing = '\0';
    memset(string, nothing, 256);
    strcpy(string, new_string);
    printf("1 - input string: %s\n", string);
}

int ez_skip(char symbol) {
    int status = 0;
    if (symbol == '0' || symbol == '1' || symbol == '2' || symbol == '3' || symbol == '4' || 
        symbol == '5' || symbol == '6' || symbol == '7' || symbol == '8' || symbol == '9' || 
        symbol == '.' || symbol == '+' || symbol == '-' || symbol == '*' || symbol == '/' || 
        symbol == '(' || symbol == ')' || symbol == 'x') {
        status = 1;
    }
    return status;
}