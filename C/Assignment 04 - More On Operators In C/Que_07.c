
        /* Que -  Write A Program To Take A Three Digit Number From User And Rotate Its
                   Digits By One Position Towards The Right  */


        #include <stdio.h>
         int main()

                    { 

                        int a , b ;

                        printf(" Enter A Number\n" ) ;
                        scanf(" %d ", &a) ;

                        b = (a % 10) * 100 + (a / 10);

                        printf("%d", b);

                        return 0;

                    }