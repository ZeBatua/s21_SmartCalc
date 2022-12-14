#include <check.h>

#include "../calc.h"

START_TEST(dep_calc_1_no_cap) {
  double amount = 100000.0, rate = 7.0, tax = 4.25, term = 8.0, type = 0.0, capitalization = 0.0;
  double percents = 0.0, tax_amount = 0.0, total_amount = 0.0;
  char *replenishments = "02:5000";
  char *withdrawals = "06:2000";
  double my_return[256] = {0};
  if (is_norm_dep_values(amount, rate, tax, term, withdrawals, replenishments)) {
    dep_calc(amount, rate, tax, term, type, capitalization, withdrawals, replenishments, my_return);
    double percents = my_return[0];
    double tax_amount = my_return[1];
    double total_amount = my_return[2];
    ck_assert_double_eq_tol(percents, 4828.29, 2);
    ck_assert_double_eq_tol(tax_amount, 0.0, 2);
    ck_assert_double_eq_tol(total_amount, 103000, 2);
  } else {
    printf("\n\nNOT NORMAL STRING!!!\n");
  }
}
END_TEST

START_TEST(dep_calc_1_cap) {
  double amount = 100000.0, rate = 7.0, tax = 4.25, term = 8.0, type = 0.0, capitalization = 1.0;
  double percents = 0.0, tax_amount = 0.0, total_amount = 0.0;
  char *replenishments = "02:5000";
  char *withdrawals = "06:2000";
  double my_return[256] = {0};
  if (is_norm_dep_values(amount, rate, tax, term, withdrawals, replenishments)) {
    dep_calc(amount, rate, tax, term, type, capitalization, withdrawals, replenishments, my_return);
    double percents = my_return[0];
    double tax_amount = my_return[1];
    double total_amount = my_return[2];
    ck_assert_double_eq_tol(percents, 4927.76, 2);
    ck_assert_double_eq_tol(tax_amount, 0.0, 2);
    ck_assert_double_eq_tol(total_amount, 107927.76, 2);
  } else {
    printf("\n\nNOT NORMAL STRING!!!\n");
  }
}
END_TEST

START_TEST(dep_calc_2_no_cap) {
  double amount = 100000.0, rate = 7.0, tax = 4.25, term = 15, type = 0.0, capitalization = 0.0;
  double percents = 0.0, tax_amount = 0.0, total_amount = 0.0;
  char *replenishments = "";
  char *withdrawals = "";
  double my_return[256] = {0};
  if (is_norm_dep_values(amount, rate, tax, term, withdrawals, replenishments)) {
    dep_calc(amount, rate, tax, term, type, capitalization, withdrawals, replenishments, my_return);
    double percents = my_return[0];
    double tax_amount = my_return[1];
    double total_amount = my_return[2];
    ck_assert_double_eq_tol(percents, 8726.03, 2);
    ck_assert_double_eq_tol(tax_amount, 0.0, 2);
    ck_assert_double_eq_tol(total_amount, 100000.0, 2);
  } else {
    printf("\n\nNOT NORMAL STRING!!!\n");
  }
}
END_TEST

START_TEST(dep_calc_2_cap) {
  double amount = 100000.0, rate = 7.0, tax = 4.25, term = 15, type = 0.0, capitalization = 1.0;
  double percents = 0.0, tax_amount = 0.0, total_amount = 0.0;
  char *replenishments = "";
  char *withdrawals = "";
  double my_return[256] = {0};
  if (is_norm_dep_values(amount, rate, tax, term, withdrawals, replenishments)) {
    dep_calc(amount, rate, tax, term, type, capitalization, withdrawals, replenishments, my_return);
    double percents = my_return[0];
    double tax_amount = my_return[1];
    double total_amount = my_return[2];
    ck_assert_double_eq_tol(percents, 9090.4, 2);
    ck_assert_double_eq_tol(tax_amount, 0.0, 2);
    ck_assert_double_eq_tol(total_amount, 109090.4, 2);
  } else {
    printf("\n\nNOT NORMAL STRING!!!\n");
  }
}
END_TEST

START_TEST(dep_calc_3_no_cap) {
  double amount = 100000.0, rate = 7.0, tax = 4.25, term = 40.0, type = 1.0, capitalization = 0.0;
  double percents = 0.0, tax_amount = 0.0, total_amount = 0.0;
  char *replenishments = "";
  char *withdrawals = "";
  double my_return[256] = {0};
  if (is_norm_dep_values(amount, rate, tax, term, withdrawals, replenishments)) {
    dep_calc(amount, rate, tax, term, type, capitalization, withdrawals, replenishments, my_return);
    double percents = my_return[0];
    double tax_amount = my_return[1];
    double total_amount = my_return[2];
    printf("\n\n\npercents = %F\n", percents);
    printf("tax_amount = %F\n", tax_amount);
    printf("total_amount = %F\n\n\n", total_amount);


    ck_assert_double_eq_tol(percents, 23301.37, 2);
    ck_assert_double_eq_tol(tax_amount, 0.0, 2);
    ck_assert_double_eq_tol(total_amount, 100000, 2);
  } else {
    printf("\n\nNOT NORMAL STRING!!!\n");
  }
}
END_TEST

START_TEST(dep_calc_3_cap) {
  double amount = 100000.0, rate = 7.0, tax = 4.25, term = 40.0, type = 1.0, capitalization = 1.0;
  double percents = 0.0, tax_amount = 0.0, total_amount = 0.0;
  char *replenishments = "";
  char *withdrawals = "";
  double my_return[256] = {0};
  if (is_norm_dep_values(amount, rate, tax, term, withdrawals, replenishments)) {
    dep_calc(amount, rate, tax, term, type, capitalization, withdrawals, replenishments, my_return);
    double percents = my_return[0];
    double tax_amount = my_return[1];
    double total_amount = my_return[2];
    printf("\n\n\npercents = %F\n", percents);
    printf("tax_amount = %F\n", tax_amount);
    printf("total_amount = %F\n\n\n", total_amount);


    ck_assert_double_eq_tol(percents, 25990.1, 2);
    ck_assert_double_eq_tol(tax_amount, 0.0, 2);
    ck_assert_double_eq_tol(total_amount, 125990, 2);
  } else {
    printf("\n\nNOT NORMAL STRING!!!\n");
  }
}
END_TEST

int main(void) {
  Suite *s1 = suite_create("Core");
  TCase *tc1_1 = tcase_create("Core");
  SRunner *sr = srunner_create(s1);
  int tc = 0;
  suite_add_tcase(s1, tc1_1);

  tcase_add_test(tc1_1, dep_calc_1_no_cap);
  tcase_add_test(tc1_1, dep_calc_1_cap);
  tcase_add_test(tc1_1, dep_calc_2_no_cap);
  tcase_add_test(tc1_1, dep_calc_2_cap);
  tcase_add_test(tc1_1, dep_calc_3_no_cap);
  tcase_add_test(tc1_1, dep_calc_3_cap);


  srunner_run_all(sr, CK_ENV);
  tc = srunner_ntests_failed(sr);
  srunner_free(sr);

  return tc == 0 ? 0 : 1;
}

