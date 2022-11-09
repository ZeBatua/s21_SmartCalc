#include "calc.h"

int main() {
  // char start_string[256] = {"3+4*2/(1-5)"}; // сделай ожидание закрывающей скобки, обработай ввод функций, двойная реализация степени (без и с "()")
  // пропиши все 3 кейса выдачи приоритета выполнения (закрывающая скобка, падение приоритета, конец строки)
  char start_string[256] = {"1+2"};
  double result = 0.0;
  int stop = 0;
  result = read_string(start_string, &stop); // 6 + 5 + 3 // 
  printf("result = %F\n", result);
  return 0;
}

/*
//----------------------------------------------------------------------------------------------//

u- -> s- S- c- C- t- T- l- L- q- first_symbol !before_bracket! after_bracket


  OPS chtoto = {"(",   ")",   "+",   "-",   "*",   "/",   "^",
                "%",   "U",   "u",   "c",   "s",   "t",   "C",
                "S",   "T",   "q",   "l",   "L"};


-4
-0.5


//----------------------------------------------------------------------------------------------//
*/




//   tcase_add_test(tc1_1, cosine_1);
//   tcase_add_test(tc1_1, cosine_2);
//   tcase_add_test(tc1_1, cosine_3);
//   tcase_add_test(tc1_1, cosine_4);
//   tcase_add_test(tc1_1, cosine_5);

// START_TEST(cosine_1) {
//   char start_string[256] = {"cos(0)"};  
//   double result = 0.0;
//   result = calc_string(start_string, 1);
//   ck_assert_double_eq(result, cos(0));
// }
// END_TEST

// START_TEST(cosine_2) {
//   char start_string[256] = {"cos(1)"};  
//   double result = 0.0;
//   result = calc_string(start_string, 1);
//   ck_assert_double_eq(result, cos(1));
// }
// END_TEST

// START_TEST(cosine_3) {
//   char start_string[256] = {"cos(-5)"};  
//   double result = 0.0;
//   result = calc_string(start_string, 1);
//   ck_assert_double_eq(result, cos(-5));
// }
// END_TEST

// START_TEST(cosine_4) {
//   char start_string[256] = {"cos(5)"};  
//   double result = 0.0;
//   result = calc_string(start_string, 1);
//   ck_assert_double_eq(result, cos(5));
// }
// END_TEST

// START_TEST(cosine_5) {
//   char start_string[256] = {"cos(0.30)"};  
//   double result = 0.0;
//   result = calc_string(start_string, 1);
//   ck_assert_double_eq(result, cos(0.30));
// }
// END_TEST

