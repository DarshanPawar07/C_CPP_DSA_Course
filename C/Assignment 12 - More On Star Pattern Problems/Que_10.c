
        /* Que - Write A Program To Print The Following  Pattern    ABCDCBA
                                                                    ABC CBA
                                                                    AB   BA
                                                                    A     A
        */

        #include <stdio.h>
        int main()

                     {

                          char i , j , k ;

                          printf("\n");

                          for ( i = 1 ; i <= 4 ; i++ )

                                  {
                                       k = 'A';

                                       for ( j = 1 ; j <= 7 ; j++ )

                                             {
                                                   if ( j <= 5 - i  ||  j >= 3 + i )

                                                         {
                                                              printf("%c", k);

                                                                    {
                                                                        j < 4 ? k++ : k-- ;
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