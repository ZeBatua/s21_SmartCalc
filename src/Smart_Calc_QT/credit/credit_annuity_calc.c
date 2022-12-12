#include "../calc.h"

void credit_annuity_calc(double balance_owed, int term, double percent, double *my_return) {
    double mounthly_payment = 0.0, buf_balance_owed = balance_owed;
    percent = (percent / 100) / 12;
    mounthly_payment = balance_owed * (percent + (percent / (pow(1.0 + percent, term) - 1)));
    double overpayment = 0.0, total_payment = 0.0;
    total_payment = mounthly_payment * term;
    overpayment = total_payment - buf_balance_owed;
    my_return[0] = mounthly_payment;
    my_return[1] = total_payment;
    my_return[2] = overpayment;
}