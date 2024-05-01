
         /* Que - Write a program to input a number from the user and also input a digit.
                  Append a digit in the number and print the resulting number.
                 (Example - number=234 and digit=9 then the resulting number is 2349)*/


        #include<stdio.h>
        int main()

                   {
                        int w , x , z ;
 
                        printf(" Enter The Number\n ");
                        scanf(" %d ", &w ) ;

                        printf(" Enter The Digit\n");
                        scanf(" %d ", &z) ;

                        x = ( w * 10 ) + z ;

                        printf("The Combined Number Is %d",x);

                        return 0;

                   }