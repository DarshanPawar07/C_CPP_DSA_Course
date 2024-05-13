
              /* Que - Write a function to swap values of two int variables (TSRN) */

              #include<stdio.h>
              #include<string.h>
              
              
              
              int swap(int *a,int *b)
              {
                 int c;
                 c = *a ;
                 *a = *b;
                 *b = c;

                
                 printf("The Value Of a Is %c",*a);
                 printf("\n");
                 printf("The Value Of b Is %c",*b);

                
                
              }

              int main()
              {
                  int *a=3;
                  int *b=4;
                
                //printf("Enter Two Numbers\n");
                //scanf("%d %d",&a,&b);
                swap(*a,*b);

              }