
        /* Que - Write a program to count digits in a given number */
            
        #include <stdio.h>
        int main()

                   {

                        int x , count = 0;

                        printf("Enter The Value Of X\n");
                        scanf("%d",&x);

                        while (x)
                                 {
                                    x = x / 10;
                                    count++;
                                 }

                        printf("Digits = %d ", count);

                        return 0;

                   }