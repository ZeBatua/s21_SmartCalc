#include <check.h>

#include "../calc.h"

//----------------------------------------------------------------------------------------------//

START_TEST(addition_1) {
  char start_string[256] = {
      "(1+(1*(4*(5^4+(3*2*1.1/(3*sin(2*cos(1235.3)*2)))))))"};
  char x_string[256] = {""};
  double result = 0.0, x_result = 0.0;
  if (valid_string(start_string, x_string)) {
    int status = 0;
    x_result = read_string(x_string, &status);
    add_x_value_in_string(start_string, x_result);
    result = read_string(start_string, &status);
  } else {
    printf("string: %s\nNOT VALID\n", start_string);
  }
  ck_assert_double_eq_tol(result, 2769.16, 7);
}
END_TEST

START_TEST(addition_2) {
  // char start_string[256] =
  // {"10+21*cos(123)-0.213123+1231-2222-cos1*76+ln12+2^3^2"};
  char start_string[256] = {"21*cos123-100"};
  char x_string[256] = {""};
  double result = 0.0, x_result = 0.0;
  if (valid_string(start_string, x_string)) {
    int status = 0;
    x_result = read_string(x_string, &status);
    add_x_value_in_string(start_string, x_result);
    result = read_string(start_string, &status);
  } else {
    printf("string: %s\nNOT VALID\n", start_string);
  }

  // ck_assert_double_eq_tol(result, -526.43, 7);
  ck_assert_double_eq_tol(result, -118.64, 7);
}
END_TEST

START_TEST(addition_3) {
  char start_string[256] = {"0+0"};
  char x_string[256] = {""};
  double result = 0.0, x_result = 0.0;
  if (valid_string(start_string, x_string)) {
    int status = 0;
    x_result = read_string(x_string, &status);
    add_x_value_in_string(start_string, x_result);
    result = read_string(start_string, &status);
  } else {
    printf("string: %s\nNOT VALID\n", start_string);
  }
  ck_assert_double_eq_tol(result, 0.0, 7);
}
END_TEST

START_TEST(addition_4) {
  char start_string[256] = {"0+0"};
  char x_string[256] = {""};
  double result = 0.0, x_result = 0.0;
  if (valid_string(start_string, x_string)) {
    int status = 0;
    x_result = read_string(x_string, &status);
    add_x_value_in_string(start_string, x_result);
    result = read_string(start_string, &status);
  } else {
    printf("string: %s\nNOT VALID\n", start_string);
  }
  ck_assert_double_eq_tol(result, 0.0, 7);
}
END_TEST

START_TEST(addition_5) {
  char start_string[256] = {"-100*-5"};
  char x_string[256] = {""};
  double result = 0.0, x_result = 0.0;
  if (valid_string(start_string, x_string)) {
    int status = 0;
    x_result = read_string(x_string, &status);
    add_x_value_in_string(start_string, x_result);
    result = read_string(start_string, &status);
  } else {
    printf("string: %s\nNOT VALID\n", start_string);
  }
  ck_assert_double_eq_tol(result, 500.0, 7);
}
END_TEST

//----------------------------------------------------------------------------------------------//

START_TEST(subtraction_1) {
  char start_string[256] = {"10-5"};
  char x_string[256] = {""};
  double result = 0.0, x_result = 0.0;
  if (valid_string(start_string, x_string)) {
    int status = 0;
    x_result = read_string(x_string, &status);
    add_x_value_in_string(start_string, x_result);
    result = read_string(start_string, &status);
  } else {
    printf("string: %s\nNOT VALID\n", start_string);
  }
  ck_assert_double_eq_tol(result, 5.0, 7);
}
END_TEST

START_TEST(subtraction_2) {
  char start_string[256] = {"0-1000"};
  char x_string[256] = {""};
  double result = 0.0, x_result = 0.0;
  if (valid_string(start_string, x_string)) {
    int status = 0;
    x_result = read_string(x_string, &status);
    add_x_value_in_string(start_string, x_result);
    result = read_string(start_string, &status);
  } else {
    printf("string: %s\nNOT VALID\n", start_string);
  }
  ck_assert_double_eq_tol(result, -1000.0, 7);
}
END_TEST

START_TEST(subtraction_3) {
  char start_string[256] = {"32-32"};
  char x_string[256] = {""};
  double result = 0.0, x_result = 0.0;
  if (valid_string(start_string, x_string)) {
    int status = 0;
    x_result = read_string(x_string, &status);
    add_x_value_in_string(start_string, x_result);
    result = read_string(start_string, &status);
  } else {
    printf("string: %s\nNOT VALID\n", start_string);
  }
  ck_assert_double_eq_tol(result, 0.0, 7);
}
END_TEST

START_TEST(subtraction_4) {
  char start_string[256] = {"999-99-500-25-75-200-93-7-499"};
  char x_string[256] = {""};
  double result = 0.0, x_result = 0.0;
  if (valid_string(start_string, x_string)) {
    int status = 0;
    x_result = read_string(x_string, &status);
    add_x_value_in_string(start_string, x_result);
    result = read_string(start_string, &status);
  } else {
    printf("string: %s\nNOT VALID\n", start_string);
  }
  ck_assert_double_eq_tol(result, -499.0, 7);
}
END_TEST

START_TEST(subtraction_5) {
  char start_string[256] = {"999-99-500+25-75-200+93-7-499"};
  char x_string[256] = {""};
  double result = 0.0, x_result = 0.0;
  if (valid_string(start_string, x_string)) {
    int status = 0;
    x_result = read_string(x_string, &status);
    add_x_value_in_string(start_string, x_result);
    result = read_string(start_string, &status);
  } else {
    printf("string: %s\nNOT VALID\n", start_string);
  }
  ck_assert_double_eq_tol(result, -263.0, 7);
}
END_TEST

//----------------------------------------------------------------------------------------------//

START_TEST(multiplication_1) {
  char start_string[256] = {"10*5"};
  char x_string[256] = {""};
  double result = 0.0, x_result = 0.0;
  if (valid_string(start_string, x_string)) {
    int status = 0;
    x_result = read_string(x_string, &status);
    add_x_value_in_string(start_string, x_result);
    result = read_string(start_string, &status);
  } else {
    printf("string: %s\nNOT VALID\n", start_string);
  }
  ck_assert_double_eq_tol(result, 50.0, 7);
}
END_TEST

