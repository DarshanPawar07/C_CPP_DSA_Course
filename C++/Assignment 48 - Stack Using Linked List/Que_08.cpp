       /* Que 8 - In question 1, define a copy assignment operator to implement deep copy.*/

       #include<iostream>
       #include<stdio.h>
       using namespace std;
       #define empty_stack 1

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
                   Stack& operator=(Stack& s1);
                   void reverse();
                   void pop();
                   void push(int);
                   int peek()  ;

          };
        
        Stack& Stack::operator=(Stack& s1)
            {
                  while(top!=NULL)
                    {
                         pop();
                    }
                  
                  node*t;
                  s1.reverse();
                  t=s1.top;

                  while(t!=NULL)
                     {
                          push(t->item);
                          t=t->next;
                     }
                  
                  s1.reverse();

                  return *this;
            }

        void Stack::reverse()
           {
                Stack s1;
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
 