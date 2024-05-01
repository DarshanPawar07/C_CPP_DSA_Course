
      /* Que - Assume price of 1 USD is INR 84.23. Write a program to take the amount in
               INR and convert it into USD */

      #include <stdio.h>
      int main()

                  {

                      int inr , usd ;
 
                      printf(" Enter The Amount In INR\n ") ;
                      scanf(" %d ", &inr ) ;

                      printf(" %d INR Equals To %f USD", inr, inr / 84.23 ) ;

                      return 0;

                  }