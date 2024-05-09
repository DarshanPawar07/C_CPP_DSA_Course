
              /* Que - Write a program to convert a given string into lowercase  */

              #include<stdio.h>
              #include<string.h>

              int main()
              {
                 char A[50],B[50];
                int i;

                printf("Enter The String\n");
                fgets(A,50,stdin);
                 
                 A[strlen(A)-1]='\0';

                for(i=0;A[i];i++)

                      if(A[i] >= 'A' && A[i] <= 'Z')
                             B[i] = A[i] + 32;

                      else if( A[i] >= 'a' && A[i] <= 'z')
                             B[i] = A[i];
                    
                    printf("The Updated String Is %s ",B);

                      return 0;

  

      
              }
             