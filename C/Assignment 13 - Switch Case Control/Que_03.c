
        /* Que -  Write a program which takes the day number of a week and displays a unique greeting
                  message for the day. */

         #include<stdio.h>
         int main()

                      {   
                           int m ;

                           printf("Enter A Number Of Day\n");
                           scanf("%d",&m);

                           switch(m)

                                {

                                    case 1:
                                    printf("Welcome! It's Monday,Come On Let's Start New And Fresh");
                                    break;

                                    case 2:
                                    printf("Welcome! It's Tuesday,Let's Make It Happen");
                                    break;

                                    case 3:
                                    printf("Welcome! It's Wednesday,Come On Man! Don't Give Up ");
                                    break;

                                    case 4:
                                    printf("Welcome! It's Thursday, Don't Loose Your Consistency");
                                    break;

                                    case 5:
                                    printf("Welcome! It's Friday ,Try Till End ");
                                    break;

                                    case 6:
                                    printf("Welcome! It's Saturday,Let's Make It Happen");
                                    break;

                                    case 7:
                                    printf("Welcome! It's Sunday,Chill And Enjoyyyy");
                                    break;
   
                                    default:
                                    printf("No Such Day Exist");


                                }

                             return 0;
                        } 