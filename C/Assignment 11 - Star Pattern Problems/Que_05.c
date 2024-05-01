
        /* Que - Write A Program To Printf The Following  Pattern   1
                                                                    12
                                                                    123
                                                                    1234
                                                                    12345                                                                                        
        */

       #include <stdio.h>
       int main()

                  {

                        int i , j ;

                        for ( i = 1 ; i <= 5 ; i++ )

                                { 

                                      for ( j = 1 ; j <= 5 ; j++ )

                                            {

                                                if ( j <= i )
                                                printf("%d", j);

                                                else
                                                printf(" ");

                                            }

                                      printf("\n");
                                }

                        printf("\n");

                        return 0;

                  }
