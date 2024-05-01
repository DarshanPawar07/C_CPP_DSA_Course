
     
     /* Que-  - Write a program to calculate average of three integers. Numbers are given by the user. */

     #include<stdio.h>
     int main()

                {    
                    int a , b , c ;

                    float  avg ;

                    printf("Enter threee numbers \n");

                    scanf("%d %d %d", &a , &b , &c);

                    avg = ( a + b +c ) / 3.0 ;

                    printf("The average of a,b,c is %f", avg) ;
   
                    return 0;
                    
                } 