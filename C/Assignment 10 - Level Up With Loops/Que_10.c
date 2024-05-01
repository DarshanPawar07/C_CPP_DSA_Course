                
        /* Que - Write a program to print all Armstrong numbers under 1000 */
                
        #include <stdio.h>
        int main()

                    {

                           int x , y , n = 0 , p , i , sum = 0, z ;

                           for (y = 1; y <= 1000; y++)

                                    {
                                        
                                        x = y ;
                                        n = 0 ;

                                        while (x)
                                                 {
                                                    x = x / 10;
                                                    n++ ;
                                                 }

                                        for (x = y , sum = 0 ; x ; x = x / 10 )

                                             {
                                                 z = x % 10;
                                                  
                                                 for ( p = 1 , i = 1 ; i <= n ; i++)

                                                      {
                                                           p = p * z;
                                                      } 

                                                 sum = sum + p;
                                             }

                                        if (sum == y)
                                                      {
                                                         printf("%d\n", y) ;
                                                      }
                                        
    
                                    }

                           return 0;

                           
                    }
