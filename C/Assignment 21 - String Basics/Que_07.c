 
            /* Que - Write a program to reverse a string */
           
                
            #include<stdio.h>
            #include<string.h>
            int main()
            {   
                char A[50],B[50],c;
                int i,j,l;
                printf("Enter The String\n");
                fgets(A,50,stdin);

               A[strlen(A)-1]='\0';
               l = strlen(A);

                
                  for(i=0;i<l/2;i++)
                  {
                       c = A[i];
                       A[i]=A[l-1-i];
                       A[l-1-i] = c;
                  }
                    printf("The Reverse Is %s",A);
                    
                return 0;
            }