#include "calc.h"

int ez_skip(char symbol);

int adapt_string(char *string) {
    int valid_status = 0;
    char new_string[256] = {'\0'};

    size_t string_length = strlen(string);
    for (size_t i = 0, j = 0; i < string_length; i++) {
        if (ez_skip(string[i])) {
            new_string[j] = string[i];
        } else if (string[i] == 'l' && string[i + 1] == 'n') { // ln
            new_string[j] = 'l';
            i += 1;
        } else if (string[i] == 'l' && string[i + 1] == 'g') { // lg
            new_string[j] = 'L';
            i += 1; 
        } else if (string[i] == 'c' && string[i + 1] == 'o' && string[i + 2] == 's') { // cos
            new_string[j] = 'c';
            i += 2;
        } else if (string[i] == 'a' && string[i + 1] == 'c' && string[i + 2] == 'o' && string[i + 3] == 's') { // acos
            new_string[j] = 'C';
            i += 3;
        } else if (string[i] == 's' && string[i + 1] == 'i' && string[i + 2] == 'n') { // sin
            new_string[j] = 's';
            i += 2;    
        } else if (string[i] == 'a' && string[i + 1] == 's' && string[i + 2] == 'i' && string[i + 3] == 'n') { // asin
            new_string[j] = 'S';
            i += 3;
        } else if (string[i] == 't' && string[i + 1] == 'a' && string[i + 2] == 'n') { // tan
            new_string[j] = 't';
            i += 2;
        } else if (string[i] == 'a' && string[i + 1] == 't' && string[i + 2] == 'a' && string[i + 3] == 'n') { // atan
            new_string[j] = 'T';
            i += 3;
        } else if (string[i] == 'm' && string[i + 1] == 'o' && string[i + 2] == 'd') { // mod
            new_string[j] = '%';
            i += 2;
        } else if (string[i] == '^') { // ^
            new_string[j] = '^';
        } else if (string[i] == 's' && string[i +  1] == 'q' && string[i + 2] == 'r' && string[i + 3] == 't') { // sqrt
            new_string[j] = 'q';
            i += 3;
        } else if (string[i] == ' ') { 
            continue;
        } else {
            valid_status = 1;
            break;
        }
        
        j++;
    }
    char nothing = '\0';
    memset(string, nothing, 256);
    strcpy(string, new_string);
    return valid_status;
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