#include "calc.h"

int main() {
    char start_string[256] = {'1', '+', '2'};
    double result = 0.0;
    result = calc_string(start_string);
    printf("result = %F\n", result);

    return 0;
}

double calc_string(char *start_string) {
    num_stack *n_head = NULL;
    func_stack *f_head = NULL;
    double current_num = 0.0;
    char current_function[4] = {'\0'};
    int priority_status = 0;
    int string_position = 0;
    while (string_position < strlen(start_string)) {
        if (get_num(start_string, &string_position, &current_num)) {
            push_num(&n_head, current_num);
        } else if (get_function(start_string, &string_position, current_function)) {
            priority_status = push_function(&f_head, current_function);
        } else {
            exit(INVALID_VALUE);
        }
        if (priority_status) { // это надо функцией реализовать а не ифом, тк может быть необходимо сразу несколько операций.
            calc_current_values(&n_head, &f_head);
        }
        string_position++;
    }
}

int calc_current_values(num_stack **num_head, func_stack **function_head) { //  МЫ СЮДА ЗАХОДИМ ТОЛЬКО ТОГДА КОГДА УЖЕ ЕСТЬ ТРЕБОВАНИЕ ЧТО ТО ВЫЧИСЛЯТЬ !!!!!!git
    int status_priority = 0;
    double first_value = 0.0;
    double second_value = 0.0;
    first_value = pop_num(num_head);
    char *current_function = {'\0'};
    current_function = pop_function(function_head);

    OPS chtoto = { "(", ")", "+", "-", "*", "/", "^", "%", "u+", "u-", "cos", "sin", "tan", "acos", "asin", "atan", "sqrt", "ln", "lg" };
    if (strcmp(current_function, chtoto.open_bracket)) {
        status_priority = 0;
    } else if (strcmp(current_function, chtoto.closing_bracket)) {
        status_priority = 1;
    } else if (strcmp(current_function, chtoto.addition)) {
        second_value = pop_num(num_head);
        push_num(num_head, first_value + second_value);
    } else if (strcmp(current_function, chtoto.subtraction)) {
        second_value = pop_num(num_head);
        push_num(num_head, first_value - second_value);
    } else if (strcmp(current_function, chtoto.multiplication)) {
        second_value = pop_num(num_head);
        push_num(num_head, first_value * second_value);
    } else if (strcmp(current_function, chtoto.division)) {
        second_value = pop_num(num_head);
        push_num(num_head, first_value / second_value);
    } else if (strcmp(current_function, chtoto.modulus)) {
        second_value = pop_num(num_head);
        push_num(num_head, fmod(first_value, second_value));
    } else if (strcmp(current_function, chtoto.power)) {
        second_value = pop_num(num_head);
        push_num(num_head, pow(first_value, second_value));
    } else if (strcmp(current_function, chtoto.cosine)) {
        push_num(num_head, cos(first_value));
    } else if (strcmp(current_function, chtoto.sinus)) {
        push_num(num_head, sin(first_value));
    } else if (strcmp(current_function, chtoto.tangent)) {
        push_num(num_head, tan(first_value));
    } else if (strcmp(current_function, chtoto.arccosine)) {
        push_num(num_head, acos(first_value));
    } else if (strcmp(current_function, chtoto.arcsine)) {
        push_num(num_head, asin(first_value));
    } else if (strcmp(current_function, chtoto.arc_tangent)) {
        push_num(num_head, atan(first_value));
    } else if (strcmp(current_function, chtoto.square_root)) {
        push_num(num_head, sqrt(first_value));
    } else if (strcmp(current_function, chtoto.natural_logarithm)) {
        push_num(num_head, log(first_value));
    } else if (strcmp(current_function, chtoto.decimal_logarithm)) {
        push_num(num_head, log10(first_value));
    }
    // check_status_priority();
    return status_priority;
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

int push_function(func_stack **head, char *current_function) {
    char *previous_function = '\0';
    previous_function = peek_function(*head);
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

char *pop_function(func_stack **head) {
    func_stack *out;
    char *value = '\0';
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

char *peek_function(const func_stack *head) {
    if (head == NULL) {
        exit(STACK_UNDERFLOW);
    }
    return head->function;
}

void print_num_stack(const num_stack *head) {
    printf("stack >");
    while (head) {
        printf("%F ", head->num);
        head = head->next;
    }
    putchar('\n');
}

void print_func_stack(const func_stack *head) {
    printf("stack >");
    while (head) {
        printf("%F ", head->function);
        head = head->next;
    }
    putchar('\n');
}

int get_num(char *part_string, int *string_position, double *value) {
    int status = 0;
    char str_num[11] = "0123456789.";
    *value  = atof(&part_string[*string_position]);
    while(strpbrk(str_num, &part_string[*string_position]) != NULL) {
        *string_position += 1;
        status = 1;
    }
    return status;
    // обработка первой точки
    // обработка нескольких точек, хотя
}

int get_function(char *part_string, int *string_position, char *function) { // нет обработки прохода по строке
    int status = 1;
    find_string_function(function);
    if (function[0] == '\0') status = 0;
    return status;

    // обработка первой точки
    // обработка нескольких точек, хотя
}

void find_string_function(char *string) {
    const char str_functions[60] = "(|)|+|-|*|/|^|%|u+|u-|cos|sin|tan|acos|asin|atan|sqrt|ln|log";
    char *p_str = '\0';
    p_str = strstr(str_functions, p_str); // ловим укзатель на первое полное совпадение
    if (p_str == NULL) {
        p_str[0] = '\0';
    } else {
        for (int i = 0; p_str[i] != '|'; i++) {
            string[i] = p_str[i];
        }
    }
}
