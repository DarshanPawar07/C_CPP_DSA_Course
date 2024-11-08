

       /* Que 4 - . In question 1, define a method to insert a data into the list at the end */

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
               void DLL::insert_at_last(int);


         };
       
       void DLL::insert_at_last(int data)
            {
               
                node *n;  // n means pointer which points new node

                n->item=data;
                n->next=NULL;
                if(start==NULL)
                   {
                    n->prev=NULL;
                   }
                else
                   {
                      node *t;
                      t=start;  
                      while(t->next!=NULL)
                          {
                            t->next=NULL;
                          }
                       n->prev = t;
                       t->next=n;
                
                   }
                

                

            };