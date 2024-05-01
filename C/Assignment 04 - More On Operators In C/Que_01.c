
       
        /*  Que  - Write A Program To Input A Three Digit Number And Display The Sum Of Digits  */
  
        #include<stdio.h>
        int main()

                  {

                      int a , s ;

                      printf(" Enter A Number\n ");
                      scanf(" %d ", &a);

                      s = (a / 100) + (a / 10 % 10) + (a % 10);

                      printf("The Sum  Is %d ", s);

                      return 0;
  
                  }