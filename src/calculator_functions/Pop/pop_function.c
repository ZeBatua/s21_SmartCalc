#include "../../calc.h"

char pop_function(func_stack **head) {
  func_stack *out;
  char value = '\0';
  if (*head == NULL) {
    return value;
  }
  out = *head;
  *head = (*head)->next;
  value = out->function;
  free(out);
  return value;
}