START_TEST(multiplication_2) {
  char start_string[256] = {"-0*1000"};
  char x_string[256] = {""};
  double result = 0.0, x_result = 0.0;
  if (valid_string(start_string, x_string)) {
    int status = 0;
    x_result = read_string(x_string, &status);
    add_x_value_in_string(start_string, x_result);
    result = read_string(start_string, &status);
  } else {
    printf("string: %s\nNOT VALID\n", start_string);
  }
  ck_assert_double_eq_tol(result, 0.0, 7);
}
END_TEST

START_TEST(multiplication_3) {
  char start_string[256] = {"32*2"};
  char x_string[256] = {""};
  double result = 0.0, x_result = 0.0;
  if (valid_string(start_string, x_string)) {
    int status = 0;
    x_result = read_string(x_string, &status);
    add_x_value_in_string(start_string, x_result);
    result = read_string(start_string, &status);
  } else {
    printf("string: %s\nNOT VALID\n", start_string);
  }
  ck_assert_double_eq_tol(result, 64.0, 7);
}
END_TEST

START_TEST(multiplication_4) {
  char start_string[256] = {"2*2*2*8"};
  char x_string[256] = {""};
  double result = 0.0, x_result = 0.0;
  if (valid_string(start_string, x_string)) {
    int status = 0;
    x_result = read_string(x_string, &status);
    add_x_value_in_string(start_string, x_result);
    result = read_string(start_string, &status);
  } else {
    printf("string: %s\nNOT VALID\n", start_string);
  }
  ck_assert_double_eq_tol(result, 64.0, 7);
}
END_TEST

START_TEST(multiplication_5) {
  char start_string[256] = {"-7*6"};
  char x_string[256] = {""};
  double result = 0.0, x_result = 0.0;
  if (valid_string(start_string, x_string)) {
    int status = 0;
    x_result = read_string(x_string, &status);
    add_x_value_in_string(start_string, x_result);
    result = read_string(start_string, &status);
  } else {
    printf("string: %s\nNOT VALID\n", start_string);
  }
  ck_assert_double_eq_tol(result, -42.0, 7);
}
END_TEST

//----------------------------------------------------------------------------------------------//

START_TEST(division_1) {
  char start_string[256] = {"10/2"};
  char x_string[256] = {""};
  double result = 0.0, x_result = 0.0;
  if (valid_string(start_string, x_string)) {
    int status = 0;
    x_result = read_string(x_string, &status);
    add_x_value_in_string(start_string, x_result);
    result = read_string(start_string, &status);
  } else {
    printf("string: %s\nNOT VALID\n", start_string);
  }
  ck_assert_double_eq_tol(result, 5.0, 7);
}
END_TEST

START_TEST(division_2) {
  char start_string[256] = {"0/4567"};
  char x_string[256] = {""};
  double result = 0.0, x_result = 0.0;
  if (valid_string(start_string, x_string)) {
    int status = 0;
    x_result = read_string(x_string, &status);
    add_x_value_in_string(start_string, x_result);
    result = read_string(start_string, &status);
  } else {
    printf("string: %s\nNOT VALID\n", start_string);
  }
  ck_assert_double_eq_tol(result, 0.0, 7);
}
END_TEST

START_TEST(division_3) {
  char start_string[256] = {"31/2"};
  char x_string[256] = {""};
  double result = 0.0, x_result = 0.0;
  if (valid_string(start_string, x_string)) {
    int status = 0;
    x_result = read_string(x_string, &status);
    add_x_value_in_string(start_string, x_result);
    result = read_string(start_string, &status);
  } else {
    printf("string: %s\nNOT VALID\n", start_string);
  }
  ck_assert_double_eq_tol(result, 15.5, 7);
}
END_TEST

START_TEST(division_4) {
  char start_string[256] = {"100/2/2/5/5"};
  char x_string[256] = {""};
  double result = 0.0, x_result = 0.0;
  if (valid_string(start_string, x_string)) {
    int status = 0;
    x_result = read_string(x_string, &status);
    add_x_value_in_string(start_string, x_result);
    result = read_string(start_string, &status);
  } else {
    printf("string: %s\nNOT VALID\n", start_string);
  }
  ck_assert_double_eq_tol(result, 1.0, 7);
}
END_TEST

START_TEST(division_5) {
  char start_string[256] = {"-999/9"};
  char x_string[256] = {""};
  double result = 0.0, x_result = 0.0;
  if (valid_string(start_string, x_string)) {
    int status = 0;
    x_result = read_string(x_string, &status);
    add_x_value_in_string(start_string, x_result);
    result = read_string(start_string, &status);
  } else {
    printf("string: %s\nNOT VALID\n", start_string);
  }
  ck_assert_double_eq_tol(result, -111.0, 7);
}
END_TEST

//----------------------------------------------------------------------------------------------//

START_TEST(power_1) {
  char start_string[256] = {"10^2"};
  char x_string[256] = {""};
  double result = 0.0, x_result = 0.0;
  if (valid_string(start_string, x_string)) {
    int status = 0;
    x_result = read_string(x_string, &status);
    add_x_value_in_string(start_string, x_result);
    result = read_string(start_string, &status);
  } else {
    printf("string: %s\nNOT VALID\n", start_string);
  }
  ck_assert_double_eq_tol(result, 100.0, 7);
}
END_TEST

START_TEST(power_2) {
  char start_string[256] = {"1^43"};
  char x_string[256] = {""};
  double result = 0.0, x_result = 0.0;
  if (valid_string(start_string, x_string)) {
    int status = 0;
    x_result = read_string(x_string, &status);
    add_x_value_in_string(start_string, x_result);
    result = read_string(start_string, &status);
  } else {
    printf("string: %s\nNOT VALID\n", start_string);
  }
  ck_assert_double_eq_tol(result, 1.0, 7);
}
END_TEST

START_TEST(power_3) {
  char start_string[256] = {"3^2"};
  char x_string[256] = {""};
  double result = 0.0, x_result = 0.0;
  if (valid_string(start_string, x_string)) {
    int status = 0;
    x_result = read_string(x_string, &status);
    add_x_value_in_string(start_string, x_result);
    result = read_string(start_string, &status);
  } else {
    printf("string: %s\nNOT VALID\n", start_string);
  }
  ck_assert_double_eq_tol(result, 9.0, 7);
}
END_TEST

