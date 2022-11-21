#include "calc.h"

int ez_skip(char symbol);

char *adapt_string(char *string) {
    char new_string[256] = {'\0'};

    size_t string_length = strlen(string);
    for (size_t i = 0; i < string_length; i++) {
        if (ez_skip(string[i])) {
            new_string[i] = string[i];
        } else if (string[i] == 'l' && string[i + 1] == 'n' && string[i + 2] != '(') { // ln 
            new_string[i] = 'l';
            i += 1;
        } else if (string[i] == 'l' && string[i + 1] == 'n' && string[i + 2] == '(') { // ln(
            new_string[i] = 'l';
            i += 2;
        } else if (string[i] == 'l' && string[i + 1] == 'g' && string[i + 2] != '(') { // lg
            new_string[i] = 'L';
            i += 1;
        } else if (string[i] == 'l' && string[i + 1] == 'g' && string[i + 2] == '(') { // lg(
            new_string[i] = 'L';
            i += 2; 
        } else if (string[i] == 'c'  && string[i + 3] != '(') { // cos
            new_string[i] = 'c';
            i += 2;
        } else if (string[i] == 'c'  && string[i + 3] == '(') { // cos(
            new_string[i] = 'c';
            i += 3;
        } else if (string[i] == 'a' && string[i + 1] == 'c' && string[i + 4] != '(') { // acos
            new_string[i] = 'C';
            i += 3;
        } else if (string[i] == 'a' && string[i + 1] == 'c' && string[i + 4] == '(') { // acos(
            new_string[i] = 'C';
            i += 4;
        } else if (string[i] == 's' && string[i + 1] == 'i' && string[i + 3] != '(') { // sin
            new_string[i] = 's';
            i += 2;
        } else if (string[i] == 's' && string[i + 1] == 'i' && string[i + 3] == '(') { // sin(
            new_string[i] = 's';
            i += 3;    
        } else if (string[i] == 'a' && string[i + 1] == 's' && string[i + 4] != '(') { // asin
            new_string[i] = 'S';
            i += 3;
        } else if (string[i] == 'a' && string[i + 1] == 's' && string[i + 4] == '(') { // asin(
            new_string[i] = 'S';
            i += 4;
        } else if (string[i] == 't' && string[i + 3] != '(') { // tan
            new_string[i] = 't';
            i += 2;
        } else if (string[i] == 't' && string[i + 3] == '(') { // tan(
            new_string[i] = 't';
            i += 3;
        } else if (string[i] == 'a' && string[i + 1] == 't' && string[i + 4] != '(') { // atan
            new_string[i] = 'T';
            i += 3;
        } else if (string[i] == 'a' && string[i + 1] == 't' && string[i + 4] != '(') { // atan(
            new_string[i] = 'T';
            i += 4;
        } else if (string[i] == 'm') { // mod
            new_string[i] = '%';
            i += 2;
        } else if (string[i] == 's' && string[i + 1] == 'q' && string[i + 4] != '(') { // sqrt
            new_string[i] = '^';
            i += 3;
        } else if (string[i] == 's' && string[i + 1] == 'q' && string[i + 4] == '(') { // sqrt(
            new_string[i] = '^';
            i += 4;
        } else { 
            printf("\n!!!SMOTRI ADAPT STRING TI NAKOSIACHILL!!!\n");
        }
    }

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