
             /* Que - Write a function to reverse a string word wise. (For example if the given string is
              "Mysirg Education Services" then the resulting string should be "Services Education Mysirg") */

              #include<stdio.h>
              #include<string.h>
              char* reverse_string(char a[])
              {
                   int i,j,k,count=0;
                   char m;
                   for(i=strlen(a)-1;a[i]!=' ';i--)
                   count++;

                 
                   //for(j=0;j<count;j++)
                     
                      for(i=0;i<=strlen(a)-1;i++)
                   
                      m=a[strlen(a)-1];
                      a[i+1]=a[i];
                      a[0]=m;
                    
                   
                  return a;

              }


              int main()
              {   
                  char a[]="mysirg private limited";
                  printf("%s",a);
                  printf("\n");
                  reverse_string(a);
                   printf("%s",a);

              }