#include "../../calc.h"

void push_num(num_stack **head, double num) {
  num_stack *tmp = malloc(sizeof(num_stack));
  if (tmp == NULL) {
    exit(STACK_OVERFLOW);
  }
  tmp->next = *head;
  tmp->num = num;
  *head = tmp;
}
