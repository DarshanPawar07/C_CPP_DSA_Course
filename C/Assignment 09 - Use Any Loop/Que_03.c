
             /* Que - Write a program to calculate sum of first N odd natural numbers */

             #include<stdio.h>
             int main()

                         {

                             int i , n , s ;

                             printf("Enter The Value Of N\n");
                             scanf("%d",&n);

                             for( i=1 , s=0 ; i <= 2*n ; i+=2 )
                                                                {
                                                                    s = s + i ;
                                                                }

                             printf("Sum Of %d Odd Natural Numbers Is %d\n", n , s ) ;
    
                             return 0;

                         } 