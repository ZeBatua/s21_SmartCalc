#include "calc.h"

void main() {
  double amount = 100000.0, rate = 7.0, tax = 4.25, term = 8.0, type = 0.0, capitalization = 0.0;
  double percents = 0.0, tax_amount = 0.0, total_amount = 0.0;
  char *replenishments = "02:5000"; // пополнение
  char *withdrawals = "06:2000";
  double my_return[256] = {0};
  if (is_norm_dep_values(amount, rate, tax, term, withdrawals, replenishments)) {
    dep_calc(amount, rate, tax, term, type, capitalization, withdrawals, replenishments, my_return);
    double percents = my_return[0];
    double tax_amount = my_return[1];
    double total_amount = my_return[2];
    printf("!percents = %F\n", my_return[0]);
    printf("!tax_amount = %F\n", my_return[1]);
    printf("!total_amount = %F\n\n", my_return[2]);
  } else {
    printf("\n\nNOT NORMAL STRING!!!\n");
  }
}

