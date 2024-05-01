
         /*  Que - Write A Program To Print         *
                                                   **
                                                  ***
                                                 ****
                                                *****                                                    
         */


         #include <stdio.h>
         int main()

                     {

                           int i , j ;

                           for ( j = 1 ; j <= 5 ; j++ )

                                    {

                                         for ( i = 1 ; i <= 5 ; i++ )
                                         
                                                 {

                                                     if (j <= 5 - i)
                                                     printf(" ");

                                                     else
                                                     printf("*");
                                                 }

                                         printf("\n");

                                     }

                           printf("\n");
 
                           return 0;

                     }