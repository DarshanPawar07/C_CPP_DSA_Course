

       /* Que 11. In question 1, define a copy constructor to implement deep copy. */

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
               DLL(DLL&);
               void insert_at_first(int);

         };
    
      void DLL::insert_at_first(int data)
            {
                node *n;  // n means pointer which points new node

                n->item=data;
                n->next=start;
                n->prev = NULL;
                if(start!=NULL)
                    {
                       start->prev=n;
                    }
                start=n;


            };
         
            
       DLL::DLL(DLL& d1)  
            {
                   node *t;
                   t=d1.start;

                   while(t->next!=NULL)
                      {
                         t=t->next;
                      }
                   
                   while(t!=NULL)
                      {
                         insert_at_first(t->item);
                         t=t->prev;
                      }
                    
            };