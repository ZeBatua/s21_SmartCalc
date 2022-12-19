#include "calc.h"

 // график пробелы не жрет
 // x+x крашится



void main() {
  // double amount = 100000.0, rate = 7.0, tax = 4.25, term = 90.0, type = 1.0, capitalization = 1.0;
  // double percents = 0.0, tax_amount = 0.0, total_amount = 0.0;
  // char *replenishments = ""; // пополнение
  // char *withdrawals = "";
  // double my_return[256] = {0};
  // if (is_norm_dep_values(amount, rate, tax, term, withdrawals, replenishments)) {
  //   dep_calc(amount, rate, tax, term, type, capitalization, withdrawals, replenishments, my_return);
  //   double percents = my_return[0];
  //   double tax_amount = my_return[1];
  //   double total_amount = my_return[2];
  //   printf("!percents = %F\n", my_return[0]);
  //   printf("!tax_amount = %F\n", my_return[1]);
  //   printf("!total_amount = %F\n\n", my_return[2]);
  // } else {
  //   printf("\n\nNOT NORMAL STRING!!!\n");
  // }


  // char start_string[256] = {"1-cos1*2+2^3"};
  char start_string[256] = {"sincos3"};
  char x_string[256] = {""};
  double result = 0.0, x_result = 0.0;
  if (valid_string(start_string, x_string)) {
    int status = 0;
    // x_result = read_string(x_string, &status);
    // add_x_value_in_string(start_string, x_result);
    result = read_string(start_string, &status);
    printf("value = %F\n", result);
  } else {
    printf("string: %s\nNOT VALID\n", start_string);
  }
  // ck_assert_double_eq_tol(result, -499.0, 7);


//   char str[14] = "qwertyu";
//   int i = 0;
//   for (; i < 14; i++) {
//     printf("string: %s\n", &str[i]);
//     printf("pointer: %p\n", str[i], str[i]);
//   }
//   if (&str[i + 2] != NULL) {
//     printf("\n\n\nstring: %s\n", &str[i + 2]);
//   }
}
