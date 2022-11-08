#include "../calc.h"

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
