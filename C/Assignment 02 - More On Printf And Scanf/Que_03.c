


      #include<stdio.h>
      int main()
      
                 {
                       int principle , rate , time ;

                       printf("Enter the principle value\n");
                       scanf(" %d ", &principle);

                       printf("Enter the rate\n");
                       scanf(" %d ",&rate);

                       printf("Enter the time period\n");
                       scanf(" %d ", &time);

                       printf("The final amount will be %d\n",( principle * rate * time ) / 100);

                       return 0;

                  }
