#include "calc.h"

int main() {
    // char start_string[20] = {'6', '-', '5', '+', '3'}; // check_minus_behind() -> comlite_sentence()
    char start_string[20] = {"6-5+3"}; // -5 + 3 = -2 // -2 + 6 = 4 // == // 6 - 5 = 1 // 1 + 3 = 4; // 4 true // -2 false 
    double result = 0.0;
    result = calc_string(start_string);
    printf("result = %F\n", result);

    return 0;
}

double calc_string(char *start_string) {
    double result = 0.0;
    num_stack *n_head = NULL;
    func_stack *f_head = NULL;
    double current_num = 0.0;
    char current_function = '\0';
    int priority_status = 0;
    int string_position = 0;
    int end_string_status = 0;
    
    int bugstop = 0;

    size_t check_size = strlen(start_string);

    while (string_position < strlen(start_string) || bugstop == 10) {
        if (get_num(start_string, &string_position, &current_num)) {
            push_num(&n_head, current_num);
        } else if (get_function(start_string, &string_position, &current_function)) {
            printf("current_function = %c\n", current_function);
            priority_status = push_function(&f_head, current_function);
            printFuncStack(f_head);
        } else {
            exit(INVALID_VALUE);
        }
        if (priority_status || strlen(start_string) == string_position) { // это надо функцией реализовать а не ифом, тк может быть необходимо сразу несколько операций.
            if (strlen(start_string) == string_position)  {
                end_string_status = 1;
            }
            calc_current_values(&n_head, &f_head, end_string_status);
        }
        bugstop++;
    }
    result = pop_num(&n_head);
    return result;
}

double calc_current_values(num_stack **num_head, func_stack **function_head, int end_strig) { //  МЫ СЮДА ЗАХОДИМ ТОЛЬКО ТОГДА КОГДА УЖЕ ЕСТЬ ТРЕБОВАНИЕ ЧТО ТО ВЫЧИСЛЯТЬ !!!!!!git
    int status_priority = 0;
    double first_value = 0.0;
    double second_value = 0.0;
    first_value = pop_num(num_head);
    char current_function = '\0';
    printFuncStack(*function_head);
    current_function = pop_function(function_head);

    printNumStack(*num_head);
    printFuncStack(*function_head);

    OPS chtoto = { "(", ")", "+", "-", "*", "/", "^", "%", "u+", "u-", "cos", "sin", "tan", "acos", "asin", "atan", "sqrt", "ln", "lg" };
    if (s21_strcmp(current_function, chtoto.open_bracket)) {
        status_priority = 0;
    } else if (s21_strcmp(current_function, chtoto.closing_bracket)) {
        status_priority = 1;
    } else if (s21_strcmp(current_function, chtoto.addition)) {
        second_value = pop_num(num_head);
        push_num(num_head, first_value + second_value);
    } else if (s21_strcmp(current_function, chtoto.subtraction)) {
        second_value = pop_num(num_head);
        // first_value = -first_value;
        push_num(num_head, second_value - first_value);
    } else if (s21_strcmp(current_function, chtoto.multiplication)) {
        second_value = pop_num(num_head);
        push_num(num_head, first_value * second_value);
    } else if (s21_strcmp(current_function, chtoto.division)) {
        second_value = pop_num(num_head);
        push_num(num_head, first_value / second_value);
    } else if (s21_strcmp(current_function, chtoto.modulus)) {
        second_value = pop_num(num_head);
        push_num(num_head, fmod(first_value, second_value));
    } else if (s21_strcmp(current_function, chtoto.power)) {
        second_value = pop_num(num_head);
        push_num(num_head, pow(first_value, second_value));
    } else if (s21_strcmp(current_function, chtoto.cosine)) {
        push_num(num_head, cos(first_value));
    } else if (s21_strcmp(current_function, chtoto.sinus)) {
        push_num(num_head, sin(first_value));
    } else if (s21_strcmp(current_function, chtoto.tangent)) {
        push_num(num_head, tan(first_value));
    } else if (s21_strcmp(current_function, chtoto.arccosine)) {
        push_num(num_head, acos(first_value));
    } else if (s21_strcmp(current_function, chtoto.arcsine)) {
        push_num(num_head, asin(first_value));
    } else if (s21_strcmp(current_function, chtoto.arc_tangent)) {
        push_num(num_head, atan(first_value));
    } else if (s21_strcmp(current_function, chtoto.square_root)) {
        push_num(num_head, sqrt(first_value));
    } else if (s21_strcmp(current_function, chtoto.natural_logarithm)) {
        push_num(num_head, log(first_value));
    } else if (s21_strcmp(current_function, chtoto.decimal_logarithm)) {
        push_num(num_head, log10(first_value));
    }
    // check_status_priority();
    if (end_strig == 1) {
        while (peek_function(*function_head) != '\0') {
            calc_current_values(num_head, function_head, end_strig);
        }
    }
    return status_priority;
}

