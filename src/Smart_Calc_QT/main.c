#include "calc.h"

void main() {
  char x_string[256] = {"10"};
  char start_string[256] = {"3^3+x*x+10/543 * 5325"};

  if (valid_string(start_string, x_string)) {
    double res = calc_string(start_string, x_string);
    printf("res = %F\n", res);
  } else {
    printf("NOT VALID\n");
  }
}


  // ты можешь возвращать конкретный код ошибки в соотвествии прописывать ее выводе qt
  // gcc calc.c adapt_string.c valid_string.c read_string.c -g -o main && ./main
  // дай x по умолчанию значение 0.0, иначе могут быть ошибки и сложности которые мне не нужны
  // 9^^3 багуется 