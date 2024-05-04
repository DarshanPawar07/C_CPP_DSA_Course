
        /* Que - Write a menu driven program with the following options.
              1. Check whether a given set of three numbers are lengths of an isosceles triangle or not
              2. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not
              3. Check whether a given set of three numbers are equilateral triangle or not
              4. Exit  */

        #include<stdio.h>
        int main()
                      {   
                           int c , l , b , h ;

                           
                           printf("\nPress 1.For Isoscales Triangle");
                           printf("\nPress 2.For Equilateral Triangle");
                           printf("\nPress 3.For Right Angle Triangle");
                           printf("\nPress 4.For Exit");
                           printf("\nPress 5.None Of The Above(Default)");

                           printf("\nEnter Your Choice\n");
                           scanf("%d",&c);

                           switch(c)
                           
                                    {

                                       case 1:

                                       printf("\nEnter The Legnths Of Sides Of Triangle (L B H)\n");
                                       scanf("%d %d %d" , &l , &b , &h );

                                       if(l == b || l == h || b == h)
                                             {
                                              printf("It's A Isoscales Triangle");
                                             }

                                       else
                                             {
                                              printf("It's Not A Isoscales Triangle");
                                             }

                                       break;

                                       case 2:

                                       printf("\nEnter The Legnths Of Sides Of Triangle (L B H)\n");
                                       scanf("%d %d %d", &l , &b , &h );
                              
                                       if( l == b ==h )
                                            {
                                              printf("It's A Equilateral Triangle" );
                                            }
                                       else
                                           {
                                            printf("It's Not A Equilateral Triangle" );
                                           }

                                       break;
     
                                       case 3:

                                       printf("\nEnter The Legnths Of Sides Of Triangle (L B H)\n");
                                       scanf("%d %d %d" , &l , &b , &h );

                                       if( h * h == l * b)
                                            {
                                              printf("It's A Right Angle  Triangle" );
                                            }

                                       else
                                           {
                                              printf("It's Not A Right Angle  Triangle" );
                                           }

                                       break;

                                       case 4:
                                       printf("\nExit\n");
                                       break;
     
                                       default:
                                       printf("\nNo Such Choice Exist\n");

                                    }

                           return 0; 

                       }