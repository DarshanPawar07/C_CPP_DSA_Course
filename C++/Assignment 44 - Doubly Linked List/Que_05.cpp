

       /* Que 5 - In question 1, define a method to search a node with the give item. */

       #include<iostream>
       using namespace std;

       struct node
         {
            int item;
            node *prev;
            node *next;

         };

       class DLL
         {    
            private:
              node *start;

            public:
               node* DLL::search_node(int);


         };
       
       node* DLL::search_node(int data)
            {
                 node *t;
                 t=start;
                 while(t->next!=NULL)
                    {    
                         if(t->item==data)
                           { 
                              return t;
                           }
                           t=t->next;
                    }
                 return NULL;
            };