
       /*  Que - Write A Program Which Takes The Cost Price And Selling Price Of A Product From The User.
                  Now Calculate Profit Or Loss Percentage  */

        #include <stdio.h>
        int main()

            {

               int cp, sp, num ,Total;

               printf("Enter Cost Price And Selling Price Of The Product\n");
               scanf("%d %d", &cp, &sp);

               printf("Enter Number of Clocks\n");
               scanf("%d", &num);

               Total = (num * sp)  - (num * cp);

               if ( Total < 0)

               {
                     printf("You Are In Loss & Your Loss percentage Is %d percent",
                                 ( (cp*num - sp*num) / sp)* 100);
               }

               if (Total > 0)

               {
                      printf("You Are In profit & Your profit percentage Is %d percent",
                                ( (sp*num - cp*num) / cp ) * 100);
               }

               return 0;
 
            }