

       /* Que 10. In question 1, define a destructor to deallocates memory for all the nodes in the linked list */

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
               ~DLL();
                void delete_first();

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
       
       DLL::~DLL()  
            {
                 node *t;
                 t = start;

                 while(start!=NULL)
                    {
                          delete_first();
                    } 
            };