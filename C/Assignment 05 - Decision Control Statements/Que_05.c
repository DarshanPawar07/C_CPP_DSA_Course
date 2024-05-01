     
     
     /*  Que - Write A Program To Check Whether A Given Number Is An Even Number  Or An Odd 
                Number Using Bitwise Operator   */

         

      #include <stdio.h>
      int main()

                  {
                      
                       int a ;

                       printf(" Enter the Number\n ") ;
                       scanf(" %d ", &a) ;

                       if((a ^ 1) == (a + 1))
                                             {
                                                printf("Entered Number Is An Even Number") ;
                                             }
                        else 
                           {
                               printf("Entered Number Is An Odd Number") ;
                           }

                       return 0;
  
                  }
     
     
     
   