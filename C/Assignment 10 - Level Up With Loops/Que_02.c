     
        /* Que - Write A Program To Print First N Terms Of Fibonacci Series */
      
        #include<stdio.h>
        int main()

                   {

                           int a =-1 , b=1 , i , c , n ;

                           printf("Enter the value of 'n'\n");
                           scanf("%d" , &n);

                           for( i=0 ; i<=n ; i++ )
                                                   {
                                                       c = a + b ;
                                                       a = b ;
                                                       b = c ;
                                                       
                                                       printf("%d" ,c) ;
                                                   }
    
                           return 0;

                   }
