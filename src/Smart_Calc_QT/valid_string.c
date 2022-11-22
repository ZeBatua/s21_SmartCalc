#include "calc.h"

int check_valid_brackets(char *string);
int valid_binary_op_position(char *string);
int is_binary_op(char string);
int triple_binary_op(char *string);
int is_invalid_double_op(char *string);
int is_open_op(char string);
int is_num(char symbol);
int binary_op_after_math_op(char *string);
int valid_node_position(char *string);
int check_math_neighbor(char *math);
int check_non_empty_brackets(char *string);
int enough_arguements(char *string);

int valid_string(char *input_string) {
    int status = 0;
    printf("string for VALID = %s\n", input_string);
    status += check_valid_brackets(input_string);  // счетчик открывающих скобки операторов
    status += valid_binary_op_position(input_string);  // проверка правильной позиции операторов
    status += valid_node_position(input_string);  // проверка правильно посталвенной точки
    status += enough_arguements(input_string);  // проверка правильно посталвенной точки
    // есть опе

    printf("FINAL STATUS = %d\n", !status);    
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
            if (is_num(string[i])) num_status = 1;
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

    for (size_t i = 1; length_string > i && status != 1; i++) {
        if (is_open_op(string[i]) && is_binary_op(string[i + 1]) && string[i + 1] != '-') status = 1;
        if (string[i] == ')' && is_binary_op(string[i - 1])) status = 1;
        if (is_invalid_double_op(&string[i])) status = 1;  // проверка коректных 2 операторов подоряд
        if (binary_op_after_math_op(&string[i])) status = 1;  // проверка случаев вида cos(* sin(/
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
    if (string == '+' || string == '-' || string == '*' || string == '/' || string == '%') {
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

    for (size_t i = 1; length_string < i && status != 1; i++) {
        if (is_binary_op(string[i])) {
            operators_counter += 1;
        } else {
            operators_counter = 0;
        }
        if (operators_counter == 3) status = 1;
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
    printf("string in valid function = %s\n", &string[0]);
    for (size_t i = 0; i < length_string && status != 1; i++) {
        // printf("char = %c\n", string[i]);
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
    int status = 1;
    int length_string = strlen(string);
    for (int i = 0; i < length_string; i++) {
        if (string[i] == '^') break;
        if (is_num(string[i]) || string[i] == 'x') {
            status = 0;
            break;
        }
    } 


    return status;
}

// + - * / % ^ 
//  функция которая идет по строке и ищет 3 операттора подряд 
// двойная