START_TEST(power_4) {
  char start_string[256] = {"0^0"};
  char x_string[256] = {""};
  double result = 0.0, x_result = 0.0;
  if (valid_string(start_string, x_string)) {
    int status = 0;
    x_result = read_string(x_string, &status);
    add_x_value_in_string(start_string, x_result);
    result = read_string(start_string, &status);
  } else {
    printf("string: %s\nNOT VALID\n", start_string);
  }
  ck_assert_double_eq_tol(result, 0.0, 7);
}
END_TEST

START_TEST(power_5) {
  char start_string[256] = {"-1^3"};
  char x_string[256] = {""};
  double result = 0.0, x_result = 0.0;
  if (valid_string(start_string, x_string)) {
    int status = 0;
    x_result = read_string(x_string, &status);
    add_x_value_in_string(start_string, x_result);
    result = read_string(start_string, &status);
  } else {
    printf("string: %s\nNOT VALID\n", start_string);
  }
  ck_assert_double_eq_tol(result, -1.0, 7);
}
END_TEST

//----------------------------------------------------------------------------------------------//

START_TEST(cosine_1) {
  char start_string[256] = {"cos0-100"};
  char x_string[256] = {""};
  double result = 0.0, x_result = 0.0;
  if (valid_string(start_string, x_string)) {
    int status = 0;
    x_result = read_string(x_string, &status);
    add_x_value_in_string(start_string, x_result);
    result = read_string(start_string, &status);
  } else {
    printf("string: %s\nNOT VALID\n", start_string);
  }
  ck_assert_double_eq_tol(result, cos(0) - 100, 7);
}
END_TEST

START_TEST(cosine_2) {
  char start_string[256] = {"cos(1)"};
  char x_string[256] = {""};
  double result = 0.0, x_result = 0.0;
  if (valid_string(start_string, x_string)) {
    int status = 0;
    x_result = read_string(x_string, &status);
    add_x_value_in_string(start_string, x_result);
    result = read_string(start_string, &status);
  } else {
    printf("string: %s\nNOT VALID\n", start_string);
  }
  ck_assert_double_eq_tol(result, cos(1), 7);
}
END_TEST

START_TEST(cosine_3) {
  char start_string[256] = {"cos-5"};  // добавить проверку унарного минуса
  char x_string[256] = {""};
  double result = 0.0, x_result = 0.0;
  if (valid_string(start_string, x_string)) {
    int status = 0;
    x_result = read_string(x_string, &status);
    add_x_value_in_string(start_string, x_result);
    result = read_string(start_string, &status);
  } else {
    printf("string: %s\nNOT VALID\n", start_string);
  }
  ck_assert_double_eq_tol(result, cos(-5), 7);
}
END_TEST

START_TEST(cosine_4) {
  char start_string[256] = {"cos(5)"};
  char x_string[256] = {""};
  double result = 0.0, x_result = 0.0;
  if (valid_string(start_string, x_string)) {
    int status = 0;
    x_result = read_string(x_string, &status);
    add_x_value_in_string(start_string, x_result);
    result = read_string(start_string, &status);
  } else {
    printf("string: %s\nNOT VALID\n", start_string);
  }
  ck_assert_double_eq_tol(result, cos(5), 7);
}
END_TEST

START_TEST(cosine_5) {
  char start_string[256] = {"cos0.30"};
  char x_string[256] = {""};
  double result = 0.0, x_result = 0.0;
  if (valid_string(start_string, x_string)) {
    int status = 0;
    x_result = read_string(x_string, &status);
    add_x_value_in_string(start_string, x_result);
    result = read_string(start_string, &status);
  } else {
    printf("string: %s\nNOT VALID\n", start_string);
  }
  ck_assert_double_eq_tol(result, cos(0.30), 7);
}
END_TEST

START_TEST(mix_1) {
  char start_string[256] = {"(1+2)*3+5*4"};
  char x_string[256] = {""};
  double result = 0.0, x_result = 0.0;
  if (valid_string(start_string, x_string)) {
    int status = 0;
    x_result = read_string(x_string, &status);
    add_x_value_in_string(start_string, x_result);
    result = read_string(start_string, &status);
  } else {
    printf("string: %s\nNOT VALID\n", start_string);
  }
  ck_assert_double_eq_tol(result, 29.0, 7);
}
END_TEST

START_TEST(mix_2) {
  char start_string[256] = {"(((1+2)))*3"};
  char x_string[256] = {""};
  double result = 0.0, x_result = 0.0;
  if (valid_string(start_string, x_string)) {
    int status = 0;
    x_result = read_string(x_string, &status);
    add_x_value_in_string(start_string, x_result);
    result = read_string(start_string, &status);
  } else {
    printf("string: %s\nNOT VALID\n", start_string);
  }
  ck_assert_double_eq_tol(result, 9.0, 7);
}
END_TEST

START_TEST(mix_3) {
  char start_string[256] = {"(((1+2)))*3"};
  char x_string[256] = {""};
  double result = 0.0, x_result = 0.0;
  if (valid_string(start_string, x_string)) {
    int status = 0;
    x_result = read_string(x_string, &status);
    add_x_value_in_string(start_string, x_result);
    result = read_string(start_string, &status);
  } else {
    printf("string: %s\nNOT VALID\n", start_string);
  }
  ck_assert_double_eq_tol(result, 9.0, 7);
}
END_TEST

START_TEST(mix_4) {
  char start_string[256] = {"(((1*2)))-3"};
  char x_string[256] = {""};
  double result = 0.0, x_result = 0.0;
  if (valid_string(start_string, x_string)) {
    int status = 0;
    x_result = read_string(x_string, &status);
    add_x_value_in_string(start_string, x_result);
    result = read_string(start_string, &status);
  } else {
    printf("string: %s\nNOT VALID\n", start_string);
  }
  ck_assert_double_eq_tol(result, -1.0, 7);
}
END_TEST

START_TEST(mix_5) {
  char start_string[256] = {"1+2+3*(0-1)+(-1)"};
  char x_string[256] = {""};
  double result = 0.0, x_result = 0.0;
  if (valid_string(start_string, x_string)) {
    int status = 0;
    x_result = read_string(x_string, &status);
    add_x_value_in_string(start_string, x_result);
    result = read_string(start_string, &status);
  } else {
    printf("string: %s\nNOT VALID\n", start_string);
  }
  ck_assert_double_eq_tol(result, -1.0, 7);
}
END_TEST

