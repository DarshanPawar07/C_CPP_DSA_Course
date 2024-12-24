
      /* Que 8 - In question 1, define a method to check stack underflow */
      
      #include<iostream>
      #include<stdio.h>
      using namespace std;

      class Stack
        {   
            private:
               int capacity;
               int top;
               int *ptr;

            public:
               bool is_underflow();
                 
        };
      
        bool Stack::is_underflow()      // poora empty hai mtlb underflow
            { 
                 if(top==-1)
                {
                   return true;
                }
              
              else
                {
                  return false;
                }
            }