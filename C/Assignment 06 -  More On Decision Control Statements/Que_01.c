
       /*  Que - Write A Program To Check Whether A Given Number Is Three  Digit Number Or Not */

       #include <stdio.h>
       int main()

                  {

                         int a , b , c ;

                         printf(" Enter A Number\n ");
                         scanf("%d", &a);
   
                         if (a / 100 <= 9 && a / 100 >= 1)

                                                {
                                                   printf("Number Entered Is A Three Digit Number");
                                                }

                         else

                              {
                                 printf("Number Entered Is Not A Three Digit Number");
                              }


                         return 0;

      
                  }