START_TEST(mix_6) {
  char start_string[256] = {"3+4*2/(1-5)^2"};
  char x_string[256] = {""};
  double result = 0.0, x_result = 0.0;
  if (valid_string(start_string, x_string)) {
    int status = 0;
    x_result = read_string(x_string, &status);
    add_x_value_in_string(start_string, x_result);
    result = read_string(start_string, &status);
  } else {
    printf("string: %s\nNOT VALID\n", start_string);
  }
  ck_assert_double_eq_tol(result, 3.5, 7);
}
END_TEST

START_TEST(mix_7) {
  char start_string[256] = {"2+3^(2*1+1)"};
  char x_string[256] = {""};
  double result = 0.0, x_result = 0.0;
  if (valid_string(start_string, x_string)) {
    int status = 0;
    x_result = read_string(x_string, &status);
    add_x_value_in_string(start_string, x_result);
    result = read_string(start_string, &status);
  } else {
    printf("string: %s\nNOT VALID\n", start_string);
  }
  ck_assert_double_eq_tol(result, 27.0, 7);
}
END_TEST

START_TEST(mix_8) {
  char start_string[256] = {"3+5*2/(6-4)^2"};
  char x_string[256] = {""};
  double result = 0.0, x_result = 0.0;
  if (valid_string(start_string, x_string)) {
    int status = 0;
    x_result = read_string(x_string, &status);
    add_x_value_in_string(start_string, x_result);
    result = read_string(start_string, &status);
  } else {
    printf("string: %s\nNOT VALID\n", start_string);
  }
  ck_assert_double_eq_tol(result, 5.5, 7);
}
END_TEST

char start_string[256] = {"3+4*2/(2+0)^(3^1)*100"};

START_TEST(mix_9) {
  char start_string[256] = {"3+4*2/(2+0)^(3^1)*100"};
  char x_string[256] = {""};
  double result = 0.0, x_result = 0.0;
  if (valid_string(start_string, x_string)) {
    int status = 0;
    x_result = read_string(x_string, &status);
    add_x_value_in_string(start_string, x_result);
    result = read_string(start_string, &status);
  } else {
    printf("string: %s\nNOT VALID\n", start_string);
  }
  ck_assert_double_eq_tol(result, 103.0, 7);
}
END_TEST

START_TEST(mix_10) {
  char start_string[256] = {"11+(7^2)"};
  char x_string[256] = {""};
  double result = 0.0, x_result = 0.0;
  if (valid_string(start_string, x_string)) {
    int status = 0;
    x_result = read_string(x_string, &status);
    add_x_value_in_string(start_string, x_result);
    result = read_string(start_string, &status);
  } else {
    printf("string: %s\nNOT VALID\n", start_string);
  }
  ck_assert_double_eq_tol(result, 60.0, 7);
}
END_TEST

START_TEST(mix_11) {
  char start_string[256] = {"11+7^2"};
  char x_string[256] = {""};
  double result = 0.0, x_result = 0.0;
  if (valid_string(start_string, x_string)) {
    int status = 0;
    x_result = read_string(x_string, &status);
    add_x_value_in_string(start_string, x_result);
    result = read_string(start_string, &status);
  } else {
    printf("string: %s\nNOT VALID\n", start_string);
  }
  ck_assert_double_eq_tol(result, 60.0, 7);
}
END_TEST

START_TEST(mix_12) {
  char start_string[256] = {"(0.432*54.2/4^2-(-8*4))*0.02"};
  char x_string[256] = {""};
  double result = 0.0, x_result = 0.0;
  if (valid_string(start_string, x_string)) {
    int status = 0;
    x_result = read_string(x_string, &status);
    add_x_value_in_string(start_string, x_result);
    result = read_string(start_string, &status);
  } else {
    printf("string: %s\nNOT VALID\n", start_string);
  }
  ck_assert_double_eq_tol(result, 0.669268, 7);
}
END_TEST

START_TEST(empty) {
  char start_string[256] = {""};
  char x_string[256] = {""};
  double result = 0.0, x_result = 0.0;
  if (valid_string(start_string, x_string)) {
    int status = 0;
    x_result = read_string(x_string, &status);
    add_x_value_in_string(start_string, x_result);
    result = read_string(start_string, &status);
  } else {
    printf("string: %s\nNOT VALID\n", start_string);
  }
  ck_assert_double_eq_tol(result, 0.669268, 7);
}
END_TEST

// -----------------------------------------------
START_TEST(mix_13) {
  char start_string[256] = {"11-(123124.0001+(42-32.327)-32)*423/432"};
  char x_string[256] = {""};
  double result = 0.0, x_result = 0.0;
  if (valid_string(start_string, x_string)) {
    int status = 0;
    x_result = read_string(x_string, &status);
    add_x_value_in_string(start_string, x_result);
    result = read_string(start_string, &status);
  } else {
    printf("string: %s\nNOT VALID\n", start_string);
  }
  ck_assert_double_eq_tol(result, -120526.054910, 7);
}
END_TEST
START_TEST(mix_14) {
  char start_string[256] = {"32mod(32-30)"};
  char x_string[256] = {""};
  double result = 0.0, x_result = 0.0;
  if (valid_string(start_string, x_string)) {
    int status = 0;
    x_result = read_string(x_string, &status);
    add_x_value_in_string(start_string, x_result);
    result = read_string(start_string, &status);
  } else {
    printf("string: %s\nNOT VALID\n", start_string);
  }
  ck_assert_double_eq_tol(result, 0.0, 7);
}
END_TEST
START_TEST(mix_15) {
  char start_string[256] = {"12-32*(2143-312*(4-5)-1.32/(83.2/3))"};
  char x_string[256] = {""};
  double result = 0.0, x_result = 0.0;
  if (valid_string(start_string, x_string)) {
    int status = 0;
    x_result = read_string(x_string, &status);
    add_x_value_in_string(start_string, x_result);
    result = read_string(start_string, &status);
  } else {
    printf("string: %s\nNOT VALID\n", start_string);
  }
  ck_assert_double_eq_tol(result, -78546.476923, 7);
}
END_TEST

