
        /* Que -  Write a program to find the second smallest number in an array. Take array 
                  values from the user */


        #include<stdio.h>
        int main()

                    {
                          int a[10] , i , smallest , second_smallest ;

                          printf("Enter The Numbers");

                          for( i = 0 ; i <= 9 ; i++ )

                                {
                                    scanf("%d", &a[i]) ;
                                }

                          a[0] ;

                          if( a[0] < a[1] )

                               {
                                   smallest = a[0] ;
                                   second_smallest = a[1] ;

                               }

                          else
                                {
                                   smallest = a[1] ;
                                   second_smallest = a[0] ;

                                }

                          for( i = 2 ; i <= 9 ; i++)

                               {
                                     if( a[i] < smallest )

                                         {
                                               second_smallest = smallest ;
                                               smallest = a[i] ;
                                         }

                                     else

                                         {
                                               if ( a[i] > second_smallest )

                                                   {
                                                      second_smallest = a[i] ;
                                                   }
                                         }
                        
                                }

                          printf("Second Smallest Number Is %d",second_smallest);

                          return 0;

                    } 