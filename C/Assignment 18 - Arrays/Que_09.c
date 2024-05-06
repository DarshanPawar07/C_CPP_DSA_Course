        
        /*Que -  Write a program to sort an array of 10 elements in descending order. */

        #include<stdio.h>
        int main()

                    {
                          int a[10] , i , max , b , c , r ;

                          printf("Enter The Numbers\n");

                          for( i = 0 ; i <= 9 ; i++ )

                                  {
                                      scanf("%d" , &a[i]) ;
                                  }

                          for( r = 1 ; r <= 9 ; r++ )

                              for( i = 0 ; i <= 9 - r ; i++ )

                                     {  
                                           if ( a[i] < a[i+1] )
                          
                                               {
                                                    b = a[i] ; 

                                                    a[i] = a[i+1] ;

                                                    a[i+1] = b ;


                                               }
                                     }

                         
                         printf("\n\n");

                         for( i = 0 ; i <= 9 ; i++ )

                                {
                                   printf("%d\n" ,a[i]);
                                }
                         
                         return 0;
 
                    }