START_TEST(mix_16) {
  char start_string[256] = {"2^3^2-100"};
  char x_string[256] = {""};
  double result = 0.0, x_result = 0.0;
  if (valid_string(start_string, x_string)) {
    int status = 0;
    x_result = read_string(x_string, &status);
    add_x_value_in_string(start_string, x_result);
    result = read_string(start_string, &status);
  } else {
    printf("string: %s\nNOT VALID\n", start_string);
  }
  ck_assert_double_eq_tol(result, 412.0, 7);
}
END_TEST

START_TEST(mix_17) {
  char start_string[256] = {"2^(3)^2+10"};
  char x_string[256] = {""};
  double result = 0.0, x_result = 0.0;
  if (valid_string(start_string, x_string)) {
    int status = 0;
    x_result = read_string(x_string, &status);
    add_x_value_in_string(start_string, x_result);
    result = read_string(start_string, &status);
  } else {
    printf("string: %s\nNOT VALID\n", start_string);
  }
  ck_assert_double_eq_tol(result, 522.0, 7);
}
END_TEST

START_TEST(mix_18) {
  char start_string[256] = {"2+3^(2*1+1)"};
  char x_string[256] = {""};
  double result = 0.0, x_result = 0.0;
  if (valid_string(start_string, x_string)) {
    int status = 0;
    x_result = read_string(x_string, &status);
    add_x_value_in_string(start_string, x_result);
    result = read_string(start_string, &status);
  } else {
    printf("string: %s\nNOT VALID\n", start_string);
  }
  ck_assert_double_eq_tol(result, 29.0, 7);
}
END_TEST

START_TEST(mix_19) {
  char start_string[256] = {"512/(2)^(3^2)*100+3"};
  char x_string[256] = {""};
  double result = 0.0, x_result = 0.0;
  if (valid_string(start_string, x_string)) {
    int status = 0;
    x_result = read_string(x_string, &status);
    add_x_value_in_string(start_string, x_result);
    result = read_string(start_string, &status);
  } else {
    printf("string: %s\nNOT VALID\n", start_string);
  }
  ck_assert_double_eq_tol(result, 103.0, 7);
}
END_TEST
//----------------------------------------------------------------------------------------------//

START_TEST(credit_annuity_1) {
  double my_return[3] = {0.0};
  double balance_owed = 10000, term = 12., percent = 7.0;
  credit_annuity_calc(balance_owed, term, percent, my_return);
  double mounthly_payment = my_return[0];
  double total_payment = my_return[1];
  double overpayment = my_return[2];

  ck_assert_double_eq_tol(mounthly_payment, 865.27, 2);
  ck_assert_double_eq_tol(overpayment, 383.24, 2);
  ck_assert_double_eq_tol(total_payment, 10383.24, 2);
}
END_TEST

START_TEST(credit_annuity_2) {
  double my_return[3] = {0.0};
  double balance_owed = 150000, term = 15., percent = 9.0;
  credit_annuity_calc(balance_owed, term, percent, my_return);
  double mounthly_payment = my_return[0];
  double total_payment = my_return[1];
  double overpayment = my_return[2];

  ck_assert_double_eq_tol(mounthly_payment, 10610.46, 2);
  ck_assert_double_eq_tol(overpayment, 9156.90, 2);
  ck_assert_double_eq_tol(total_payment, 159156.9, 2);
}
END_TEST

START_TEST(credit_annuity_3) {
  double my_return[3] = {0.0};
  double balance_owed = 1500000, term = 18, percent = 6.0;
  credit_annuity_calc(balance_owed, term, percent, my_return);
  double mounthly_payment = my_return[0];
  double total_payment = my_return[1];
  double overpayment = my_return[2];

  ck_assert_double_eq_tol(mounthly_payment, 87347.6, 2);
  ck_assert_double_eq_tol(overpayment, 72256.8, 2);
  ck_assert_double_eq_tol(total_payment, 1572256.8, 2);
}
END_TEST

START_TEST(credit_diff_1) {
  double my_return[3] = {0.0};
  double balance_owed = 10000, term = 12., percent = 7.0;
  credit_diff_calc(balance_owed, term, percent, my_return);
  double mounthly_payment = my_return[0];
  double total_payment = my_return[1];
  double overpayment = my_return[2];

  ck_assert_double_eq_tol(mounthly_payment, 833.33, 2);
  ck_assert_double_eq_tol(overpayment, 379.17, 2);
  ck_assert_double_eq_tol(total_payment, 10379.17, 2);
}
END_TEST

START_TEST(credit_diff_2) {
  double my_return[3] = {0.0};
  double balance_owed = 150000, term = 15.0, percent = 9.0;
  credit_diff_calc(balance_owed, term, percent, my_return);
  double mounthly_payment = my_return[0];
  double total_payment = my_return[1];
  double overpayment = my_return[2];

  ck_assert_double_eq_tol(mounthly_payment, 10000.0, 2);
  ck_assert_double_eq_tol(overpayment, 9000.0, 2);
  ck_assert_double_eq_tol(total_payment, 159000.0, 2);
}
END_TEST

START_TEST(credit_diff_3) {
  double my_return[3] = {0.0};
  double balance_owed = 1500000, term = 18, percent = 6.0;
  credit_diff_calc(balance_owed, term, percent, my_return);
  double mounthly_payment = my_return[0];
  double total_payment = my_return[1];
  double overpayment = my_return[2];

  ck_assert_double_eq_tol(mounthly_payment, 83333.33, 2);
  ck_assert_double_eq_tol(overpayment, 71250.0, 2);
  ck_assert_double_eq_tol(total_payment, 1571250.0, 2);
}
END_TEST

START_TEST(dep_calc_1_no_cap) {
  double amount = 100000.0, rate = 7.0, tax = 4.25, term = 8.0, type = 0.0,
         capitalization = 0.0;
  char *replenishments = "02:5000";
  char *withdrawals = "06:2000";
  double my_return[256] = {0};
  if (is_norm_dep_values(amount, rate, tax, term, withdrawals,
                         replenishments)) {
    dep_calc(amount, rate, tax, term, type, capitalization, withdrawals,
             replenishments, my_return);
    double percents = my_return[0];
    double tax_amount = my_return[1];
    double total_amount = my_return[2];
    ck_assert_double_eq_tol(percents, 4828.29, 2);
    ck_assert_double_eq_tol(tax_amount, 0.0, 2);
    ck_assert_double_eq_tol(total_amount, 103000, 2);
  } else {
    printf("\n\nNOT NORMAL STRING!!!\n");
  }
}
END_TEST

