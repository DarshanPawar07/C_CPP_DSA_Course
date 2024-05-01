
       /* Que -  Write a program to swap values of two int variables */

       #include <stdio.h>
       int main()

                 {
                       int a , b , c ;

                       printf("Enter value of a and b\n");
                       scanf("%d %d", &a , &b);

                       c = a;
                       a = b;
                       b = c;

                       printf("Value of a is  %d and value of b is %d", a, b);

                       return 0;
                }