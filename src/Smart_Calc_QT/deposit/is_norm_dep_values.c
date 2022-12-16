#include "../calc.h"

int valid_operation(char *operation);

int is_norm_dep_values(double amount, double rate, double tax, int term, char *withdrawals, char *replenishments) {
    int status = 0;
    if (amount * rate * term <= 0) status = 1;
    if (tax < 0) status = 1;
    if (status == 0) status = valid_operation(withdrawals);
    if (status == 0) status = valid_operation(replenishments);

    return !status;
}

int valid_operation(char *operation) {
    int status = 0;
    int find_Fnum_status = 0;
    int find_colon_status = 0;
    int dot_status = 0;
    for (int i = 0; i < (int)strlen(operation) && status == 0; i++) {
        if (operation[i] == ' ' && find_colon_status == 1 && find_Fnum_status == 1) {
            find_colon_status = 0;
            find_Fnum_status = 0;
            dot_status = 0;
        } else if (operation[i] == ' ' && find_colon_status != 1 && find_Fnum_status != 1) {
            continue;
        } else if (is_num(operation[i]) && find_colon_status != 1) {
            find_Fnum_status = 1;
        } else if (find_Fnum_status == 1 && !is_num(operation[i]) && operation[i] != ':') {
            status = 1;
            break;
        } else if (operation[i] == ':' && find_colon_status != 1) {
            find_Fnum_status = 0;
            find_colon_status = 1;
        } else if (operation[i] == ':' && find_colon_status == 1) {
            status = 1;
            break;
        } else if (dot_status == 1 && operation[i] == '.') {
            status = 1;
            break;
        } else if ((is_num(operation[i]) || operation[i] == '.') && find_colon_status == 1) {
            if (operation[i] == '.') dot_status = 1;
            continue;
        } else {
            status = 1;
            break;
        }
    }

    return status;
}