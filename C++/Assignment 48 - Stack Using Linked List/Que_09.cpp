       /* Que 9 - Define a method to reverse a stack. */

       #include<iostream>
       #include<stdio.h>
       using namespace std;
       #define empty_stack 1;

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
                     void reverse();
                     void pop();
                     void push(int);
                      int peek()  ;
                     
                   
          };
        
         void Stack::reverse()
           {
                Stack s1;
                s1.top=top;
                
                while(s1.top!=NULL)
                  {
                      s1.push(peek());
                      pop();

                  }
                
                top=s1.top;
                s1.top=NULL;
                
            }

       void Stack::pop()    // delete the top / first element
          {
              node *r;
              r=top;
              top=r->next;
              delete r;
          }

      void Stack::push(int data)    // insertion at first
           {
                node *n;
                n=new node;
                n->item=data;
                n->next=top;
                top=n;
           }

          int Stack::peek()     //
             {     
                  if(top==NULL)
                    {
                        throw empty_stack;
                    }
                   
                   else
                   {
                       return top->item;
                   }
                   
             } 