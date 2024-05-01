
         
      /* Que - Write a program to check whether a given number is positive , negative or zero */

      #include<stdio.h>
      int main()

                   {

                         int a ;
                  
                         printf("Enter The Number\n") ;
                         scanf(" %d ",&a) ;

                         if ( a > 0 )
                                      {
                                          printf("Entered Number Is Positive\n");
                                      }

                         else if ( a < 0 )
                                           {
                                               printf("Entered Number Is Negative\n");
                                           }

                         else 
                             {
                                printf("Entered Number Is Zero\n");
                             }
   

                         return 0;

                   }    