#include "calc.h"

int main() {
    // Stack *head = NULL;
    const char *start_string[256] = {0};
    char *result_string[256] = {0};
    double result = 0.0;
    result = calc_string(start_string);


    // for (int i = 0; i < 10; i++) {
    //     push(&head, i);
    // }

    // printf("size = %d\n", getSize(head));

    // while (head) {
    //     printf("%d ", pop2(&head));
    // }

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
        string_position++;
        if (start_string[i] == is_num(start_string, &current_num) {
            push_num(&n_head, current_num);
        } else if (start_string[i] == is_function(start_string, &current_num) {
            priority_status = push_function(&f_head, current_function);
        } else {
            exit(INVALID_VALUE);
        }
        double first_value = 0.0;
        double second_value = 0.0;
        if (priority_status) {
            first_value = pop_num();
            second_value = pop_num();
            pop_function();
            calc_current_values(first_value, second_value, current_function);
            priority_status = 0;
        }
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

int push_function(op_stack **head, char current_operation) {
    char previous_function = '\0';
    previous_function = peek_function(*head);
    get_execution_priority(previ);
    op_stack *tmp = malloc(sizeof(op_stack));
    if (tmp == NULL) {
        exit(STACK_OVERFLOW);
    }
    tmp->next = *head;
    tmp->value = value;
    *head = tmp;
}

T pop2(Stack **head) {
    Stack *out;
    T value;
    if (*head == NULL) {
        exit(STACK_UNDERFLOW);
    }
    out = *head;
    *head = (*head)->next; // ?
    value = out->value;
    free(out);
    return value;
}


T peek(const Stack* head) {
    if (head == NULL) {
        exit(STACK_UNDERFLOW);
    }
    return head->value;
}

void printStack(const Stack* head) {
    printf("stack >");
    while (head) {
        printf("%d ", head->value);
        head = head->next;
    }
}


size_t getSize(const Stack *head) {
    size_t size = 0;
    while (head) {
        size++;
        head = head->next;
    }
    return size;
}