
       /* Que 9 - In question 1, define a method to delete a specific node. */

       #include<iostream>
       #include<stdio.h>
       using namespace std;
       

       struct node
       {
             int item;
             node *next;
       };

       class SLL
         {    
            private:
              node *start;
            public:
              void delete_specific(node *t);    // t is the address of the node which we have to delete;

         };
        
        void SLL::delete_specific(node *r)    
          {
                node *t;
                t=start;
                while(t->next!=r)
                    {
                        t=t->next;
                    }
                t->next=r->next;
                delete r;
          }
        
         