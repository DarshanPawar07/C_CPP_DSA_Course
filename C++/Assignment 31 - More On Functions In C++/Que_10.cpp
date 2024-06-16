
       /* Que - Define a function to merge two sorted arrays of same size */

 
        #include<iostream>
        using namespace std;



       int merge(int a[],int b[],int c[],int x)

            {     int i,j,k;

                 for(i= 0 , j = 0 , k = 0 ; i< x && j < x ; k++)
                     {
                        if(a[i]<b[j])
                          {
                            c[k]=a[i];
                            i++;
                          }
                        else
                           {
                              c[k]=b[j];
                              j++;
                           }
                     }

                  while(i<x)
                       {
                            c[k]=a[i];
                            i++;
                            k++;
                       }
                  while(j<x)
                       {
                            c[k]=b[j];
                            j++;
                            k++;
                       }

            }

            int main()
                     {  
                          int a[]={2,5,7,8},b[]={3,4,5,6}, c[8];
                
                          merge(a,b,c,4);
                          for(int i=0;i<=5;i++)
                             cout<<c[i]<<" ";
                             cout<<endl;
                           
                          return 0;
                     }