
        
         /*  Que - Write A Program To Check Whether A Given Year Is Leap Year Or Not  */

         #include <stdio.h>
         int main()

                   {
                         int year ;

                         printf("Enter the Year\n") ;
                         scanf(" %d ", &year ) ;

                         if ( year % 4 == 0 | year % 400 == 0 )
                                                        {
                                                            printf("The Year You Have Entered Is Leap Year");
                                                        }

                         else
                               {
                                    printf("The Year You Have Entered Is Not Leap Year");
                               }
                               

                         return 0;


                    }