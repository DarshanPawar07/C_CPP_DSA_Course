                 
        /* Que - Write a program to check whether a given number is an Armstrong number or not   */ 
                 
        #include <stdio.h>
        int main()

                    {

                          int x , y , n , p , i , sum = 0 , d ;

                          printf("Enter The Number\n");
                          scanf("%d", &x);

                          y = x;

                          while (y)
                                   {
                                      y = y / 10;
                                      n++;
                                   }

                          for (y=x ; y ; y=y/10)
                                                 {
                                                     d = y % 10; 

                                                     for (p = 1 , i = 1 ; i <= n ; i++)
                                                           {
                                                               p = p * d;
                                                           }

                                                     sum = sum + p;
                                                     
                                                 }

                          if (sum == x)
                                        {
                                           printf("%d Is An Armstrong Number\n " , x);
                                        }

                          else
                                {
                                   printf(" %d Is Not An Armstrong Number\n " , x);
                                }

                           return 0;

                    }
