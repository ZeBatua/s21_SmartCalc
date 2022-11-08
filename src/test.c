#include <check.h>

#include "calc.h"

//----------------------------------------------------------------------------------------------//

START_TEST(addition_1) {
  char start_string[256] = {"1+2"};
  double result = 0.0;
  result = calc_string(start_string, 1);
  ck_assert_double_eq(result, 3.0);
}
END_TEST

START_TEST(addition_2) {
  char start_string[256] = {"0+10.5"};
  double result = 0.0;
  result = calc_string(start_string, 1);
  ck_assert_double_eq(result, 10.5);
}
END_TEST

START_TEST(addition_3) {
  char start_string[256] = {"0+0"};
  double result = 0.0;
  result = calc_string(start_string, 1);
  ck_assert_double_eq(result, 0.0);
}
END_TEST

START_TEST(addition_4) {
  char start_string[256] = {"0+0"};
  double result = 0.0;
  result = calc_string(start_string, 1);
  ck_assert_double_eq(result, 0.0);
}
END_TEST

START_TEST(addition_5) {
  char start_string[256] = {"-100+50"};
  double result = 0.0;
  result = calc_string(start_string, 1);
  ck_assert_double_eq(result, -50.0);
}
END_TEST

//----------------------------------------------------------------------------------------------//

START_TEST(subtraction_1) {
  char start_string[256] = {"10-5"};
  double result = 0.0;
  result = calc_string(start_string, 1);
  ck_assert_double_eq(result, 5.0);
}
END_TEST

START_TEST(subtraction_2) {
  char start_string[256] = {"0-1000"};
  double result = 0.0;
  result = calc_string(start_string, 1);
  ck_assert_double_eq(result, -1000.0);
}
END_TEST

START_TEST(subtraction_3) {
  char start_string[256] = {"32-32"};
  double result = 0.0;
  result = calc_string(start_string, 1);
  ck_assert_double_eq(result, 0.0);
}
END_TEST

START_TEST(subtraction_4) {
  char start_string[256] = {"999-99-500-25-75-200-93-7-499"};
  double result = 0.0;
  result = calc_string(start_string, 1);
  ck_assert_double_eq(result, -499.0);
}
END_TEST

START_TEST(subtraction_5) {
  char start_string[256] = {"999-99-500+25-75-200+93-7-499"};
  double result = 0.0;
  result = calc_string(start_string, 1);
  ck_assert_double_eq(result, -263.0);
}
END_TEST

//----------------------------------------------------------------------------------------------//

START_TEST(multiplication_1) {
  char start_string[256] = {"10*5"};
  double result = 0.0;
  result = calc_string(start_string, 1);
  ck_assert_double_eq(result, 50.0);
}
END_TEST

START_TEST(multiplication_2) {
  char start_string[256] = {"-0*1000"};
  double result = 0.0;
  result = calc_string(start_string, 1);
  ck_assert_double_eq(result, 0.0);
}
END_TEST

START_TEST(multiplication_3) {
  char start_string[256] = {"32*2"};
  double result = 0.0;
  result = calc_string(start_string, 1);
  ck_assert_double_eq(result, 64.0);
}
END_TEST

START_TEST(multiplication_4) {
  char start_string[256] = {"2*2*2*8"};
  double result = 0.0;
  result = calc_string(start_string, 1);
  ck_assert_double_eq(result, 64.0);
}
END_TEST

START_TEST(multiplication_5) {
  char start_string[256] = {"-7*6"};
  double result = 0.0;
  result = calc_string(start_string, 1);
  ck_assert_double_eq(result, -42.0);
}
END_TEST

//----------------------------------------------------------------------------------------------//

START_TEST(division_1) {
  char start_string[256] = {"10/2"};
  double result = 0.0;
  result = calc_string(start_string, 1);
  ck_assert_double_eq(result, 5.0);
}
END_TEST

START_TEST(division_2) {
  char start_string[256] = {"0/4567"};
  double result = 0.0;
  result = calc_string(start_string, 1);
  ck_assert_double_eq(result, 0.0);
}
END_TEST

START_TEST(division_3) {
  char start_string[256] = {"31/2"};
  double result = 0.0;
  result = calc_string(start_string, 1);
  ck_assert_double_eq(result, 15.5);
}
END_TEST

START_TEST(division_4) {
  char start_string[256] = {"100/2/2/5/5"};
  double result = 0.0;
  result = calc_string(start_string, 1);
  ck_assert_double_eq_tol(result, 1.0, 7);
}
END_TEST

