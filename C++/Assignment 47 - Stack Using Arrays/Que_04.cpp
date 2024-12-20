
      /* Que 4 - In question 1, define a method to peek top element of the stack.*/
      
      #include<iostream>
      #include<stdio.h>
      #define STACK_IS_EMPTY 1
      using namespace std;

      class Stack
        {   
            private:
               int capacity;
               int top;
               int *ptr;

            public:
                 int peek();
                  bool is_empty();
        };

       int Stack::peek()
          {   
              if(is_empty())
                 { 
                    throw STACK_IS_EMPTY;
                 }
               else
                {
                     return ptr[top];
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