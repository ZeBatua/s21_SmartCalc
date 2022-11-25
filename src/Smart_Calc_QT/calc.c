#include "calc.h"

int main() {
  double result = 0.0;
  int string_status = 0;
  int stop = 0;
  // char start_string[256] = {"2^3^2"};
  // char start_string[256] = {"--3"};
  // char start_string[256] = {"2^(3)^2+10"};



  // char start_string[256] = {"2^(3)^2"};



  //  char start_string[256] = {"2+3^(2*1+1)"};
  // char start_string[256] = {"3+4*2/(2)^(3^1)*100"}; // 103
  // char start_string[256] = {"11+7^2"}; 

  // char start_string[256] = {"1        +  2  ^ ( 3  * 2)"}; //НЕ РАБОТАЕТ. КАРОЧЕ нужна функция которая будет считать выражения в скобках

  char start_string[256] = {"100-(50+(10-7)-5)"};







  // char start_string[256] = {"10-(100(-60))*5"};!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
  adapt_string(start_string);
  printf("string after adapt: %s\n", start_string);


  if (valid_string(start_string)) {
    int status = 0;
    result = read_string(start_string, &status);
    printf("result = %F\n", result);
  } else {
    printf("NOT VALID\n");
  }

  return 0;

  // обработчик строки который изменит ÷ на / и прочеее
  // добовить кейс унарного минуса вида /- *- +- --
  // функция обработки строки должна уметь скипать пробелы или убрать их до обработки
  // ты можешь возвращать конкретный код ошибки в соотвествии прописывать ее выводе qt
  // is_open_op надо переделать тк не всегда требуется закрывающая скобка // НЕТ! скобки я ставлю везде
  // степень вообще игнорирует что либо!!!
  // valid можно упросить в 2 раза тк ты всегда подаешь скобки
  // если первый символ минус то он его как ошибку считает
  // gcc calc.c adapt_string.c valid_string.c read_string.c -g -o main && ./main
  // sqrt и ^ разные вещи одну из них ты забыл

  // cos2 + 3 -> give status priority -> make cos2 when '3' scaned
  // cos(cos3) 
  // исключаем coscoscossintan это гавнозапись -> добавить в valid слипшийся случайс coscos
  // 


}

/*
//----------------------------------------------------------------------------------------------//

если упал приоритет или выполнено выражение в скобках надо проверять на степень 


u- -> s- S- c- C- t- T- l- L- q- first_symbol !before_bracket! after_bracket


  OPS chtoto = {"(",   ")",   "+",   "-",   "*",   "/",   "^",
                "%",   "U",   "u",   "c",   "s",   "t",   "C",
                "S",   "T",   "q",   "l",   "L"};


-4
-0.5


//----------------------------------------------------------------------------------------------//
*/


  // char start_string[256] = {"3+4*2/(1-5)"}; // сделай ожидание закрывающей скобки, обработай ввод функций, двойная реализация степени (без и с "()")
  // пропиши все 3 кейса выдачи приоритета выполнения (закрывающая скобка, падение приоритета, конец строки)
  // char start_string[256] = {"(3+4*2/(2+0)^(3^1)*100) + 7^2"}; // 803
  // char start_string[256] = {"(11+2^2^(2) + 3*3)/6+2/2 + 15 + c0) * 10 + 5 / 5)"}; // 803
  // char start_string[256] = {"3+8/4*100"}; // 803
  
  // char start_string[256] = {"2*3-(8*2)"}; //  -10.0
  // char start_string[256] = {"(0.432*54.2/4^2-(-8*4))*0.02"}; //  5.5
  // // test.c:339:F:Core:mix_6:0: Assertion 'fabsl(3.5 - result) < 7' failed: result == nan, 3.5 == 3.5, 7 == 7
  // double result = 0.0;

//   tcase_add_test(tc1_1, cosine_1);
//   tcase_add_test(tc1_1, cosine_2);
//   tcase_add_test(tc1_1, cosine_3);
//   tcase_add_test(tc1_1, cosine_4);
//   tcase_add_test(tc1_1, cosine_5);

// START_TEST(cosine_1) {
//   char start_string[256] = {"cos(0)"};  
//   double result = 0.0;
//   result = calc_string(start_string, 1);
//   ck_assert_double_eq(result, cos(0));
// }
// END_TEST

// START_TEST(cosine_2) {
//   char start_string[256] = {"cos(1)"};  
//   double result = 0.0;
//   result = calc_string(start_string, 1);
//   ck_assert_double_eq(result, cos(1));
// }
// END_TEST

// START_TEST(cosine_3) {
//   char start_string[256] = {"cos(-5)"};  
//   double result = 0.0;
//   result = calc_string(start_string, 1);
//   ck_assert_double_eq(result, cos(-5));
// }
// END_TEST

// START_TEST(cosine_4) {
//   char start_string[256] = {"cos(5)"};  
//   double result = 0.0;
//   result = calc_string(start_string, 1);
//   ck_assert_double_eq(result, cos(5));
// }
// END_TEST

// START_TEST(cosine_5) {
//   char start_string[256] = {"cos(0.30)"};  
//   double result = 0.0;
//   result = calc_string(start_string, 1);
//   ck_assert_double_eq(result, cos(0.30));
// }
// END_TEST

