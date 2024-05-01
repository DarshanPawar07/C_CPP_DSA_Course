
        /*  Que - Write a program to print the first N odd natural numbers  */

 
         #include<stdio.h>
         int main()

                  {
                    
                       int n , i = 1 ;

                       printf("Enter The value of 'n'\n");
                       scanf(" %d ", &n ) ;

                       while( i <= n )

                              {
                                 printf(" %d\n ", 2*i-1 ) ;
                                 i++ ;
                              }

                       return 0 ;

                  }



