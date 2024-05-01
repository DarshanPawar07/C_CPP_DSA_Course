
        /* Que - Write a program to print all Prime numbers under 100  */

        #include<stdio.h>
        int main()

                    {
                         int i ;

                         for( i = 1 ; i <= 97 ; i++ )

                                            {

                                                if( i % i == 0)

                                                          {
                                                              if ( i == i)
                                                                   {
                                                                     printf("%d\n",i);
                                                                   }
                                                          }
                                            }

                         return 0 ;


                    }