
       /* Que - Define a function to rotate an array by n positions in the d direction. Implement 
                position and direction using default arguments. Argument d can be -1 or 1 denoting 
                left or right direction. Argument n should be the last argument with default value 1*/

 
        #include<iostream>
        using namespace std;



        void rotate( char a[],int n,int d)

            { 
                 int i,c;

                 if(d==1)
                     {
                        for(i=0;i<=n-1;i++)
                            {
                                c=a[n-1];
                                a[i+1]=a[i];
                                a[0]=c;

                            }
                     }

                else
                      {
                         for(i=0;i<=n-1;i++)

                                 { 
                                    c=a[0];
                                    a[i]=a[i+1];
                                    a[n-1]=c;

                                 }
                      }
            }

        






            
       
       
                
      