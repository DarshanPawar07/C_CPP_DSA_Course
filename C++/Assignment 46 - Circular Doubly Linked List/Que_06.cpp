
       /* Que 6 - In question 1, define a method to insert a data into the list after the specified node of the list.*/

       #include<iostream>
       using namespace std;

       struct node
          {
               int item;
               node *prev;
               node *next;
          };
        
        class CDLL
           {
                private:
                    node *start;
                
                 public:
                      void insert_after(int ,node*);
                    
           };
        
        void CDLL::insert_after(int data,node* r)
            {
                  node *n;
                  n=new node;
                  n->item=data;

                  if(r==NULL||start==NULL)
                     {
                         cout<<"Insertion not Possible";
                     }
                  
                  else if(r=r->next)   //start==r
                    {
                        n->next=r;
                        n->prev=r;
                        r->next=n;
                        r->prev=n;
                        start=n;
                    }
                  
                  else
                     {
                         n->next=r->next;
                         n->prev=r;
                         r->next->prev=n;
                         r->next=n;
                     }
            }