

       /* Que 6 -In question 1, define a method to insert a data into the list after the specified node of the list.*/

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
               void DLL::insert_after(node*,int);


         };
       
       void DLL::insert_after(node *r,int data)
            {
                node *n;
                n=new node;
                n->item=data;

                 if(r==NULL)   //r=start=NULL
                  {
                      n->next=NULL;
                      n->prev=NULL;
                      start=n;
                  }

                 else if(r==start)
                  {
                      n->next=r->next;
                      n->prev=r;
                      r->next=n;
                  }
                  
                 else if(r->next=NULL)
                  {
                        n->next=r->next;
                        n->prev=r;
                        r->next=n;
                  }
                  
                  else
                    {
                         n->next=r->next;
                         n->prev=r;
                         r->next->prev=n;
                         r->next=n;
                    }
            };