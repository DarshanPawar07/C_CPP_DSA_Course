
        /* Que - Write A Program To Print The Following Pattern        1
                                                                      1 1
                                                                     1 1 1
                                                                    1 1 1 1
                                                                   1 1 1 1 1
        */
              
        
        #include <stdio.h>
        int main()


                     {

                           int i , j , k ;

                           for ( i = 1 ; i <= 5 ; i++ )

                                 {

                                     k = 1 ;
                                
                                     for ( j = 1 ; j <= 9 ; j++ )

                                          {

                                             if ( j >= 6 - i  &&  j <= 4 + i )

                                                 {
                                                      if (k)
                                                            {
                                                               printf("%d",k);
                                                            }

                                                      else
                                                           {
                                                              printf(" ");
                                                           }

                                                      k = 1-k ;

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