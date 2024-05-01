
     
       /*  Que - Write A Program To Check Whether A Given Number Is Positive Or Non - Positive   */

       #include <stdio.h>
       int main()

                 {

                       int a ;

                       printf(" Enter The Number\n ") ;
                       scanf(" %d ", &a);

                       if (a > 0)
                                 {
                                    printf(" Entered Number Is Positive ") ;
                                 }

                       else if ( a < 0 )
                                        {
                                            printf(" Entered Number Is Non Positive ") ;
                                        }

                       else
                           {
                               printf("Entered Number Is Zero");
                           }
                       
                       
                       return 0 ;

                 }