START_TEST(dep_calc_1_cap) {
  double amount = 100000.0, rate = 7.0, tax = 4.25, term = 8.0, type = 0.0,
         capitalization = 1.0;
  char *replenishments = "02:5000";
  char *withdrawals = "06:2000";
  double my_return[256] = {0};
  if (is_norm_dep_values(amount, rate, tax, term, withdrawals,
                         replenishments)) {
    dep_calc(amount, rate, tax, term, type, capitalization, withdrawals,
             replenishments, my_return);
    double percents = my_return[0];
    double tax_amount = my_return[1];
    double total_amount = my_return[2];
    ck_assert_double_eq_tol(percents, 4927.76, 2);
    ck_assert_double_eq_tol(tax_amount, 0.0, 2);
    ck_assert_double_eq_tol(total_amount, 107927.76, 2);
  } else {
    printf("\n\nNOT NORMAL STRING!!!\n");
  }
}
END_TEST

START_TEST(dep_calc_2_no_cap) {
  double amount = 100000.0, rate = 7.0, tax = 4.25, term = 15, type = 0.0,
         capitalization = 0.0;
  char *replenishments = "";
  char *withdrawals = "";
  double my_return[256] = {0};
  if (is_norm_dep_values(amount, rate, tax, term, withdrawals,
                         replenishments)) {
    dep_calc(amount, rate, tax, term, type, capitalization, withdrawals,
             replenishments, my_return);
    double percents = my_return[0];
    double tax_amount = my_return[1];
    double total_amount = my_return[2];
    ck_assert_double_eq_tol(percents, 8726.03, 2);
    ck_assert_double_eq_tol(tax_amount, 0.0, 2);
    ck_assert_double_eq_tol(total_amount, 100000.0, 2);
  } else {
    printf("\n\nNOT NORMAL STRING!!!\n");
  }
}
END_TEST

START_TEST(dep_calc_2_cap) {
  double amount = 100000.0, rate = 7.0, tax = 4.25, term = 15, type = 0.0,
         capitalization = 1.0;
  char *replenishments = "";
  char *withdrawals = "";
  double my_return[256] = {0};
  if (is_norm_dep_values(amount, rate, tax, term, withdrawals,
                         replenishments)) {
    dep_calc(amount, rate, tax, term, type, capitalization, withdrawals,
             replenishments, my_return);
    double percents = my_return[0];
    double tax_amount = my_return[1];
    double total_amount = my_return[2];
    ck_assert_double_eq_tol(percents, 9090.4, 2);
    ck_assert_double_eq_tol(tax_amount, 0.0, 2);
    ck_assert_double_eq_tol(total_amount, 109090.4, 2);
  } else {
    printf("\n\nNOT NORMAL STRING!!!\n");
  }
}
END_TEST

START_TEST(dep_calc_3_no_cap) {
  double amount = 100000.0, rate = 7.0, tax = 4.25, term = 40.0, type = 1.0,
         capitalization = 0.0;
  char *replenishments = "";
  char *withdrawals = "";
  double my_return[256] = {0};
  if (is_norm_dep_values(amount, rate, tax, term, withdrawals,
                         replenishments)) {
    dep_calc(amount, rate, tax, term, type, capitalization, withdrawals,
             replenishments, my_return);
    double percents = my_return[0];
    double tax_amount = my_return[1];
    double total_amount = my_return[2];
    ck_assert_double_eq_tol(percents, 23301.37, 2);
    ck_assert_double_eq_tol(tax_amount, 0.0, 2);
    ck_assert_double_eq_tol(total_amount, 100000, 2);
  } else {
    printf("\n\nNOT NORMAL STRING!!!\n");
  }
}
END_TEST

START_TEST(dep_calc_3_cap) {
  double amount = 100000.0, rate = 7.0, tax = 4.25, term = 40.0, type = 1.0,
         capitalization = 1.0;
  char *replenishments = "";
  char *withdrawals = "";
  double my_return[256] = {0};
  if (is_norm_dep_values(amount, rate, tax, term, withdrawals,
                         replenishments)) {
    dep_calc(amount, rate, tax, term, type, capitalization, withdrawals,
             replenishments, my_return);
    double percents = my_return[0];
    double tax_amount = my_return[1];
    double total_amount = my_return[2];
    ck_assert_double_eq_tol(percents, 25990.1, 2);
    ck_assert_double_eq_tol(tax_amount, 0.0, 2);
    ck_assert_double_eq_tol(total_amount, 125990, 2);
  } else {
    printf("\n\nNOT NORMAL STRING!!!\n");
  }
}
END_TEST

START_TEST(style_addition_1) {
  char start_string[256] = {")1+2"};
  char x_string[128] = {'\0'};
  int string_status = valid_string(start_string, x_string);
  ck_assert_int_eq(string_status, 0);
}
END_TEST

START_TEST(style_addition_2) {
  char start_string[256] = {"0+10.5("};
  char x_string[128] = {'\0'};
  int string_status = valid_string(start_string, x_string);
  ck_assert_int_eq(string_status, 0);
}
END_TEST

START_TEST(style_addition_3) {
  char start_string[256] = {")))0+0((("};
  char x_string[128] = {'\0'};
  int string_status = valid_string(start_string, x_string);
  ck_assert_int_eq(string_status, 0);
}
END_TEST

START_TEST(style_addition_4) {
  char start_string[256] = {"0+0"};
  char x_string[128] = {'\0'};
  int string_status = valid_string(start_string, x_string);
  ck_assert_int_eq(string_status, 1);
}
END_TEST

START_TEST(style_addition_5) {
  char start_string[256] = {"-100+c21)"};
  char x_string[128] = {'\0'};
  int string_status = valid_string(start_string, x_string);
  ck_assert_int_eq(string_status, 0);
}
END_TEST

//----------------------------------------------------------------------------------------------//

START_TEST(style_subtraction_1) {
  char start_string[256] = {"10-5*c/3)"};
  char x_string[128] = {'\0'};
  int string_status = valid_string(start_string, x_string);
  ck_assert_int_eq(string_status, 0);
}
END_TEST

START_TEST(style_subtraction_2) {
  char start_string[256] = {"-0-100*(0)"};
  char x_string[128] = {'\0'};
  int string_status = valid_string(start_string, x_string);
  ck_assert_int_eq(string_status, 1);
}
END_TEST

