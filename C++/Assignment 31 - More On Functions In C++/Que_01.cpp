
       /* Que - Define a function to sort an array of integers in ascending or descending order depending 
                 on bool type argument (true for ascending and false for descending). Use default 
                 argument to implement it.*/

 
        #include<iostream>
        using namespace std;



        void sort(int a[],int n,bool ascending = true)

            { 
                 int i , j , k ;

                if(ascending)
                     {

                           for(i=0;i<=n-1;i++)

                               { 
                                    for(j=0;j<=n-1-i;j++)
                                          {
                                             if(a[i]>a[i+1])
                                                 {
                                                     k=a[i];
                                                     a[i]=a[i+1];
                                                     a[i+1]=k;
                                                 }

                                          }
                               }
                            



                     }
                
                else

                   {

                       for(i=0;i<=n-1;i++)

                            {
                               for(j=0;j<=n-1-i;j++)

                                    {
                                       
                                        if(a[i+1]>a[i])

                                             {
                                                  k=a[i];
                                                  a[i]=a[i+1];
                                                  a[i+1]=k;

                                            }
                                    }
                                 
                            }
                    }

            }






            
       
       
                
      