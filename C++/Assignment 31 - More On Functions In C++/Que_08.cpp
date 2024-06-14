
       /* Que - Define a function to print a substring from startIndex(inclusive) to endIndex(exclusive). 
                Define function in such a way that if second argument is not provided, string will
                print till the last possible index.*/

 
        #include<iostream>
        using namespace std;
        
        void substring(int arg1 ,int arg2 = -1 , char str[]);



        void substring(int arg1 ,int arg2 , char str[])

            { 
                int i;

                for(i = arg1 ; i < arg2 ; i++)
                    {
                        cout<<str[i];
                    }

            }






            
       
       
                
      