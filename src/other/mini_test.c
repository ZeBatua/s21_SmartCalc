// #include <stdio.h>  // Для printf
// #include <string.h> // Для strcmp
// int main (void)
// {    
//    // Сравниваемые строки
//    char str [11]="123456789.";
//    char sym[5] = {'+', '+', '-'};
//    char *isym;
  
//    // Сравниваем две строки
//    isym = strpbrk (str,sym); // NULL если не найдены

//    if (isym != NULL) {
//       printf ("Искомый символ на позиции %d\n", isym-str+1);
//    } else {
//       printf("%s\n", isym);
//    }

//    return 0;
// }

#include <stdio.h>   //Для printf()
#include <stdlib.h>  //Для atof()

int main (void)
{   
   char *Str = "/4124"; //Строка для преобразования
   double Num=0;             //Переменная для записи результата
   
   //Преобразование строки в число типа double
   Num = atof (Str);
       
   //Вывод результата преобразования
   printf ("%f\n",Num);
   
   //Завершение работы программы
   return 0; 
} 

// #include <stdio.h>  // Для printf
// #include <string.h> // Для strstr
// int main (void)
// {    
//    char str1 [41]="()|cos|sin|tan|acos|asin|atan|sqrt|ln|log";
//    char str2 [10]="cos";
//    char *istr;
//    istr = strstr(str1,str2);

//    printf("строка = %s\n", istr);

//    if ( istr == NULL)
//       printf ("Строка не найдена\n");
//    else
//       printf ("Искомая строка начинается с символа %d\n",istr-str1+1);

//    return 0;
// }