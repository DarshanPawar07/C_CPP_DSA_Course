
     
        /*  Que - Write A Program To Check Whether A Given Number Is An Even Number Or An Odd Number
                   Without Using % Operator  */

        #include <stdio.h>
        int main()

                   {
                        int a ;

                        printf("Enter the Number\n") ;
                        scanf(" %d ", &a) ;

                        if ( a % 2 == 1 )
                                       {
                                          printf("Entered Number Is Odd Number") ;
                                       }

                        else
                             {
                                 printf("Entered Number Is Even Number") ;
                             }


                        return 0 ;
  
                  }