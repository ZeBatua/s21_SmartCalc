#include "../../calc.h"

void printNumStack(num_stack *head) {
  printf("stack > ");
  while (head) {
    printf("%F ", head->num);
    head = head->next;
  }
  putchar('\n');
}
