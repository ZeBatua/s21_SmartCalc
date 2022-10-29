#include <stdio.h>  // Для printf
#include <string.h> // Для strcmp
int main (void)
{    
   // Сравниваемые строки
   char str [11]="0123456789.";
   char sym [10]="3";
    char *isym;
  
   // Сравниваем две строки
   isym = strpbrk (str,sym); // NULL если не найдены
   printf ("Искомый символ на позиции %d\n",isym-str+1);

   return 0;
}

// #include <stdio.h>   //Для printf()
// #include <stdlib.h>  //Для atof()

// int main (void)
// {   
//    char *Str = "74.610.24+4124"; //Строка для преобразования
//    double Num=0;             //Переменная для записи результата
   
//    //Преобразование строки в число типа double
//    Num = atof (Str);
   
//    //Вывод результата преобразования
//    printf ("%f\n",Num);
   
//    //Завершение работы программы
//    return 0; 
// } 