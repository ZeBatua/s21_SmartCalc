#include "calc.h"

const int days_in_mounth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

void get_mass_operations(char *operation, double *mass_data);
double calc_percents_cap(const int term, const double rate, const double amount, const int k, const double *rep_data, const double *with_data);
double calc_percents(const int term, const double rate, const double amount, const double *rep_data, const double *with_data);

void dep_calc(const double amount, const double rate, const double tax, const int term, const int type, const int capitalization, char *withdrawals, char *replenishments, double *my_return) {
    double percents = 0.0, full_amount = amount;
    double rep_data[256] = {0};
    double with_data[256] = {0};
    get_mass_operations(replenishments, rep_data);
    get_mass_operations(withdrawals, with_data); // снятие
    if (capitalization == 0) {  // не учтено пополнение снятие
        percents = calc_percents(term, rate, amount, rep_data, with_data);
        percents = ((full_amount * rate * term * 30) / 365) / 100;
    } else {
        if (type == 0) percents = calc_percents_cap(term, rate, amount, 1, rep_data, with_data);
        if (type == 1) percents = calc_percents_cap(term, rate, amount, 3, rep_data, with_data);
        if (type == 2) percents = calc_percents_cap(term, rate, amount, 12, rep_data, with_data);
    }
    my_return[0] = percents;
    my_return[1] = percents * (tax / 100);
    my_return[2] = (amount + percents) - (percents * (tax / 100));
}


void get_mass_operations(char *operation, double *mass_data) {
    int string_position = 0;
    double current_mounth = 0.0, current_data = 0.0;
    while (string_position < strlen(operation)) {
        while (operation[string_position] == ' ') {
            string_position++; 
        }
        get_num(operation, &string_position, &current_mounth);
        if (operation[string_position] == ':') string_position++;
        get_num(operation, &string_position, &current_data);
        mass_data[(int)current_mounth] = current_data;
        string_position++;
    }
}

double calc_percents_cap(const int term, const double rate, const double amount, const int k, const double *rep_data, const double *with_data) {
    double percents = 0.0;
    double full_amount = amount;
    int static_mounth_count = 1;
    for (int mounth_count = 1, days = 0; static_mounth_count != term + 1; mounth_count++, days++, static_mounth_count++) {
        full_amount += rep_data[mounth_count] - with_data[mounth_count]; // 01:1500 05:3000 07:8000 02:900
        if (fmod(mounth_count, k) == 0) {
            percents = full_amount * (rate / 100.0) * days_in_mounth[days] / 365;
            if (fmod(mounth_count, 12) == 0 && full_amount - amount > 42500.0) {
                full_amount += percents; // 110 471 -> 119 581
                full_amount = amount + (full_amount - amount) * 0.87;
            } else {
                full_amount += percents;
            }
        } else {
            percents += (full_amount * (rate / 100.0) * days_in_mounth[days] / 365);
        }
        if (days == 11) days = -1;
    }
    return full_amount - amount;
}

double calc_percents(const int term, const double rate, const double amount, const double *rep_data, const double *with_data) {
    double percents = 0.0;
    double full_amount = amount;
    for (int mounth_count = 1, days = 0; mounth_count != term; mounth_count++) {
        full_amount += rep_data[term] - with_data[term];
        percents += ((full_amount * rate * days_in_mounth[days]) / 365) / 100;
    }
    return percents;
}
