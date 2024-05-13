
              /* Que - Write a function to extract a substring from a given string with 
                       specified start index (inclusive) and end index (exclusive), and
                        store the extracted string in another char array 
                        [ void extract_string(char *str, int start_index, int end_index, char *result); ]   */

                #include<stdio.h>
                char a[25],b[25];
                int strtind ,endind,s;

                char** string_extract(char *a[],int strtind,int endind)
                {   
                    int i;
                    for(i=strtind;i<=endind;i++)
                    b[i]=a[i];
                    printf("%s",b);
                    return 0;
                }

                int main()
                {   
                    
                    char a[]="darshan pawar";
                    strtind=3;
                    endind=7;
                    string_extract(*a,strtind,endind);



                    /*printf("Enter A String\n");
                    fgets(a,25,stdin);
                    printf("Enter The Starting Index Number\n");
                    scanf("%d",strtind);
                    printf("Enter The End Index Number\n");
                    scanf("%d",endind);*/

                   // return a,strtind,endind;
                   return 0;
                }