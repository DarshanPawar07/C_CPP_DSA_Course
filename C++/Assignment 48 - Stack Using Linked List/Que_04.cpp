       /* Que 4 - In question 1, define a method to peek top element of the stack.*/

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
                   int peek();
          };
        
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