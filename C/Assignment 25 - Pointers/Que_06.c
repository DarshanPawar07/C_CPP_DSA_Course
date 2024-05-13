
              /* Que - Write a function to sort an array of int type values. [ void sort(int *ptr,int size): ] */

                #include<stdio.h>
                char a[25],b[25];
            

                char string_sort_int(/*char *a[],int strtind,int endind*/)
                {   
                    int i;
                    for(i=0;a[i];i++)
                    if(a[i]>=1 && a[i]<=9)
                    b[i]=a[i];
                    a[i]=0;
                    printf("%s",b);
                    return 0;
                }

                int main()
                {   
                    
                    char a[]="ausi1235gfu89";
                    
                    string_sort_int();



                   return 0;
                }