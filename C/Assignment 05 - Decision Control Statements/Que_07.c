
        /*  Que - Write A Program To Print Greater Number Between Two Numbers. Print One Number If 
                  Both Are Same   */


        #include <stdio.h>
        int main()

                   {
                       
                        int a , b;

                        printf("Enter the value of a\n");
                        scanf("%d", &a);

                        printf("Enter the value of b\n");
                        scanf("%d", &b);

                        if (a >= b)
                                    {
                                         printf("Greater Number Is %d\n", a);
                                    }

                        if (a < b)
                                   {
                                        printf("Greater Number Is %d\n", b);
                                   }


                        return 0 ;
  
                   } 