START_TEST(style_subtraction_3) {
  char start_string[256] = {"32+-32"};  // !!!
  char x_string[128] = {'\0'};
  int string_status = valid_string(start_string, x_string);
  ck_assert_int_eq(string_status, 1);
}
END_TEST

START_TEST(style_subtraction_4) {
  char start_string[256] = {"999-99-500-25-*75-200-93-7-499"};
  char x_string[128] = {'\0'};
  int string_status = valid_string(start_string, x_string);
  ck_assert_int_eq(string_status, 0);
}
END_TEST

START_TEST(style_subtraction_5) {
  char start_string[256] = {"999-99-500+25-75-200+93-7-499+"};
  char x_string[128] = {'\0'};
  int string_status = valid_string(start_string, x_string);
  ck_assert_int_eq(string_status, 0);
}
END_TEST

//----------------------------------------------------------------------------------------------//

START_TEST(style_multiplication_1) {
  char start_string[256] = {"10**5"};
  char x_string[128] = {'\0'};
  int string_status = valid_string(start_string, x_string);
  ck_assert_int_eq(string_status, 0);
}
END_TEST

START_TEST(style_multiplication_2) {
  char start_string[256] = {"-0***1000"};
  char x_string[128] = {'\0'};
  int string_status = valid_string(start_string, x_string);
  ck_assert_int_eq(string_status, 0);
}
END_TEST

START_TEST(style_multiplication_3) {
  char start_string[256] = {"32*2"};
  char x_string[128] = {'\0'};
  int string_status = valid_string(start_string, x_string);
  ck_assert_int_eq(string_status, 1);
}
END_TEST

START_TEST(style_multiplication_4) {
  char start_string[256] = {"2*2*2*8"};
  char x_string[128] = {'\0'};
  int string_status = valid_string(start_string, x_string);
  ck_assert_int_eq(string_status, 1);
}
END_TEST

START_TEST(style_multiplication_5) {
  char start_string[256] = {"-7*6"};
  char x_string[128] = {'\0'};
  int string_status = valid_string(start_string, x_string);
  ck_assert_int_eq(string_status, 1);
}
END_TEST

//----------------------------------------------------------------------------------------------//

START_TEST(style_division_1) {
  char start_string[256] = {"10/+2"};
  char x_string[128] = {'\0'};
  int string_status = valid_string(start_string, x_string);
  ck_assert_int_eq(string_status, 0);
}
END_TEST

START_TEST(style_division_2) {
  char start_string[256] = {"0/456..7"};
  char x_string[128] = {'\0'};
  int string_status = valid_string(start_string, x_string);
  ck_assert_int_eq(string_status, 0);
}
END_TEST

START_TEST(style_division_3) {
  char start_string[256] = {".31/2"};
  char x_string[128] = {'\0'};
  int string_status = valid_string(start_string, x_string);
  ck_assert_int_eq(string_status, 0);
}
END_TEST

START_TEST(style_division_4) {
  char start_string[256] = {"100./2./2./5/5."};
  char x_string[128] = {'\0'};
  int string_status = valid_string(start_string, x_string);
  ck_assert_int_eq(string_status, 1);
}
END_TEST

START_TEST(style_division_5) {
  char start_string[256] = {"-999/9"};
  char x_string[128] = {'\0'};
  int string_status = valid_string(start_string, x_string);
  ck_assert_int_eq(string_status, 1);
}
END_TEST

//----------------------------------------------------------------------------------------------//

START_TEST(style_power_1) {
  char start_string[256] = {"10^2)"};
  char x_string[128] = {'\0'};
  int string_status = valid_string(start_string, x_string);
  ck_assert_int_eq(string_status, 0);
}
END_TEST

START_TEST(style_power_2) {
  char start_string[256] = {"1^.43"};
  char x_string[128] = {'\0'};
  int string_status = valid_string(start_string, x_string);
  ck_assert_int_eq(string_status, 0);
}
END_TEST

START_TEST(style_power_3) {
  char start_string[256] = {"3.^2"};
  char x_string[128] = {'\0'};
  int string_status = valid_string(start_string, x_string);
  ck_assert_int_eq(string_status, 1);
}
END_TEST

START_TEST(style_power_4) {
  char start_string[256] = {"0^0)"};
  char x_string[128] = {'\0'};
  int string_status = valid_string(start_string, x_string);
  ck_assert_int_eq(string_status, 0);
}
END_TEST

START_TEST(style_power_5) {
  char start_string[256] = {"-1^*3"};
  char x_string[128] = {'\0'};
  int string_status = valid_string(start_string, x_string);
  ck_assert_int_eq(string_status, 0);
}
END_TEST

//----------------------------------------------------------------------------------------------//

START_TEST(style_cosine_1) {
  char start_string[256] = {"cos0-)"};
  char x_string[128] = {'\0'};
  int string_status = valid_string(start_string, x_string);
  ck_assert_int_eq(string_status, 0);
}
END_TEST

START_TEST(style_cosine_2) {
  char start_string[256] = {"cos1+1.34)"};
  char x_string[128] = {'\0'};
  int string_status = valid_string(start_string, x_string);
  ck_assert_int_eq(string_status, 0);
}
END_TEST

START_TEST(style_cosine_3) {
  char start_string[256] = {"tan-5"};  // добавить проверку унарного минуса
  char x_string[128] = {'\0'};
  int string_status = valid_string(start_string, x_string);
  ck_assert_int_eq(string_status, 1);
}
END_TEST

START_TEST(style_cosine_4) {
  char start_string[256] = {"L5)"};
  char x_string[128] = {'\0'};
  int string_status = valid_string(start_string, x_string);
  ck_assert_int_eq(string_status, 0);
}
END_TEST

START_TEST(style_cosine_5) {
  char start_string[256] = {"c0.3.0)"};
  char x_string[128] = {'\0'};
  int string_status = valid_string(start_string, x_string);
  ck_assert_int_eq(string_status, 0);
}
END_TEST

START_TEST(style_mix_1) {
  char start_string[256] = {"((1+2)*((3+5)*4))"};
  char x_string[128] = {'\0'};
  int string_status = valid_string(start_string, x_string);
  ck_assert_int_eq(string_status, 1);
}
END_TEST

START_TEST(style_mix_2) {
  char start_string[256] = {"(((1+2)))*3"};
  char x_string[128] = {'\0'};
  int string_status = valid_string(start_string, x_string);
  ck_assert_int_eq(string_status, 1);
}
END_TEST

