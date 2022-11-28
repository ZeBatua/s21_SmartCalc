#include "calc.h"

void main() {
  char x_string[256] = {"  cos5 "};
  char start_string[256] = {"2*1x"};
  double res = calc_string(start_string, x_string);
}


  // ты можешь возвращать конкретный код ошибки в соотвествии прописывать ее выводе qt
  // gcc calc.c adapt_string.c valid_string.c read_string.c -g -o main && ./main
  // дай x по умолчанию значение 0.0, иначе могут быть ошибки и сложности которые мне не нужны