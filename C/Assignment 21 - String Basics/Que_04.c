
              /* Que - Write a program to count spaces in a given string */

             #include<stdio.h>
             #include<string.h>

             int main()

                     {
                          char A[50];

                          int i,j=0;

                          printf("Enter Your Name\n");
                          fgets(A,50,stdin);

                          A[strlen(A)-1]='\0';

                          for(i=0;A[i];i++)
                          if(A[i] == ' ')
                              {
                                  j++;
                              }

                          printf("The Name %s Has %d Number Of Space Bars\n",A,j);

                          return 0;

                     }
                
                
                
                 
                  
                      