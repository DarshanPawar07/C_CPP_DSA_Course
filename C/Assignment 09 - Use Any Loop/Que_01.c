
        /* Que - Write a program to calculate sum of first N natural numbers  */

        #include<stdio.h>
        int main()

                    {

                          int i , n , s ;

                          printf("Enter The Value Of n\n");
                          scanf(" %d ", &n ) ;

                          for( i=1 ,s=0 ; i<=n ; i++ ) 
                                                         {
                                                            s = s + i ;
                                                         }
                          

                          printf("Sum Upto %d Is %d\n", n , s ) ;
    
                          return 0;

                    }