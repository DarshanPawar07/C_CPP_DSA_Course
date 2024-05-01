

        /* Que - Write a program to check whether a given number is a Prime number or not */

        #include <stdio.h>
        int main()
        
                    {

                          int i, x;

                          printf("Enter a Number\n");
                          scanf("%d", &x);

                          for ( i=2 ; i<=x-1 ; i++)
                                                    { 
                                                        if ( x % i == 0)
                                                             break;
                                                    }

                          if (i == x)
                                      {
                                          printf("%d Is A Prime Number", x); 
                                      }   

                          else
                               {
                                     printf("%d Is Not A Prime Number", x);
                               }
                         

                          return 0;

                    }