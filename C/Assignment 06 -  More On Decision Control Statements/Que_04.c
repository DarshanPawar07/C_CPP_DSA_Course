
           /* Que - Write a program to check whether a given alphabet is in
                     uppercase or lowercase*/

            #include<stdio.h>
            int main()

                      {
    
                              char a ;

                              printf("Enter The Alphabet\n");
                              scanf(" %c ",&a);

                              if( a >= 65 && a <= 90 )
                                                {
                                                     printf("%c(%d) Is An Uppercase",a,a);
                                                }

                              else if ( a >= 97 && a <= 122 )
                                                      {
                                                          printf("%c(%d) Is An Lowercase",a,a);
                                                      }

                             else 
                                  {
                                     printf("Enter Valid Alphabet");
                                  }


                             return 0;

                      }

