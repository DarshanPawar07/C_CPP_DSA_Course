

       /* Que 7 -In question 1, define a method to delete first node from the list. */

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
               void DLL::delete_first();


         };
       
       void DLL::delete_first()
            {
                 node *r;
                 r=start;
                 
                 if(start==NULL)
                    {
                       cout<<"deletion not possible/underflow";
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