#include "calc.h"

void main() {
  char string_xxx[256] = {"10*10/5-100+4"};
  char start_string[256] = {"x*x"};

    // char string_xxx[256] = {"10 * -10"}; не работает
  // char start_string[256] = {"x*x"};



  double res = 0.0;
  // if (valid_string(start_string, string_xxx)) {
  res = calc_string(start_string, string_xxx);
    printf("res = %F\n", res);
  // } else {
  //   printf("NOT VALID\n");
  // }
}


  // ты можешь возвращать конкретный код ошибки в соотвествии прописывать ее выводе qt
  // gcc calc.c adapt_string.c valid_string.c read_string.c -g -o main && ./main
  // дай x по умолчанию значение 0.0, иначе могут быть ошибки и сложности которые мне не нужны
  // 9^^3 багуется 
  // проверь случай -^