int s21_strcmp(char current_function, char *struct_function) {
    int status = 0;
    if (current_function == struct_function[0]) status = 1;
    return status;
}

void push_num(num_stack **head, double num) {
    num_stack *tmp = malloc(sizeof(num_stack));
    if (tmp == NULL) {
        exit(STACK_OVERFLOW);
    }
    tmp->next = *head;
    tmp->num = num;
    *head = tmp;
}

int push_function(func_stack **head, char current_function) {
    char *previous_function = '\0';
    // previous_function = peek_function(*head);
    int priority = 0;
    // priority = get_execution_priority(previous_function, current_function);

    func_stack *tmp = malloc(sizeof(func_stack));
    if (tmp == NULL) {
        exit(STACK_OVERFLOW);
    }
    tmp->next = *head;
    tmp->function = current_function;
    *head = tmp;

    return priority;
}

double pop_num(num_stack **head) {
    num_stack *out;
    double value = 0.0;
    if (*head == NULL) {
        exit(STACK_UNDERFLOW);
    }
    out = *head;
    *head = (*head)->next;
    value = out->num;
    free(out);
    return value;
}

char pop_function(func_stack **head) {
    func_stack *out;
    char value = '\0';
    if (*head == NULL) {
        exit(STACK_UNDERFLOW);
    }
    out = *head;
    *head = (*head)->next;
    value = out->function;
    free(out);
    return value;
}

double peek_num(const num_stack *head) {
    if (head == NULL) {
        exit(STACK_UNDERFLOW);
    }
    return head->num;
}

char peek_function(const func_stack *head) {
    if (head == NULL) {
        printf("STACK_UNDERFLOW!!!\n");
        return '\0';
    }
    return head->function;
}

int get_num(char *part_string, int *string_position, double *value) {
    int status = 0;

    static int debug_exit = 0;
    debug_exit++;
    if (debug_exit == 8) {
        printf("debug_exit\n");
        exit(0);
    }

    char str_num[11] = "0123456789.";
    // printf("char = %c\n", part_string[*string_position]);
    *value  = atof(&part_string[*string_position]);
    char *debug = '\0';

    int count = 0;

    // printf("string: %s\n", &part_string[*string_position]);
    // printf("AAAAAAAAAAAAA\n");
    while(s21_strchr_2(str_num, part_string[*string_position]) != '\0') {
        // printf("strchr: %c\n", part_string[*string_position]);
        // printf("strchr: %d\n", part_string[*string_position]);
        // printf("strchr: %s\n", &part_string[*string_position]);
        *string_position += 1;
        status = 1;
        if (*string_position == 10) {
            printf("loh\n");
            exit(0);
        }
    }

    return status;
    // обработка первой точки
    // обработка нескольких точек, хотя
}

char s21_strchr_2(char *string, char symbol) {
    int check = 0;
    int i = 0;
    for (; i < strlen(string); i++) {
        if (string[i] == symbol) {
            check = 1;
            return string[i];
        }
    }
    return '\0';
}


char s21_strchr(char string, char symbol) {
    int check = 0;
    if (string == symbol) {
        check = 1;
        return string;
    }
    return '\0';
    // return NULL;
}

int get_function(char *part_string, int *string_position, char *function) { // нет обработки прохода по строке
    int status = 0;
    const char str_functions[60] = "(|)|+|-|*|/|^|%|U|u|c|s|t|C|S|T|q|l|L"; // может все таки буковы....
    printf("current string: %s\n", &part_string[*string_position]);

    *function = *strchr(str_functions, part_string[*string_position]); // ловим укзатель на первое полное совпадение
    // function[1] = '\0';
    // function[2] = '\0';
    // function[3] = '\0';
    if (function != NULL) {
        status = 1;
        *string_position += 1;
    }
    // printf("function = %s\n", function);
    printf("function = %c\n", *function);

    return status;

    // обработка первой точки
    // обработка нескольких точек, хотя
}


void printNumStack(num_stack *head) {
    printf("stack > ");
    while (head) {
        printf("%F ", head->num);
        head = head->next;
    }
    putchar('\n');
}

void printFuncStack(func_stack *head) {
    printf("stack > ");
    while (head) {
        printf("%c ", head->function);
        head = head->next;
    }
    putchar('\n');
}


// const char str_functions[60] = "(|)|+|-|*|/|^|%|u+|u-|cos|sin|tan|acos|asin|atan|sqrt|ln|log"; // может все таки буковы....
