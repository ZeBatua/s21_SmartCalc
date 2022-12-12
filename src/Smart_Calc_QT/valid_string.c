#include "calc.h"

int num_after_math_op(char *symbol);

int valid_string(char *input_string, char *input_x_string) {
    int status = 0;
    // for x 
    status = adapt_string(input_string);                               // cos -> c  // +mini valid string
    if (status == 0) upgrade_string(input_string);                     // 2cos -> 2*cos
    if (status == 0) status = check_valid_brackets(input_string);      // счетчик открывающих скобки операторов
    if (status == 0) status = valid_binary_op_position(input_string);  // проверка правильной позиции операторов
    if (status == 0) status = valid_node_position(input_string);       // проверка правильно посталвенной точки
    if (status == 0) status = enough_arguements(input_string);         // cos(?)
    // for common string
    if (status == 0) status = adapt_string(input_x_string);              // cos -> c  // +mini valid string
    if (status == 0) upgrade_string(input_x_string);                     // 2cos -> 2*cos
    if (status == 0) status = check_valid_brackets(input_x_string);      // счетчик открывающих скобки операторов
    if (status == 0) status = valid_binary_op_position(input_x_string);  // проверка правильной позиции операторов
    if (status == 0) status = valid_node_position(input_x_string);       // проверка правильно посталвенной точки
    if (status == 0) status = enough_arguements(input_x_string);         // cos(?)
    if (status == 0) status = x_in_input_x_string(input_x_string);       // проверка что x не содержит x в самом себе

    return !status;
}




int check_valid_brackets(char *string) {
    int bracket_count = 0;
    size_t length_string = strlen(string);
    for (size_t i = 0; length_string > i; i++) {
        if (string[i] == '(') {
            bracket_count += 1;
            if (check_non_empty_brackets(string + 1)){
                bracket_count = 10;
                break;
            }
        } else if (string[i] == ')') {
            bracket_count -= 1;
        }
        if (bracket_count < 0) break;
    }
    return !!bracket_count;
}

int check_non_empty_brackets(char *string) {
    int status = 0, num_status = 0;
    if (string == NULL) {
        status = 1;
    } else {
        int length_string = strlen(string);
        for (int i = 0; i < length_string; i++) {
            if (&string[i] == NULL) {
                status = 1;
                break;
            }
            if (string[i] == ')' && num_status != 1) {
                status = 1;
                break;
            }
            if (is_num(string[i]) || string[i] == 'x') num_status = 1;
        }
    }
    return status;
}

int valid_binary_op_position(char *string) {
    int status = 0;
    size_t length_string = strlen(string);
    
    if (is_binary_op(*string) && *string != '-') status = 1;  // проверка что первый знак не бинарный оператор (!-)
    if (is_binary_op(string[length_string - 1])) status = 1;  // проверка что последний знак не бинарный оператор
    if (triple_binary_op(string)) status = 1;  // провекра наличия 3 операторов подряд

    for (size_t i = 0; length_string > i && status != 1; i++) {
        if (is_open_op(string[i]) && is_binary_op(string[i + 1]) && string[i + 1] != '-') status = 1; // cos(*...) sin(/...)
        if (string[i] == ')' && is_binary_op(string[i - 1])) status = 1; // .../) ...*/)
        if (is_invalid_double_op(&string[i])) status = 1;  // проверка коректных 2 операторов подоряд
        if (binary_op_after_math_op(&string[i])) status = 1;  // проверка случаев вида cos(* sin(/
        if (num_after_math_op(&string[i])) status = 1;
        if (check_math_neighbor(&string[i])) status = 1;
    }

    return !!status;
}


int check_math_neighbor(char *math) {
    int status = 0;
    char behind_symbol = '\0';

    if (is_open_op(*math) && *math != '^' && *math != '(') {
        if ((math - 1) != NULL) {
            behind_symbol = *(math - 1);
            status = is_num(behind_symbol);
            if (behind_symbol == ')') status = 1;
        }    
    }

    return status;
}

int is_binary_op(char string) {
    int status = 0;
    if (string == '+' || string == '-' || string == '*' || string == '/' || string == '%' || string == '^') {
        status = 1;
    }
    return status;
}

int is_open_op(char string) {
    int status = 0;
    if (string == '(' || string == '^' || string == 's' || string == 'S' || string == 'c' ||
        string == 'C' || string == 't' || string == 'T' || string == 'q' || string == 'l' ||
        string == 'L') {
        status = 1;
    }
    return status;   
}

