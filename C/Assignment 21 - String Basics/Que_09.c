
              /* Que - Write a program in C to copy one string to another char array */

              #include<stdio.h>
              #include<string.h>

              int main()
              {
                  char A[50],B[50];
                  int i;

                  printf("Enter Your Name\n");
                  fgets(A,50,stdin);
                  A[strlen(A)-1]='\0';
                   
                  for(i=0;i<=A[i];i++)
                  {
                    B[i]=A[i];
                  }
                  B[i]='\0';

                  printf("%s\n",B);

                  return 0;



              }