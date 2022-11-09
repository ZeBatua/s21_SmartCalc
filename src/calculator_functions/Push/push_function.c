#include "../../calc.h"

int push_function(func_stack **head, char current_function) {
  char previous_function = '\0';
  int priority = 0;
  previous_function = peek_function(*head);


  func_stack *tmp = malloc(sizeof(func_stack));
  if (tmp == NULL) {
    exit(STACK_OVERFLOW);
  }
  tmp->next = *head;
  tmp->function = current_function;
  *head = tmp;



  return priority;
}
