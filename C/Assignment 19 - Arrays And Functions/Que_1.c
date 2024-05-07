
             /* Que - Write a function to find the greatest number from the given array 
                       of any size. (TSRS) */


              #include<stdio.h>
              int main()
                 {
                      int a[10],i,max;

                     printf("Enter The Numbers\n");
                     for(i=1;i<=9;i++)
                     scanf("%d",&a[i]);

                     max=a[i];

                     for(i=1;i<=9;i++)
                     if(a[i]>max)
                          {
                              max=a[i];
                          }

                     printf("Greatest Number Is %d",max);

                     return 0;
    
                  }