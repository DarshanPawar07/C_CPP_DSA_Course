
      
      /*  Que - . Write a program to calculate simple interest  */

      #include<stdio.h>
      int main()

                 {
                       int principle , rate , time ;

                       float interest ;

                       printf("Enter The principle , rate And time \n");

                       scanf("%d %d %d", &principle , &rate , &time );

                       interest = ( principle * rate * time ) / 100.0;

                       printf("The final amount will be %f\n",interest);

                       return 0;

                }
