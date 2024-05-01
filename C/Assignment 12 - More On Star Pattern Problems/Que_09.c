
        /* Que - Write A Program To Print The Following Pattern     1234321
                                                                    123 321
                                                                    12   21
                                                                    1     1
        */

        #include <stdio.h>
        int main()

                     {

                          int i , j , k ;
                          
                          printf("\n");

                          for ( i = 1 ; i <= 4 ; i++ )

                                 {
                                      k = 1;

                                      for ( j = 1 ; j <= 7 ; j++ )

                                             {

                                                  if ( j <= 5 - i  ||  j >= 3 + i )

                                                         {
                                                              printf("%d", k);
                                                                       {             
                                                                           j < 4 ? k++ : k--;
                                                                       }
                                                         }

                                                   else

                                                        {
                                                             printf(" ");

                                                             if ( j == 4 )
                                                              
                                                                     {
                                                                        k--;
                                                                     }

                                                         }


                                             }


                                       printf("\n");


                                 }

                          return 0;
                           
                     }