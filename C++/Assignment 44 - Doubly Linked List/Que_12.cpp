

       /* Que 12. In question 1, define a copy assignment operator to implement deep copy. */

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
                DLL& operator=(DLL&);
                void insert_at_first(int);
                void delete_first();


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

       void DLL::delete_first()
            {
                 node *r;
                 r=start;
                 
                 if(start==NULL)
                    {
                       cout<<"deleteion not possible/underflow";
                    }

                 else if(start->next==NULL)
                    {
                       delete start;
                       start=NULL;
                    }

                 else
                     {
                         start->next->prev=NULL;
                         start=r->next;
                         delete r;

                     }
            };
       
       DLL& DLL::operator=(DLL& d1) 
            {
                  node *t;
                  t=d1.start;

                  while(start!=NULL)
                      {
                         delete_first();
                      }

                  while(t->next!=NULL)
                      {
                         t=t->next;
                      }
                   
                   while(t!=NULL)
                      {
                          insert_at_first(t->item);
                          t=t->prev;
                      }
                  
                  return *this;
            };