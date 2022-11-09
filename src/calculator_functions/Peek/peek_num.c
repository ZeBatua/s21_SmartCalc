#include "../../calc.h"

double peek_num(const num_stack *head) {
  if (head == NULL) {
    exit(STACK_UNDERFLOW);
  }
  return head->num;
}