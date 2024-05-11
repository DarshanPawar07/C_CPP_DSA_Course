
             /* Que -Write a function to make first character of each word of the string capital. */

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
                   return a;

              }
              char* capital_char(char a[])
              {       
                     int i,count=0,note,j;
                     for(i=0;a[i];i++)
                      if(a[i]==' ')
                        note++;

                     if(a[0]>='a' && a[0]<='z')
                     a[0]=a[0]-32;
                
                    for(j=0;j<=note;j++) 
                    {for(i=0;a[i]!=' ';i++)
                     count++;
                     if(a[count+1]>='a' && a[count+1]<='z')
                       a[count+1]=a[count+1]-32;
                     else
                       a[count]=a[count];}

                    
                   
                     
                     return a;

            }

            

              int main()
              {
                
                 //char a[] = "mysirg private limited  " ;
                 char a[]="darshan dipak  daguji  pawar";

                

                  trim(a);
                   capital_char(a);
                  printf("%s",a);

                return 0;  

                 }

/* time taken -  1st half - 1.5hr
                  2nd half - 1.45 hr            */
                 