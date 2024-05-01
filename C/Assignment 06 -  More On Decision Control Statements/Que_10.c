 
       /* Que -  Write a program which takes the month number as an input and display number
                 of days in that month.*/

       #include <stdio.h>
       int main()

                    {

                          int month ;

                          printf("Enter The Number Of Month\n") ;
                          scanf("%d", &month) ;

                          if (month == 1 | 3 | 5 | 7 | 8 | 10 | 12)

                                    {
                                         printf("%d th Month Has 31 Days", month) ;
                                    }

                          else if (month == 4 | 6 | 9 | 11)

                                    {
                                          printf(" %dth Month has 30 Days", month) ;
                                    }

                          else if (month == 2)

                                    {
                                          printf("%dth Month Has 29 or 30 Days", month) ;
                                    }

                          else

                                    {
                                          printf("No Such Month Exists");
                                    }

                          return 0;


                     }