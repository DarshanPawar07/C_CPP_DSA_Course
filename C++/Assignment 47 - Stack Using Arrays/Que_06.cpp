
      /* Que 6 - In question 1, define a destructor to deallocates the memory. */
      
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
                ~Stack();
                 
        };
      
        Stack::~Stack()
          {   
             if(ptr!=NULL)
              {
                delete []ptr;
              }
          }