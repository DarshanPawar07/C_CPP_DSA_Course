

       /* Que 9 - In question 1, define a method to delete a specific node. */

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
               void DLL::delete_node(node *);


         };
       
       void DLL::delete_node(node *r)      // r is the pointer which points a node that node we have to delete
              {
                   if(r==NULL)
                      {
                         cout<<"Deletion Not Possible/Underflow";
                      }
                   
                   else if(r==start)
                      {
                           delete r;
                           start=NULL;
                      } 

                    else
                       {
                           r->prev->next=r->next;
                           r->next->prev=r->prev;
                           delete r;
                       }
               };