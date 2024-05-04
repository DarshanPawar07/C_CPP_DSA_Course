
        /* Que - Write a menu driven program with the following options:
                 1. Factorial of a number
                 2. Check Even and Odd
                 3. Area of circle
                 4. Sum of first N natural numbers
                 5. Exit    */
                        
        #include <stdio.h>
        int main()

                     {

                           int c , a , f , n , i , area ;

                           printf("Enter A Choice\n");
                           printf("\n1.Factorial");
                           printf("\n2.Check Even Or Odd ");
                           printf("\n3.Area Of Circle");
                           printf("\n4.Sum Of First N Natural Numbers");
                           printf("\n5.Exit\n");

                           
                           scanf("%d", &c);

                           switch (c)

                                     {
                                         case 1:
                                         
                                         printf("enter a number");
                                         scanf("%d",&a);

                                         f=1;

                                         while(a)

                                            {
                                                f = f * a ;
                                                a-- ;
                                            } 

                                          printf("Factorial is %d",f);
                                          break; 

                                          case 2:

                                          printf("Enter The Number\n");
                                          scanf("%d", &a);

                                          if (a % 2 == 0)
                                             {
                                                 printf("Entered Number Is A Even Number");
                                             }

                                          else
                                            {
                                               printf("Entered Number Is Odd");
                                            }

                                          break;

                                          case 3:

                                         printf("Enter The Radius Of Circle\n");
                                         scanf("%d", &a);

                                         area = 3.14 * a * a;

                                         printf("Area Of Circle Is %d", area);

                                         break;

                                         case 4:

                                         printf("Enter a number");
                                         scanf("%d",&a);

                                         f=1;
                                     
                                         while(a)
                                            {
                                                f = f + a;
                                                a--;
                                            } 

                                         printf("Sum is %d",f);

                                         break;
                                      
                                         case 5:
                                         
                                         exit(0);
                                         break;

                                         default:
                                         printf("Invalid Choice");

                                    }

                            return 0;

                     }