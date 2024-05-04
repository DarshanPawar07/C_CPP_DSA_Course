
        /* Que - Write a program to check whether a given character is uppercase alphabet or 
                 lower case alphabet or some other special character, using switch case statement  */ 

        #include <stdio.h>
        int main()
                     {
                         char m;

                         printf("Enter Alphabet\n");
                         scanf("%c", &m);

                         switch (m)

                            {
                              
                                   case 'a'...'z':
                                   printf("Lowercase Alphabet");
                                   break;
                              
                                   case 'A'...'Z':
                                   printf("Uppercase Alphabet");
                                   break;

                                   default:
                                   printf("Special Character\n");
                                   

                            }

                         return 0;

                     }