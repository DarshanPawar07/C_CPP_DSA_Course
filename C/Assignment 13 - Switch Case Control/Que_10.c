
        /* Que- Write a menu driven program with the following options:
                1. Calculate LCM of two numbers
                2. Calculate sum of the digits of a number
                3. Volume of a cuboid
                4. Check whether a given number is Prime or not
                5. Exit */

        #include <stdio.h>
        int main()

                    {

                           int c , a , b , i , v ;
                           float m , n ;

                           printf("\n1.Calculate LCM Of Two Numbers");
                           printf("\n2.Calculate Sum Of Digits Of A Number");
                           printf("\n3.Volume Of A Cubiod");
                           printf("\n4.Check Whether A Given Number Is Prime Or Not");
                           printf("\n5.Exit\n");

                           printf("Enter Your Choice\n");
                           scanf("%d", &c);

                           switch (c)

                                  {
                                       case 1:

                                       printf("Enter Two Numbers\n");
                                       scanf("%d %d", &a , &b);

                                       for (i = a > b ? a : b ; i <= a * b ; i++)

                                            {

                                                if (i % a == 0 && i % b == 0)
                                                     {
                                                          printf("LCM is %d", i);
                                                          break;
                                                     }

                                            }

                                       break;

                                       case 2:

                                       printf("Enter a number");
                                       scanf("%d",&a);

                                       b=0;

                                       while(a)

                                            {
                                               b = b + a % 10 ;
                                               a = a / 10 ;
                                            }

                                       printf("Sum is %d",b);

                                       break;


                                       case 3:

                                       printf("Enter The Length , Breadth And Height Of Cuboid\n");
                                       scanf("%d %d %d", &a, &b, &c);

                                       v = a * b * c;

                                       printf("Volume Of Cuboid Is %d", v);

                                       break;

                                       case 4:

                                       printf("Enter a number");
                                       scanf("%d",&a);

                                       for( b = 2 ; b < a ; b++ )

                                       if(a % b == 0)
                                       break;
 
                                       if(a == b)
                                       printf("%d is Prime",a);

                                       else    
                                       printf("%d is not a Prime",a);

                                       break;

                                       case 5:
                                       exit(0);

                                       default:
                                       printf("Invalid Choice");

                                       break;

                                    } 

                            return 0;

                    }