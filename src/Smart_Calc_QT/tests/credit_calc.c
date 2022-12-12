#include <check.h>

#include "../calc.h"

START_TEST(credit_annuity_1) {
  double my_return[3] = {0.0};
  double balance_owed = 10000, term = 12., percent = 7.0;
  credit_annuity_calc(balance_owed, term, percent, my_return);
  double mounthly_payment = my_return[0];
  double total_payment = my_return[1];
  double overpayment = my_return[2];

  ck_assert_double_eq_tol(mounthly_payment, 865.27, 2);
  ck_assert_double_eq_tol(overpayment, 383.24, 2);
  ck_assert_double_eq_tol(total_payment, 10383.24, 2);
}
END_TEST


START_TEST(credit_annuity_2) {
  double my_return[3] = {0.0};
  double balance_owed = 150000, term = 15., percent = 9.0;
  credit_annuity_calc(balance_owed, term, percent, my_return);
  double mounthly_payment = my_return[0];
  double total_payment = my_return[1];
  double overpayment = my_return[2];

  ck_assert_double_eq_tol(mounthly_payment, 10610.46, 2);
  ck_assert_double_eq_tol(overpayment, 9156.90, 2);
  ck_assert_double_eq_tol(total_payment, 159156.9, 2);
}
END_TEST

START_TEST(credit_annuity_3) {
  double my_return[3] = {0.0};
  double balance_owed = 1500000, term = 18, percent = 6.0;
  credit_annuity_calc(balance_owed, term, percent, my_return);
  double mounthly_payment = my_return[0];
  double total_payment = my_return[1];
  double overpayment = my_return[2];

  ck_assert_double_eq_tol(mounthly_payment, 87347.6, 2);
  ck_assert_double_eq_tol(overpayment, 72256.8, 2);
  ck_assert_double_eq_tol(total_payment, 1572256.8, 2);
}
END_TEST

START_TEST(credit_diff_1) {
  double my_return[3] = {0.0};
  double balance_owed = 10000, term = 12., percent = 7.0;
  credit_diff_calc(balance_owed, term, percent, my_return);
  double mounthly_payment = my_return[0];
  double total_payment = my_return[1];
  double overpayment = my_return[2];

  ck_assert_double_eq_tol(mounthly_payment, 833.33, 2);
  ck_assert_double_eq_tol(overpayment, 379.17, 2);
  ck_assert_double_eq_tol(total_payment, 10379.17, 2);
}
END_TEST

START_TEST(credit_diff_2) {
  double my_return[3] = {0.0};
  double balance_owed = 150000, term = 15.0, percent = 9.0;
  credit_diff_calc(balance_owed, term, percent, my_return);
  double mounthly_payment = my_return[0];
  double total_payment = my_return[1];
  double overpayment = my_return[2];

  ck_assert_double_eq_tol(mounthly_payment, 10000.0, 2);
  ck_assert_double_eq_tol(overpayment, 9000.0, 2);
  ck_assert_double_eq_tol(total_payment, 159000.0, 2);
}
END_TEST

START_TEST(credit_diff_3) {
  double my_return[3] = {0.0};
  double balance_owed = 1500000, term = 18, percent = 6.0;
  credit_diff_calc(balance_owed, term, percent, my_return);
  double mounthly_payment = my_return[0];
  double total_payment = my_return[1];
  double overpayment = my_return[2];

  ck_assert_double_eq_tol(mounthly_payment, 83333.33, 2);
  ck_assert_double_eq_tol(overpayment, 71250.0, 2);
  ck_assert_double_eq_tol(total_payment, 1571250.0, 2);
}
END_TEST


int main(void) {
  Suite *s1 = suite_create("Core");
  TCase *tc1_1 = tcase_create("Core");
  SRunner *sr = srunner_create(s1);
  int tc = 0;
  suite_add_tcase(s1, tc1_1);

  tcase_add_test(tc1_1, credit_annuity_1);
  tcase_add_test(tc1_1, credit_annuity_2);
  tcase_add_test(tc1_1, credit_annuity_3);
  
  tcase_add_test(tc1_1, credit_diff_1);
  tcase_add_test(tc1_1, credit_diff_2);
  tcase_add_test(tc1_1, credit_diff_3);

  srunner_run_all(sr, CK_ENV);
  tc = srunner_ntests_failed(sr);
  srunner_free(sr);

  return tc == 0 ? 0 : 1;
}
