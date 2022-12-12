#include "../calc.h"

void credit_diff_calc(double balance_owed, int term, double percent, double *my_return) {
    double main_mounthly_payment = 0.0;
    main_mounthly_payment = balance_owed / term;

    double percentage = 0.0, overpayment = 0.0, total_payment = 0.0;
    int mounth_count = 0;
    while(mounth_count != term) {
        percentage = main_mounthly_payment + (balance_owed - main_mounthly_payment * mounth_count) * percent / 100 / 12;
        total_payment += percentage;
        mounth_count++;
    }
    overpayment = total_payment - balance_owed;
    my_return[0] = main_mounthly_payment;
    my_return[1] = total_payment;
    my_return[2] = overpayment;
}