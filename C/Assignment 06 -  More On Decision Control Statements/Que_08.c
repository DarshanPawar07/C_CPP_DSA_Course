  
       /* Que - Write a program to check whether a given character is an alphabet (uppercase),
                 an alphabet (lower case), a digit or a special character */

        #include<stdio.h>
        int main()

                   {
                    
                         char a ;

                         printf("Enter A Number\n");
                         scanf("%c",&a);
              
                         if( a >= 65 && a <= 90 )
                                                  {
                                                      printf("%c(%d) Is Uppercase Alphabet",a,a);
                                                  }

                          else if ( a >= 97 && a <= 122 )
                                                           {
                                                              printf("%c(%d) Is Lowercase Number",a,a);
                                                           }

                          else
                               {
                                      printf("%c(%d) Is Special Character",a,a);
                               }
              
                          return 0;

                   }

          
           /*
            Code For Finding ASCII Code Of Any Key - 
           
              char a;
              printf("Enter A Number\n");
              scanf("%c",&a);
              printf("%d",a);
              
              return 0;
              */