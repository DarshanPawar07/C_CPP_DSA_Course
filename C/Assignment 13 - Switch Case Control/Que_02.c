 
        /* Que - Write a menu driven program with the following options:   1. Addition
                                                                           2. Subtraction
                                                                           3. Multiplication
                                                                           4. Division
                                                                           5. Exit
        */
            
 
        #include <stdio.h>
        int main()

                      {

                           int c , a , b , d ;

                           printf("\n1.Addition");
                           printf("\n2.Substraction");
                           printf("\n3.Multiplication");
                           printf("\n4.Divison");
                           printf("\n5.Exit");

                           printf("\nEnter Your Choice\n");
                           scanf("%d", &c);

                           switch (c)

                                      {

                                         case 1:
                                         printf("\nEnter Two Numbers\n");
                                         scanf("%d %d" , a, b);
                                           
                                         printf("Addition Of %d And %d is %d", a, b, a + b);
                                         break;
    

                                         case 2:
                                         printf("\nEnter Two Numbers\n");
                                         scanf("%d %d" , a, b);

                                         d = a - b;

                                         printf("Substraction Of %d And %d is %d", a, b, d);
                                         break;

                                         case 3:
                                         printf("\nEnter Two Numbers\n");
                                         scanf("%d %d", a , b);

                                         d = a - b;

                                         printf("Product Of %d And %d is %d", a, b, d);
                                         break;

                                         case 4:
                                         printf("\nEnter Two Numbers\n");
                                         scanf("%d %d" , a , b);
                                         
                                         d = a / b;

                                         printf("Division Of %d And %d is %d", a, b, d);
                                         break;

                                         case 5:
                                         printf("\nExit\n");
                                         break;

                                         default:
                                         printf("\nNo Such Choice Exist");

                                     }

                           return 0;

                      }