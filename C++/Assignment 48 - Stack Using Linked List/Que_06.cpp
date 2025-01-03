       /* Que 6 - In question 1, define a destructor to deallocates the memory. */

       #include<iostream>
       #include<stdio.h>
       using namespace std;

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
                    ~Stack();
                    void pop();
          };
        
        Stack::~Stack()
          {
              while(top!=NULL)
                 {
                     pop();
                 }
          }

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