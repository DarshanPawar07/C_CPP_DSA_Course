
        /* Que -   Write a program which takes the month number as an input and display number 
                   of days in that month  */

        #include<stdio.h>
        int main()

                     {

                           int m ;

                           printf("Enter The Month\n");
                           scanf("%d",&m);

                           switch(m)

                               {
                                   case 1:
                                   printf("1st month has 31 days");
                                   break;

                                   case 2:
                                   printf("2nd month has 29 or 30 days");
                                   break;

                                   case 3:
                                   printf("3rd month has 31 days");
                                   break;

                                   case 4:
                                   printf("4th month has 30 days");
                                   break;

                                   case 5:
                                   printf("5th month has 31 days");
                                   break;

                                   case 6:
                                   printf("6th month has 30 days");
                                   break;

                                   case 7:
                                   printf("7th month has 31 days");
                                   break;

                                   case 8:
                                   printf("8th month has 31 days");
                                   break;

                                   case 9:
                                   printf("9th month has 30 days");
                                   break;

                                   case 10:
                                   printf("10th month has 31 days");
                                   break;

                                   case 11:
                                   printf("11th month has 30 days");
                                   break;

                                   case 12:
                                   printf("12th month has 31 days");
                                   break;

                                   default:
                                   printf("No Such Month Exist");

                               }

                            return 0;

                     }