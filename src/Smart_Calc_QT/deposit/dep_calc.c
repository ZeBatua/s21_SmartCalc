#include "../calc.h"

const int days_in_mounth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
double amount_of_taxes = 0.0;

void get_mass_operations(char *operation, double *mass_data);
void calc_percents_cap(const int term, const double rate, const double amount, const double tax, const int k, const double *rep_data, const double *with_data, double *my_return);
void calc_percents(const int term, const double rate, const double amount, const double tax, const double *rep_data, const double *with_data, double *my_return);

void dep_calc(const double amount, const double rate, const double tax, const int term, const int type, const int capitalization, char *withdrawals, char *replenishments, double *my_return) {
    double rep_data[256] = {0};
    double with_data[256] = {0};
    get_mass_operations(replenishments, rep_data);
    get_mass_operations(withdrawals, with_data);
    if (capitalization == 0) {
        calc_percents(term, rate, amount, tax, rep_data, with_data, my_return);
    } else {
        if (type == 0) calc_percents_cap(term, rate, amount, tax, 1, rep_data, with_data, my_return);
        if (type == 1) calc_percents_cap(term, rate, amount, tax, 3, rep_data, with_data, my_return);
        if (type == 2) calc_percents_cap(term, rate, amount, tax, 12, rep_data, with_data, my_return);
    }
    amount_of_taxes = 0.0;
}

void get_mass_operations(char *operation, double *mass_data) {
    int string_position = 0;
    double current_mounth = 0.0, current_data = 0.0;
    while (string_position < (int)strlen(operation)) {
        while (operation[string_position] == ' ') {
            string_position++; 
        }
        get_num(operation, &string_position, &current_mounth);
        if (operation[string_position] == ':') string_position++;
        get_num(operation, &string_position, &current_data);
        mass_data[(int)current_mounth] += current_data;
        string_position++;
    }
}

void calc_percents_cap(const int term, const double rate, const double amount, const double tax, const int k, const double *rep_data, const double *with_data, double *my_return) {
    double percents = 0.0;
    double full_amount = amount, sum_percents = 0.0;
    int static_mounth_count = 0, interest_savings_status = 0;
    for (int mounth_count = 1, number_mounth = 0; static_mounth_count != term; mounth_count++, number_mounth++, static_mounth_count++) {
        full_amount += rep_data[mounth_count] - with_data[mounth_count];
        if (fmod(mounth_count, k) == 0) {
                percents += full_amount * (rate / 100.0) * days_in_mounth[number_mounth] / 365;
                sum_percents += full_amount * (rate / 100.0) * days_in_mounth[number_mounth] / 365;
            if (fmod(mounth_count, 12) == 0 && full_amount - amount > tax * 1000000) {
                full_amount += percents;
                amount_of_taxes += amount + (full_amount - amount) * 0.13; 
                full_amount = amount + (full_amount - amount) * 0.87;
            } else {
                full_amount += percents;
            }
            percents = 0.0;
        } else {
            percents += (full_amount * (rate / 100.0) * days_in_mounth[number_mounth] / 365);
            interest_savings_status = 1;
            sum_percents += (full_amount * (rate / 100.0) * days_in_mounth[number_mounth] / 365);

        }
        if (number_mounth == 11) number_mounth = -1;
        if (mounth_count == 12) mounth_count = 0;

    }
    if (interest_savings_status == 1) full_amount += percents;
    
    my_return[0] = sum_percents;
    my_return[1] = amount_of_taxes;
    my_return[2] = full_amount;
}

void calc_percents(const int term, const double rate, const double amount, const double tax, const double *rep_data, const double *with_data, double *my_return) {
    double percents = 0.0;
    double full_amount = amount;
    int static_mounth_count = 0;
    for (int mounth_count = 1, number_mounth = 0; static_mounth_count != term; mounth_count++, number_mounth++, static_mounth_count++) {
        full_amount += rep_data[mounth_count] - with_data[mounth_count];
        percents += full_amount * (rate / 100.0) * days_in_mounth[number_mounth] / 365;
        if (fmod(mounth_count, 12) == 0 && full_amount - amount > tax * 1000000) {
            amount_of_taxes += amount + (full_amount - amount) * 0.13;
            full_amount = amount + (full_amount - amount) * 0.87;
        }
        if (number_mounth == 11) number_mounth = -1;
        if (mounth_count == 12) mounth_count = 0;
    }
    my_return[0] = percents;
    my_return[1] = amount_of_taxes;
    my_return[2] = full_amount;
}
