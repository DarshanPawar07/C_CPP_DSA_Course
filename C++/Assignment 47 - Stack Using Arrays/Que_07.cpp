
      /* Que 7 - In question 1, define a method to check stack overflow */
      
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
               bool is_overflow();
                 
        };
      
       bool Stack::is_overflow()   // poora bhara hua hai mtlb overflow
          {
              if(capacity==top+1)
                {
                   return true;
                }
              
              else
                {
                  return false;
                }

          }