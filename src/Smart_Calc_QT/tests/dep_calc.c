#include <check.h>

#include "../calc.h"

START_TEST(addition_1) {
  double my_return[3] = {0.0};
  double balance_owed = 10000, term = 12., percent = 7.0;
  credit_annuity_calc(balance_owed, term, percent, my_return);
  double mounthly_payment = my_return[0];
  double total_payment = my_return[1];
  double overpayment = my_return[2];

  ck_assert_double_eq_tol(mounthly_payment, 102.84, 7);
  ck_assert_double_eq_tol(overpayment, 4808.96, 7);
  ck_assert_double_eq_tol(total_payment, 14808.96, 7);
}
END_TEST

