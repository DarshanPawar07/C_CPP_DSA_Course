
        /*  Que - Write a program to swap values of two int variables without using third
                   variable and arithmetic operators.  */
  

       #include <stdio.h>
       int main()

                  {
                        int a , b ;

                        printf("Enter value of a and b\n");
                        scanf("%d %d", &a, &b);

                         // ^ is a bitwise operator called as XOR.

                         a = a ^ b;
                         b = a ^ b;
                         a = a ^ b;

                         printf("Value of 'a' is  %d and value of 'b' is %d", a, b);

                         return 0;

                   }