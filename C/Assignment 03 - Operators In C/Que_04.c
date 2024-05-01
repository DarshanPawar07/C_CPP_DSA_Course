
       /* Que - Write a program to print unit digit of a given number  */

       #include <stdio.h>
       int main()

                  {
                    
                       int c , d , f , g ,i = 0  ;

                       printf("Enter the Number ");
                       scanf("%d", &c);

                       d = c;
                       while ( d )

                                 {
                                     d = d / 10;
                                     i++ ;
                                 }

                        g = c;
                        for ( f = 1; f <= i - 1 ; f++ )

                                        {
                                            g = g / 10;
                                        }

                       printf("Unit Digit Is %d", g);

                       return 0;

                 }