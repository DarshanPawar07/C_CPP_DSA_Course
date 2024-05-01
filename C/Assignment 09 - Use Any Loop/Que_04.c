
        /* Que - Write a program to calculate sum of squares of first N natural numbers */

        #include<stdio.h>
        int main()

                   {

                        int n , i , s ;

                        printf("Enter The value of n\n");
                        scanf("%d",&n);

                        for( i=1 , s=0 ; i<=n ; i++ )
                                              {
                                                   s = s + i * i ;
                                              }
                        

                        printf("Sum Of Squares is %d\n",s); 

                        return 0;

                  }