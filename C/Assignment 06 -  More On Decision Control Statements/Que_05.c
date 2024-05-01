
      /* Que - Write A Program To Check Whether A Given Number Is Divisible By 3 And Divisible By 2   */

        #include <stdio.h>
        int main()
        
                     {

                             int a ;

                             printf("Enter The Number\n") ;
                             scanf(" %d ", &a) ;

                             if (a % 3 == 0)
                                            {
                                                printf("Number Is Divisible By 3");
                                            }

                             else
                                  {
                                      printf("Number Is Not Divisible By 3");
                                  }

                             if (a % 2 == 0)
                                            {
                                                printf(" And Number Is Divisible By 2");
                                            }

                             else
                                  {
                                      printf(" But Number Is Not Divisible By 2");
                                  }

                             return 0;
                     }