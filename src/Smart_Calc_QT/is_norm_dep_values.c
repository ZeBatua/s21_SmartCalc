#include "calc.h"

int is_norm_dep_values(double amount, double rate, double tax, int term, char *withdrawals, char *replenishments) {
    int status = 0;
    if (amount * rate * tax * term <= 0) status = 1;
    int find_Fnum_status = 0;
    int find_Snum_status = 0;
    int find_colon_status = 0;
    for (int i = 0; i < strlen(withdrawals) && status == 0; i++) {
        if (withdrawals[i] == ' ' && find_colon_status == 1 && find_Fnum_status == 1) {
            find_colon_status = 0;
            find_Fnum_status = 0;
            find_Fnum_status = 0;
        } else if (withdrawals[i] == ' ' && find_colon_status != 1 && find_Fnum_status != 1) {
            continue;
        } else if (is_num(withdrawals[i] && find_colon_status != 1)) {
            find_Fnum_status = 1;
        } else if (withdrawals[i] == ':') {
            find_colon_status = 1;
            find_Snum_status = 1;
        } else if ((is_num(withdrawals[i]) || withdrawals[i] == '.') && find_colon_status == 1 && find_Snum_status == 1) {
            continue;
        } else {
            status = 1;
            break;
        }
    }
    return !status;
}