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
    char current_function = '\0';
    int priority_status = 0;
    int string_position = 0;
    while (string_position < strlen(start_string)) {
        if (get_num(start_string, &current_num, &string_position) {
            push_num(&n_head, current_num);
        } else if (get_function(start_string, &current_num, &string_position) {
            priority_status = push_function(&f_head, current_function);
        } else {
            exit(INVALID_VALUE);
        }
        double first_value = 0.0;
        double second_value = 0.0;
        if (priority_status) {
            first_value = pop_num(&n_head);
            second_value = pop_num(&n_head);
            pop_function(&f_head);
            calc_current_values(first_value, second_value, current_function);
            priority_status = 0;
        }
        string_position++;
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

double pop_function(func_stack **head) {
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

int get_num(char *part_string, double *value, int string_position) {
    int status = 0;
    if (part_string[string_position]) {
        
    }

    return status;
}

// size_t getSize(const Stack *head) {
//     size_t size = 0;
//     while (head) {
//         size++;
//         head = head->next;
//     }
//     return size;
// }
