 

       /* Que - Write a function to rotate an array by n position in d direction. 
                The d is an indicative value for left or right. 
                (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 */

                
                #include<stdio.h>

                void ro(int A[],int size,int d,int n)
                


                {  
                  int temp,i;
                  if(d==1)
                  {
                     while(n)
                         temp==A[size-1];
                     for(i<=size-2;i=1;i--)
                     {
                         A[i]==A[i-1];
                     }
                     A[0]==temp;
                     n--;
                 }

                 else
                 {
                     while(n)
                        temp==A[0];
                        for(i=1;i<=size-1;i++)
                        {
                            A[i]==A[i+1];
                        }
                        A[0]==temp;
                        n--;
                 }
                 return 0 ;

                }