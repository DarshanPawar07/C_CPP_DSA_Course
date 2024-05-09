
             /* Que - Write a program to count the occurrence of a given character in 
                      a given string */


            #include<stdio.h>
            #include<string.h>

            int main()

                      {
                          char A[50],ch;

                          int i,count=0,j=0;

                          printf("Enter Your Name\n");
                          fgets(A,50,stdin);

                          A[strlen(A)-1]='\0';

                          printf("Enter A Character\n");
                          scanf("%c",&ch);

                          for(i=0;A[i];i++)
                               if(ch==A[i])
                                    {
                                        count++;
                                    }

                          printf("The Character %c Repeats %d Times In %s",ch,count,A);

                        
                          return 0;
            }
            