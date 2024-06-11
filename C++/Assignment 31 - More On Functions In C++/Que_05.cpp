
       /* Que -5. Define a function to print all the prime factors of a given number.
                   [ for example num=36, prime factors are 2, 3 ]    */

 
        #include<iostream>
        using namespace std;



        void primefactor(int n)

            {  
                 int i;
                for(i=2;i<=n;i=nextprime(i))
                      {
                            if(n%i==0)
                                 cout<<i;
                      }
                   

            }

            int nextprime(int n)
                  {      
                   
                         while(!prime(n=n+1))
                         return n;
                   } 
            
            bool prime(int n)
                   {     
                           int i;

                            for(i=2;i<=n;i++)
                            if(n%i==0)
                               {
                                   return false;
                               }
                            
                            else
                                return true;
                              

                   }






            
       
       
                
      