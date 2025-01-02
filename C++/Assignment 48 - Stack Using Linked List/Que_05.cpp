       /* Que 5 - In question 1, define a method to pop the top element of the stack. */

       #include<iostream>
       #include<stdio.h>
       using namespace std;
       #define empty_stack;

       struct node 
         {
              int item;
              node *next;
               node *prev;
         };
        
        class Stack
          {
                private:
                     node *top;
                
                public:
                     void pop();
          };
        
        void Stack::pop()    // delete the top / first element
          {  
              if(top==NULL)
                {  
                    cout<<"Stack Underflow";
                   // throw empty_stack;
                }
                
            else
              {
                     node *r;
                     r=top;
                     top=r->next;
                     delete r;
              }
              
          }