int is_invalid_double_op(char *string) {
    int status = 0;
    if ((string + 1) != NULL) {
        if (*(string + 1) == '-') {
            status = 0;
        } else if (is_binary_op(*string) && is_binary_op(*(string + 1))) {
            status = 1;
        }
    }
    return status;
}

int triple_binary_op(char *string) {
    int status = 0;
    size_t length_string = strlen(string);
    int operators_counter = 0;

    for (size_t i = 0; length_string > i && status != 1; i++) {
        if (is_binary_op(string[i])) {
            operators_counter += 1;
        } else {
            operators_counter = 0;
        }
        if (operators_counter == 3) {
            status = 1;
            break;
        }
    }
    return status;
}

int binary_op_after_math_op(char *string) {
    int status = 0;
    if ((string + 1) != NULL) {
        if (is_open_op(*string) && is_binary_op(*(string + 1)) && *(string + 1) != '-') status = 1;
    }
    return status;
}

int valid_node_position(char *string) {
    int status = 0;
    size_t length_string = strlen(string);

    int ready_to_find_node = 0;
    int first_node = 0;
    for (size_t i = 0; i < length_string && status != 1; i++) {
        if (ready_to_find_node == 1 && first_node == 1 && string[i] == '.') {
            status = 1;
        }
        if (is_num(string[i])) {
            ready_to_find_node = 1;
        }
        if (string[i] == '.' && ready_to_find_node == 1) {
            first_node += 1;
        }
        if (string[i] == '.' && ready_to_find_node != 1) status = 1;
        if (first_node > 1) status = 1;
        if (is_num(string[i]) != 1 && string[i] != '.') {
            ready_to_find_node = 0;
            first_node = 0;
        }
        
    }

    return status;
}

int is_num(char symbol) {
    int status = 0;
    if (symbol == '0' || symbol == '1' || symbol == '2' || symbol == '3' || symbol == '4' ||
        symbol == '5' || symbol == '6' || symbol == '7' || symbol == '8' || symbol == '9') {
        status = 1;
    }
    return status;
}

int enough_arguements(char *string) {
    int status = 0;
    int length_string = strlen(string);
    int find_num = 0;
    for (int i = 0; i < length_string; i++) {
        if (string[i] == '^' && find_num == 0) {
            status = 1;
            break;
        }
        if (is_num(string[i]) || string[i] == 'x') {
            find_num = 1;
        }
    }

    return status;
}

void upgrade_string(char *input_string) {
    char new_string[256] = {'\0'};
    size_t string_length = strlen(input_string);
    for (size_t i = 0, j = 0; i < string_length; i++) {
        if ((is_num(input_string[i]) || input_string[i] == 'x') && is_stuck_symbol(input_string[i + 1])) {    // 2cos -> 2*cos
            new_string[j] = input_string[i];
            new_string[j + 1] = '*';
            new_string[j + 2] = input_string[i + 1];
            j += 2;
            i += 1;
        } else if (input_string[i] == '-' && input_string[i + 1] == '-') {  // -- -> +
            new_string[j] = '+';
            i += 1;
        } else {
            new_string[j] = input_string[i];
        }
        j++;
    }
    char nothing = '\0';
    memset(input_string, nothing, 256);
    strcpy(input_string, new_string);
}

int is_stuck_symbol(char symbol) {
    int status = 0;
    if (symbol == 'c' || symbol == 'C' || symbol == 's' || symbol == 'S' || symbol == '(' || symbol == 'l' || symbol == 'L' || symbol == 't' || symbol == 'T' || symbol == 'q' || symbol == 'x') {
        status = 1;
    }
    return status;
}

int x_in_input_x_string(char *string) {
    int status = 0;
    size_t string_length = strlen(string);
    for(size_t i = 0; i < string_length; i++) {
        if (string[i] == 'x') {
            status = 1;
            break;
        }
    }
    return status;    
}

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


int num_after_math_op(char *symbol) {
    int status = 0;
    if (symbol + 1 != NULL) {
        if (is_math_operator(*symbol) && (!is_num(*(symbol + 1)) && *(symbol + 1) != '-' && *(symbol + 1) != 'x' && *(symbol + 1) != '(')) status = 1; 
    }
    return status;
}