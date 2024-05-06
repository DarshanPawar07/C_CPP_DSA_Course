
        /* Que -  Write a program in C to copy the elements of one array into another array.
                  Take array values from the user */


        #include<stdio.h>
        int main()

                    {
                          int  a[10] , b[10] , i ;

                          printf("Enter The Numbers\n");

                          for( i = 0 ; i <= 9 ; i++ )

                                {
                                    scanf("%d" , &a[i]) ;
                                }

                          for( i = 0 ; i <= 9 ; i++ )

                               {
                                    b[i] = a[i] ;
                               }

                          for( i = 0 ; i <= 9 ; i++ ) 
                          
                                { 
                                    printf("%d\n" , b[i]) ;
                                }  
                          

                          return 0;

                    }