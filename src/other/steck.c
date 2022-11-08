#include <stdio.h>
#include <stdlib.h>

#define STACK_OVERFLOW  -100
#define STACK_UNDERFLOW -101
#define OUT_OF_MEMORY   -102
#define int T

typedef struct Node_tag {
    T value;
    struct Node_tag *next;
} Node_t;

void push(Node_t **head, T value);
Node_t* pop1(Node_t **head);
T pop2(Node_t **head);
T peek(const Node_t* head);
void printStack(const Node_t* head);
size_t getSize(const Node_t *head);

int main () {
    Node_t *head = NULL;
    for (int i = 0; i < 10; i++) {
        push(&head, i);
    }
    printf("size = %d\n", getSize(head));
    while (head) {
        printf("%d ", pop2(&head));
    }
    return 0;
}

void push(Node_t **head, T value) {
    Node_t *tmp = malloc(sizeof(Node_t));
    if (tmp == NULL) {
        exit(STACK_OVERFLOW);
    }
    tmp->next = *head; // передаем созданной ячейке адрес предыдущей (в качестве информации, а не изменения адреса самой ячейки)
    tmp->value = value; // заполняем ячеку информацией

    // printf("1_adress = %p\n", *head);
    // printf("1_adress = %d\n", *head);
    // printf("1_adress = %s\n\n", *head);

    *head = tmp; // !!! теперь когда в следующий раз мы также подадим head будет создаваться новая tmp вновь заменяющая head 
    // но я все еще не понимаю почему тогда значения старого не пропдают.

    // printf("2_adress = %p\n", tmp);
    // printf("2_adress = %d\n", tmp->value);

    // exit(0);
}


Node_t* pop1(Node_t **head) {
    Node_t *out;
    if ((*head) == NULL) {
        exit(STACK_UNDERFLOW);
    }
    out = *head;
    *head = (*head)->next;
    return out;
}

T pop2(Node_t **head) {
    Node_t *out;
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


T peek(const Node_t* head) {
    if (head == NULL) {
        exit(STACK_UNDERFLOW);
    }
    return head->value;
}

void printStack(const Node_t* head) {
    printf("stack >");
    while (head) {
        printf("%d ", head->value);
        head = head->next;
    }
}


size_t getSize(const Node_t *head) {
    size_t size = 0;
    while (head) {
        size++;
        head = head->next;
    }
    return size;
}