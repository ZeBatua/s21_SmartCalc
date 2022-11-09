#include "../../calc.h"

char peek_function(const func_stack *head) {
  if (head == NULL) {
    printf("STACK_UNDERFLOW!!!\n");
    return '\0';
  }
  return head->function;
}