
        /* Que - Write A Program To Print The Following Program   ABCDEFG
                                                                   ABCDE
                                                                    ABC
                                                                     A
        */


         #include <stdio.h>
         int main()

                      {

                           int i , j , k ;

                           printf("\n");

                           for ( i = 1 ; i <= 4 ; i++ )

                                   {

                                       k = 'A' ;

                                       for ( j = 1 ; j <= 7 ; j++ )

                                              {

                                                   if ( j >= i  &&  j <= 8 - i )

                                                         { 
                                                            printf("%c",k);
                                                            k++;
                                                         }

                                                   else
                                                         {
                                                            printf(" ");
                                                         }

                                             }              

                                       printf("\n");

                                   }

                           return 0;

                     }