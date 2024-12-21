
      /* Que 5 - In question 1, define a method to pop the top element of the stack. */
      
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
              void pop();
               bool is_empty();
                 
        };
       
      void Stack::pop()
          {
               if(is_empty())
                {
                   cout<<"Stack Underflow";
                }

                else
                   {
                        top--; // to dlete or pop you have to only decrement top
                   }
          }

          bool Stack::is_empty()      // poora empty hai mtlb underflow
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