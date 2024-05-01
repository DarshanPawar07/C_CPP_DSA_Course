
        
         /*  Que - Write A Program To Check Whether Roots Of A Given Quadratic Equations  Are Real 
                    And Distinct,Real And Equal Or Imaginary Roots.*/

          #include <stdio.h>
          int main()

                     {

                            int a , b , c ;

                            printf("Enter the value of a , b , c\n");
                            scanf(" %d %d %d ", &a, &b, &c);

                            if ( (b * b) - (4 * a * c) > 0)

                                                           {
                                                              printf("Roots Are Real And Distinct");
                                                           }

                            if ( (b * b) - (4 * a * c) == 0)

                                                           {
                                                              printf("Roots Are Real And Equal");
                                                           }

                            else
                                 {
                                    printf("Roots Are Imaginary");
                                 }
                                 

                            return 0;

                     }