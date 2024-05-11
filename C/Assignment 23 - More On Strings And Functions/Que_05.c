
             /* Que - Write a function to do case insensitive comparison of two strings */

              #include<stdio.h>
              #include<string.h>
              int main()
              {   
                  char A[10];
            
                 

              }

              int case_comparison(char A[],char B[])

              {
                  int i,k;
                  for(i=0;A[i];i++)
                  if(A[i]>='z'&&A[i]<='z')
                     A[i]=A[i]-32;

                  for(i=0;B[i];i++)
                  if(B[i]>='a' && B[i]<='z')
                     B[i]=B[i]-32;

                for(i=0;A[i]&&B[i];i++)

                 if(A[i]!=B[i]);
                 {
                    printf("Both Strings Are Not Same\n");
                    return 0;
                 
                 }


                 else if (A[i]==B[i])
                 {
                     printf("Both Strings Are Not Same\n");
                     return 1;
                 }
                 
                 
                 else 
                 {
                    printf("Both Strings Are Not Same\n");
                    return 0;
                 }
                 
                  
     


              }