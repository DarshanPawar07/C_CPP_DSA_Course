
             /* Que -Write a function to make acronym name from a given name. 
                      For example, "Ramesh Chand Tiwari" becomes "RC Tiwari", 
                      "Bhavesh Gupta" becomes "B Gupta */

              #include<stdio.h>
              #include<string.h>
              
             char acroynm(char a[])
              {
                 int i,j,k,d,e,note;
                 for(i=0;a[i];i++)
                 {
                    d=i;
                 }
                   for(i=0;a[i]==' ';i++)
                        e++;
                     
                     a[1]=a[1+e];

                     for(i=strlen(a);a[i]!=' ';i++)
                        note++;
                     
                     for(i=4;a[i];i++)
                       for(j=1;j<strlen(a);j++)
                        a[i]=a[j+(strlen(a)-note)];
                        
                        printf("%s",a);
              
              
              }

              int main()
              {   
                  char a[35]= "Darshan Dipak Pawar";
                  acroynm(a);
                  return 0;
                
                  
                 

              }