START_TEST(division_5) {
  char start_string[256] = {"-999/9"};
  double result = 0.0;
  result = calc_string(start_string, 1);
  ck_assert_double_eq(result, -111.0);
}
END_TEST

//----------------------------------------------------------------------------------------------//

START_TEST(power_1) {
  char start_string[256] = {"10^2"};
  double result = 0.0;
  result = calc_string(start_string, 1);
  ck_assert_double_eq(result, 100.0);
}
END_TEST

START_TEST(power_2) {
  char start_string[256] = {"1^43"};
  double result = 0.0;
  result = calc_string(start_string, 1);
  ck_assert_double_eq(result, 1.0);
}
END_TEST

START_TEST(power_3) {
  char start_string[256] = {"3^2"};
  double result = 0.0;
  result = calc_string(start_string, 1);
  ck_assert_double_eq(result, 9.0);
}
END_TEST

START_TEST(power_4) {
  char start_string[256] = {"0^0"};
  double result = 0.0;
  result = calc_string(start_string, 1);
  ck_assert_ldouble_eq_tol(result, 0.0, 7);
}
END_TEST

START_TEST(power_5) {
  char start_string[256] = {"-1^3"};
  double result = 0.0;
  result = calc_string(start_string, 1);
  ck_assert_double_eq(result, -1.0);
}
END_TEST

//----------------------------------------------------------------------------------------------//

START_TEST(cosine_1) {
  char start_string[256] = {"cos(0)"};  
  double result = 0.0;
  result = calc_string(start_string, 1);
  ck_assert_double_eq(result, cos(0));
}
END_TEST

START_TEST(cosine_2) {
  char start_string[256] = {"cos(1)"};  
  double result = 0.0;
  result = calc_string(start_string, 1);
  ck_assert_double_eq(result, cos(1));
}
END_TEST

START_TEST(cosine_3) {
  char start_string[256] = {"cos(-5)"};  
  double result = 0.0;
  result = calc_string(start_string, 1);
  ck_assert_double_eq(result, cos(-5));
}
END_TEST

START_TEST(cosine_4) {
  char start_string[256] = {"cos(5)"};  
  double result = 0.0;
  result = calc_string(start_string, 1);
  ck_assert_double_eq(result, cos(5));
}
END_TEST

START_TEST(cosine_5) {
  char start_string[256] = {"cos(0.30)"};  
  double result = 0.0;
  result = calc_string(start_string, 1);
  ck_assert_double_eq(result, cos(0.30));
}
END_TEST


//----------------------------------------------------------------------------------------------//

int main(void) {
  Suite *s1 = suite_create("Core");
  TCase *tc1_1 = tcase_create("Core");
  SRunner *sr = srunner_create(s1);
  int tc = 0;
  suite_add_tcase(s1, tc1_1);

  tcase_add_test(tc1_1, addition_1);
  tcase_add_test(tc1_1, addition_2);
  tcase_add_test(tc1_1, addition_3);
  tcase_add_test(tc1_1, addition_4);
  tcase_add_test(tc1_1, addition_5);

  tcase_add_test(tc1_1, subtraction_1);
  tcase_add_test(tc1_1, subtraction_2);
  tcase_add_test(tc1_1, subtraction_3);
  tcase_add_test(tc1_1, subtraction_4);
  tcase_add_test(tc1_1, subtraction_5);

  tcase_add_test(tc1_1, multiplication_1);
  tcase_add_test(tc1_1, multiplication_2);
  tcase_add_test(tc1_1, multiplication_3);
  tcase_add_test(tc1_1, multiplication_4);
  tcase_add_test(tc1_1, multiplication_5);

  tcase_add_test(tc1_1, division_1);
  tcase_add_test(tc1_1, division_2);
  tcase_add_test(tc1_1, division_3);
  tcase_add_test(tc1_1, division_4);
  tcase_add_test(tc1_1, division_5);

  tcase_add_test(tc1_1, power_1);
  tcase_add_test(tc1_1, power_2);
  tcase_add_test(tc1_1, power_3);
  tcase_add_test(tc1_1, power_4);
  tcase_add_test(tc1_1, power_5);

  tcase_add_test(tc1_1, cosine_1);
  tcase_add_test(tc1_1, cosine_2);
  tcase_add_test(tc1_1, cosine_3);
  tcase_add_test(tc1_1, cosine_4);
  tcase_add_test(tc1_1, cosine_5);

  srunner_run_all(sr, CK_ENV);
  tc = srunner_ntests_failed(sr);
  srunner_free(sr);

  return tc == 0 ? 0 : 1;
}