START_TEST(style_mix_3) {
  char start_string[256] = {"(((1+2)))*3"};
  char x_string[128] = {'\0'};
  int string_status = valid_string(start_string, x_string);
  ck_assert_int_eq(string_status, 1);
}
END_TEST

START_TEST(style_mix_4) {
  char start_string[256] = {"(((1*(2)))-3)"};
  char x_string[128] = {'\0'};
  int string_status = valid_string(start_string, x_string);
  ck_assert_int_eq(string_status, 1);
}
END_TEST

int main(void) {
  Suite *s1 = suite_create("Core");
  TCase *tc1_1 = tcase_create("Core");
  SRunner *sr = srunner_create(s1);
  int tc = 0;
  suite_add_tcase(s1, tc1_1);

  tcase_add_test(tc1_1, addition_1);
  tcase_add_test(tc1_1, addition_2);
  tcase_add_test(tc1_1, addition_3);
  tcase_add_test(tc1_1, addition_4);
  tcase_add_test(tc1_1, addition_5);

  tcase_add_test(tc1_1, subtraction_1);
  tcase_add_test(tc1_1, subtraction_2);
  tcase_add_test(tc1_1, subtraction_3);
  tcase_add_test(tc1_1, subtraction_4);
  tcase_add_test(tc1_1, subtraction_5);

  tcase_add_test(tc1_1, multiplication_1);
  tcase_add_test(tc1_1, multiplication_2);
  tcase_add_test(tc1_1, multiplication_3);
  tcase_add_test(tc1_1, multiplication_4);
  tcase_add_test(tc1_1, multiplication_5);

  tcase_add_test(tc1_1, division_1);
  tcase_add_test(tc1_1, division_2);
  tcase_add_test(tc1_1, division_3);
  tcase_add_test(tc1_1, division_4);
  tcase_add_test(tc1_1, division_5);

  tcase_add_test(tc1_1, power_1);
  tcase_add_test(tc1_1, power_2);
  tcase_add_test(tc1_1, power_3);
  tcase_add_test(tc1_1, power_4);
  tcase_add_test(tc1_1, power_5);

  tcase_add_test(tc1_1, cosine_1);
  tcase_add_test(tc1_1, cosine_2);
  tcase_add_test(tc1_1, cosine_3);
  tcase_add_test(tc1_1, cosine_4);
  tcase_add_test(tc1_1, cosine_5);

  tcase_add_test(tc1_1, mix_1);
  tcase_add_test(tc1_1, mix_2);
  tcase_add_test(tc1_1, mix_3);
  tcase_add_test(tc1_1, mix_4);
  tcase_add_test(tc1_1, mix_5);
  tcase_add_test(tc1_1, mix_6);
  tcase_add_test(tc1_1, mix_7);
  tcase_add_test(tc1_1, mix_8);
  tcase_add_test(tc1_1, mix_9);
  tcase_add_test(tc1_1, mix_10);
  tcase_add_test(tc1_1, mix_11);
  tcase_add_test(tc1_1, mix_12);
  tcase_add_test(tc1_1, mix_13);
  tcase_add_test(tc1_1, mix_14);
  tcase_add_test(tc1_1, mix_15);
  tcase_add_test(tc1_1, mix_16);
  tcase_add_test(tc1_1, mix_17);
  tcase_add_test(tc1_1, mix_18);
  tcase_add_test(tc1_1, mix_19);

  tcase_add_test(tc1_1, empty);

  tcase_add_test(tc1_1, credit_annuity_1);
  tcase_add_test(tc1_1, credit_annuity_2);
  tcase_add_test(tc1_1, credit_annuity_3);

  tcase_add_test(tc1_1, credit_diff_1);
  tcase_add_test(tc1_1, credit_diff_2);
  tcase_add_test(tc1_1, credit_diff_3);

  tcase_add_test(tc1_1, dep_calc_1_no_cap);
  tcase_add_test(tc1_1, dep_calc_1_cap);
  tcase_add_test(tc1_1, dep_calc_2_no_cap);
  tcase_add_test(tc1_1, dep_calc_2_cap);
  tcase_add_test(tc1_1, dep_calc_3_no_cap);
  tcase_add_test(tc1_1, dep_calc_3_cap);

  tcase_add_test(tc1_1, style_addition_1);
  tcase_add_test(tc1_1, style_addition_2);
  tcase_add_test(tc1_1, style_addition_3);
  tcase_add_test(tc1_1, style_addition_4);
  tcase_add_test(tc1_1, style_addition_5);

  tcase_add_test(tc1_1, style_subtraction_1);
  tcase_add_test(tc1_1, style_subtraction_2);
  tcase_add_test(tc1_1, style_subtraction_3);
  tcase_add_test(tc1_1, style_subtraction_4);
  tcase_add_test(tc1_1, style_subtraction_5);

  tcase_add_test(tc1_1, style_multiplication_1);
  tcase_add_test(tc1_1, style_multiplication_2);
  tcase_add_test(tc1_1, style_multiplication_3);
  tcase_add_test(tc1_1, style_multiplication_4);
  tcase_add_test(tc1_1, style_multiplication_5);

  tcase_add_test(tc1_1, style_division_1);
  tcase_add_test(tc1_1, style_division_2);
  tcase_add_test(tc1_1, style_division_3);
  tcase_add_test(tc1_1, style_division_4);
  tcase_add_test(tc1_1, style_division_5);

  tcase_add_test(tc1_1, style_power_1);
  tcase_add_test(tc1_1, style_power_2);
  tcase_add_test(tc1_1, style_power_3);
  tcase_add_test(tc1_1, style_power_4);
  tcase_add_test(tc1_1, style_power_5);

  tcase_add_test(tc1_1, style_cosine_1);
  tcase_add_test(tc1_1, style_cosine_2);
  tcase_add_test(tc1_1, style_cosine_3);
  tcase_add_test(tc1_1, style_cosine_4);
  tcase_add_test(tc1_1, style_cosine_5);

  tcase_add_test(tc1_1, style_mix_1);
  tcase_add_test(tc1_1, style_mix_2);
  tcase_add_test(tc1_1, style_mix_3);
  tcase_add_test(tc1_1, style_mix_4);

  srunner_run_all(sr, CK_ENV);
  tc = srunner_ntests_failed(sr);
  srunner_free(sr);

  return tc == 0 ? 0 : 1;
}
