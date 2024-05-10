
              /* Que - Write a function to check whether a given string is palindrome or not */

              #include<stdio.h>
              #include<string.h>
              void f1(char a[],int l);
              int main()
              {

                 char a[10];
                 int l;
                printf("Enter The String\n");
                fgets(a,10,stdin);
                a[strlen(a)]='\0';
                l=strlen(a);

                f1(a,l);
                return 0;
              }

              
              
              void f1(char a[],int l)
              {  

                 int i,j;
                

                 for(i=0;i<=l/2;i++)
                  if(a[0+i]==a[l-i])
                     j++;

                   if(j++ == l/2)
                   {
                    printf("%s Is A Palindrome",a);
                   }
                   else
                   {
                    printf("%s Is Not A Palindrome",a);
                   }
                  return 0;

              }