    
      /* Que - Write a program to swap values of two int variables in single line arithmetic expression. */

      #include<stdio.h>
      int main()

                  {

                        int a , b ;

                        printf("Enter The Values Of 'A' and 'B'\n");
                        scanf("%d %d", &a , &b ) ;

                        a = a + b - ( b = a ) ; 

                        printf("The Value of 'a' is %d and value of 'b' is %d",a,b);

                        return 0;

                  }