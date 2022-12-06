#include "calc.h"

void main() {
  double my_return[3] = {0.0};
  double balance_owed = 200000.0, term = 24.0, percent = 12.0;
  credit_annuity_calc(balance_owed, term, percent, my_return);
  printf("mounthly_payment = %F\n", my_return[0]);
  printf("total_payment = %F\n", my_return[1]);
  printf("overpayment = %F\n\n", my_return[2]);

  credit_diff_calc(balance_owed, term, percent, my_return);
  printf("mounthly_payment = %F\n", my_return[0]);
  printf("total_payment = %F\n", my_return[1]);
  printf("overpayment = %F\n\n", my_return[2]);
}


  // ты можешь возвращать конкретный код ошибки в соотвествии прописывать ее выводе qt
  // gcc calc.c adapt_string.c valid_string.c read_string.c -g -o main && ./main
  // дай x по умолчанию значение 0.0, иначе могут быть ошибки и сложности которые мне не нужны
  // 9^^3 багуется 
  // проверь случай -^
  // в графике падает x*x*x())) как и в других местах
  // char string_xxx[256] = {"10 * -10"}; не работает