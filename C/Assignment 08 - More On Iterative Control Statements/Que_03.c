
       /* Que - Write a program to print the first N natural numbers in reverse order */
       
        #include<stdio.h>
        int main()

                {
                    
                    int n , i = 1 ;

                    printf("Enter The value of n\n");
                    scanf(" %d ", &n ) ;

                    while( i <= n )
                             {
                                 printf(" %d ", n+1-i ) ;
                                 i++ ;
                             }

                     return 0 ;

                }



