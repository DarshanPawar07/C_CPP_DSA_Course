
              /* Que -Write a function to count words in a given string */

              #include<stdio.h>
              #include<string.h>
              char* trim(char a[])
              {  
                
                int i=0,j,k,count=0,l;
                l=strlen(a);

                for(k=strlen(a)-1 ; a[k]==' '; k--) //to count spaces on end of string 
                   count++;
                 while(a[i]==' ') // to count spaces on start of the string
                 i++;
                 for(j=0;a[i+j];j++)
                   a[j]=a[j+i];
                
                 a[l-count-i]='\0';
                 printf("%s",a);
                 printf("\n");
                   return a;

              }

              

              int count_words( char a[])
              {

                   int i,count=0;
                
                    for(i=0;a[i];i++)
                       
                
                          //if((a[i]>='A' && a[i]<='Z') || (a[i]>='a' && a[i]<='z') )
                          if(a[i]!=' ')
                        {  
                          if(a[i]==a[i+1])
                          continue;
                          else
                          count++;
                        }

                           else 
                           count=count;

                         printf("Words In The Word '%s' Are = %d",a,count);
                
                     return count;
                    
            
              }


              int main()
              { 
              
                char a[]= "  darshan dipak pawar   ";

                trim(a);
                count_words(a);
                
              

                return 0;

            }