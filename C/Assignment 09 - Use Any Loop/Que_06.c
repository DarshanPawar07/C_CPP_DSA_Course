
        /* Que - Write a program to calculate factorial of a number  */
  
          #include<stdio.h>
          int main()

                     {
                         
                            int i , s = 1 , n ;

                            printf("Enter The Value Of n\n");
                            scanf("%d",&n);

                            for( i=1 ; i<=n ; i++ )
                                                    {
                                                        s = s * i ;
                                                    }
                            
                            printf("Factorial Of %d Is %d", n , s ) ;
                           
                            return 0;
                            

                      } 


   