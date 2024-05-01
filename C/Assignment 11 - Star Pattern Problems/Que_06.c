
        /* Que Write A Program To Print The Pattern    1
                                                       21
                                                       321
                                                       4321
        */

        #include <stdio.h>
        int main()
             
                    {

                         int i , j , k ;

                         for ( i = 1 ; i <= 4 ; i++ )

                                {

                                   k = i;

                                   for ( j = 1 ; j <= 5 ; j++ )

                                         {

                                              if ( j <= i )

                                                {
                                                   printf("%d", k);
                                                   k--;
                                                }

                                              else
                                                {
                                                   printf(" ");
                                                } 
                                         }

                                   printf("\n");

                                }

                         printf("\n");

                         return 0;

                    }
