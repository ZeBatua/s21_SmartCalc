#include "calc.h"

void get_mass_operations(char *operation, char *mass_data);
void sort_mounth_data(int *mounth, double *data);

void *is_norm_dep_values(const double amount, const double rate, const double tax, const int term, const int type, const int capitalization char *withdrawals, char *replenishments, double *my_return) {
    double percents = 0.0, full_amount = amount;
    double rep_data[256] = {0};
    double with_data[256] = {0};

    get_mass_operations(replenishments, rep_data);
    get_mass_operations(withdrawals, with_data); // снятие

    if (capitalization == 0) {  // не учтено пополнение снятие
        percents = ((full_amount * rate * term * 30) / 365) / 100;
    } else {
        if (type == 0) percents = calc_percents(term, rate, amount, 1, rep_data, with_data);
        if (type == 1) percents = calc_percents(term, rate, amount, 3, rep_data, with_data);
        if (type == 2) percents = calc_percents(term, rate, amount, 12, rep_data, with_data);
    }
    my_return[0] = percents;
    my_return[1] = percents * (tax / 100);
    my_return[2] = full_amount;
}


void get_mass_operations(char *operation, char *mass_data) {
    int string_position = 0;
    double current_num = 0.0;
    int mounth[256] = {0};
    double data[256] = {0};
    int i = 0;
    while (string_position < strlen(read_string)) {
        if (operation[i] == ' ') i++; 
        get_num(operation, &string_position, &current_num);
        mounth[i] = current_num;
        if (operation[i] == ':') i++;
        get_num(operation, &string_position, &current_num);
        data[i] = current_num;
        if (operation[i] == ' ') i++;
    }
    sort_mounth_data(mounth, data, mass_data);
}

void sort_mounth_data(int *mounth, double *data) {
    for (int i = 0; i < 256; i++) {
        mass_data[mounth[i]] = data[i];
    }
}

double calc_percents(const int term, const double rate, const double amount, const int k, const double *rep_data, const double *with_data) {
    double percents = 0.0;
    int mounth_count = 0;
    double full_amount = amount;
    for (; mounth_count != term; mounth_count++) {
        full_amount = full_amount + rep_data[term] - with_data[term];
        if (mod(mounth_count, k) == 0) {
            percents = ((full_amount * rate * term * 30) / 365) / 100;
            full_amount += full_amount * pow((1 + (rate / 100) / 12), term * 3);
        } else {
            percents = ((full_amount * rate * term * 30) / 365) / 100;
        }
    }
    return percents;
}
