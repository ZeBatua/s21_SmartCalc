#include "calc.h"

int main() {
  char start_string[256] = {"c(1)"}; // сделай ожидание закрывающей скобки, обработай ввод функций, двойная реализация степени (без и с "()")
  // пропиши все 3 кейса выдачи приоритета выполнения (закрывающая скобка, падение приоритета, конец строки)
  // проверить на утечки и бла бла бла
  // тесты сука!!!!!!!! не хрчу писатт тесты бл
  double result = 0.0;
  result = calc_string(start_string, 1); // 6 + 5 + 3 // 
  printf("result = %F\n", result);
  return 0;
}

//----------------------------------------------------------------------------------------------//


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

