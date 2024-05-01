

        /*  Que - Write A Program To Find The Greatest Among Three Given Numbers.Print Number
                   Once If The Greatest Number Appears Two Or Three Times   */

         #include <stdio.h>
         int main()

                   {

                         int a , b , c ;

                         printf("Enter Three Numbers\n") ;
                         scanf("%d %d %d", &a, &b, &c) ;

                         printf("The Greatest Number Amongst Them Is %d", a > b ? a > c ? a : c : b > c ? b: c ) ;
                                                                                   
                         printf("\n") ;

                         return 0;


                    }