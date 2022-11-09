#include "../../calc.h"

void printFuncStack(func_stack *head) {
  printf("stack > ");
  while (head) {
    printf("%c ", head->function);
    head = head->next;
  }
  putchar('\n');
}