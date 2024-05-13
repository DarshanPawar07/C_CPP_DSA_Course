
              /* Que - Write a function to convert a given string into lowercase   */

              #include<stdio.h>
              char a[25];

              char convert_lowercase(char a[])
              {      
                    int i;
                    for(i=0;a[i];i++)
                    if(a[i]>='A' && a[i]<='Z' )
                     a[i]=a[i]+32;

                     else
                     a[i]=a[i];
                     printf("%s",a);
                   
                   return a;



              }

              int main(a)
              {
                  printf("Enter A String\n");
                  fgets(a,25,stdin);
                   convert_uppercase(a);
                  printf("%s",a);


              }