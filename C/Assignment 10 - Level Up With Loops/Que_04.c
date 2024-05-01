            
        /* Que - Write a program to calculate HCF of two numbers */
                
            
        #include <stdio.h>
        int main()

                   {
                              
                         int a , b , c , i ;

                         printf("Enter Two Numbers\n");
                         scanf("%d %d", &a , &b) ;

                         if (a < b)
                                     {
                                        c = a ;
                                     }

                         else
                               {
                                  c = b ;
                               }

                         for ( i = ( a < b ? a : b ) ; i >= 2 ; i-- )

                                   {
                                        if ( a % i == 0  &&  b % i == 0 )

                                              {
                                                     printf("HCF of %d and %d is %d\n", a, b, i);
                                                     break;
                                              }

                                   }
                                      
                          return 0;

                   }
