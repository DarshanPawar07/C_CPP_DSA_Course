

       /* Que 8 - In question 1, define a method to delete last node of the list. */

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
               void DLL::delete_last();


         };
       
       void DLL::delete_last()
            {
                 if(start==NULL)
                    {
                       cout<<"Deletion Not Possible/Underflow";
                    }
                 
                 else if(start->next==NULL)
                    {
                        delete start;
                        start=NULL;
                    }
                 
                 else
                    {
                         node *t;
                         t=start;
                         while(t->next->next!=NULL)
                           {
                              t=t->next;
                           }
                        
                          delete t->next;
                          t->next=NULL;
                     }

            };