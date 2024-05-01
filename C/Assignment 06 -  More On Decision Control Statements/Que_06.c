
            /* Que - Write a program to check whether a given number is divisibl by 7 or divisible by 3. */

            #include <stdio.h>
            int main()

                          {

                                int a ;
 
                                printf(" Enter The Number\n ");
                                scanf(" %d ", &a);
 
                                if (a % 7 == 0 || a % 3 == 0)
                                                          {
                                                             printf(" Number Is Divisible By 7 or 3 ");
                                                          }

                                else
                                    {
                                        printf(" Number Is Not Divisible By 7 or 3 ");
                                    }

                                return 0;
                         
                          }