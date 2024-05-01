
        /* Que - Write a program to calculate LCM of two numbers */

        #include <stdio.h>
        int main()

                  {

                      int l , a , b;

                      printf("Enter two numbers\n");
                      scanf("%d%d", &a, &b);

                      for ( l = a > b ? a : b ; l <= a * b ; l++ )
                         /* it represents if a is greater than b, assign a into l, if not, assign b into l.*/
                                                            
                                               {
                                                    if (l % a == 0 && l % b == 0)

                                                              {
                                                                  printf("LCM of %d and %d is %d",a , b , l ) ;
                                                                  break ;
                                                              }
                                                              
                                                }

                      return 0 ;

                  }
