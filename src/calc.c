#include "calc.h"

int main() {
    const char *start_string[256] = {0};
    double result = 0.0;
    result = calc_string(start_string);
    printf("result = %F\n", result);

    return 0;
}

double calc_string(start_string) {
    num_stack *n_head = NULL;
    num_stack *f_head = NULL;
    double current_num = 0.0;
    char *current_function[4] = {'\0'};
    int priority_status = 0;
    int string_position = 0;
    while (string_position < strlen(start_string)) {
        if (get_num(start_string, &string_position, &current_num) {
            push_num(&n_head, current_num);
        } else if (get_function(start_string, &string_position, current_function) {
            priority_status = push_function(&f_head, *current_function);
        } else {
            exit(INVALID_VALUE);
        }
        if (priority_status) { // это надо функцией реализовать а не ифом, тк может быть необходимо сразу несколько операций.
            calc_current_values(&n_head, &f_head);
        }
        string_position++;
    }
}

void calc_current_values(num_stack **num_head, op_stack **function_head) { //  МЫ СЮДА ЗАХОДИМ ТОЛЬКО ТОГДА КОГДА УЖЕ ЕСТЬ ТРЕБОВАНИЕ ЧТО ТО ВЫЧИСЛЯТЬ !!!!!!
    double first_value = 0.0;
    double second_value = 0.0;
    char current_function[4] = {'\0'};
    first_value = pop_num(&n_head);
    second_value = pop_num(&n_head);
    current_function = pop_function(&f_head);
    if (strcmp(current_function, op_struct.open_bracket)) {
        // sosi
    } else if (strcmp(current_function, op_struct.closing_bracket)) {
        // escho razok
    } else if strcmp(current_function, op_struct.cosine)) {
        push(num_head, cos(first_value, second_value));
    } else if (strcmp(current_function, op_struct.sinus)) {
        push(num_head, );
    } else if (strcmp(current_function, op_struct.tangent)) {
        push(num_head, );
    } else if (strcmp(current_function, op_struct.arccosine)) {
        push(num_head, );
    } else if (strcmp(current_function, op_struct.arcsine)) {
        push(num_head, );
    } else if (strcmp(current_function, op_struct.arc_tangent)) {
        push(num_head, );
    } else if (strcmp(current_function, op_struct.square_root)) {
        push(num_head, );
    } else if (strcmp(current_function, op_struct.natural_logarithm)) {
        push(num_head, );
    } else if (strcmp(current_function, op_struct.decimal_logarithm)) {
        push(num_head, );
    }


}

void push_num(num_stack **head, double value) {
    num_stack *tmp = malloc(sizeof(num_stack));
    if (tmp == NULL) {
        exit(STACK_OVERFLOW);
    }
    tmp->next = *head;
    tmp->value = value;
    *head = tmp;
}

int push_function(func_stack **head, char current_function) {
    char previous_function = '\0';
    previous_function = peek_function(*head);
    int priority = 0;
    priority = get_execution_priority(previous_function, current_function);

    func_stack *tmp = malloc(sizeof(func_stack));
    if (tmp == NULL) {
        exit(STACK_OVERFLOW);
    }
    tmp->next = *head;
    tmp->value = value;
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
    value = out->value;
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
    value = out->value;
    free(out);
    return value;
}

double peek_num(const num_stack *head) {
    if (head == NULL) {
        exit(STACK_UNDERFLOW);
    }
    return head->value;
}

char peek_function(const func_stack *head) {
    if (head == NULL) {
        exit(STACK_UNDERFLOW);
    }
    return head->value;
}

void print_num_stack(const num_stack *head) {
    printf("stack >");
    while (head) {
        printf("%F ", head->value);
        head = head->next;
    }
    putchar('\n');
}

void print_func_stack(const func_stack *head) {
    printf("stack >");
    while (head) {
        printf("%F ", head->value);
        head = head->next;
    }
    putchar('\n');
}

int get_num(char *part_string, int *string_position, double *value) {
    int status = 0;
    char str_num[11] = "0123456789.";

    *value  = atof(part_string[*string_position]);
    while(strbrk(str_num, part_string[*string_position]) != NULL) {
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
    const char str_functions[41] = "(|)|+|-|*|/|^|%|u+|u-|cos|sin|tan|acos|asin|atan|sqrt|ln|log";
    char p_str[4] = {'\0'};
    p_str = strstr(str_functions, p_str); // ловим укзатель на первое полное совпадение
    if (p_str == NULL) {
        p_str[0] = {'\0'};
    } else {
        for (int i = 0; p_str[i] != '|'; i++) {
            string[i] = p_str[i];
        }
    }
}
