
        /* Que - Write a program to find the Nth term of the Fibonacci series */

        #include<stdio.h>
        int main()

                      {

                            int a = -1 , b = 1 , i , c , n ;

                            printf("Enter the value of 'n'\n");
                            scanf("%d" , &n) ;

                            for( i=0 ; i<=n ; i++ )
                                                    {
                                                        c = a + b ;
                                                        a = b ;
                                                        b = c ;
                                                    }

                            printf("The Nth Term Of Fibonacci Series Is %d", c);

                            return 0;


                      }
