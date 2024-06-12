
       /* Que - Define a function to calculate HCF of two numbers.  */

 
        #include<iostream>
        using namespace std;



        int HCF(int a,int b)

            { 
                int i;
                for(i=a<b?a:b;i>=1;i++)
                   {
                       if(a%i==0 && b%i==0)
                           {
                               cout<<i;
                           }
                   }
                
            }






            
       
       
                
      