 
        /* Que - Write a program to make the last digit of a number stored in a variable as zero.
                  (Example - if x=2345 then make it x=2340) */

       #include<stdio.h>
       int main()

                  {

                       int a , e ;  

                       printf(" Enter The Number\n ") ;
                       scanf(" %d ", &a) ;

                       e = ( a / 10 ) * 10 ;

                       printf("New Number is %d",e) ;

                       return 0;

                  }