
       /* Que 12 - In question 1, define a copy assignment operator to implement deep copy. */

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
                       CDLL& operator=(CDLL&);
                       void insert_at_last(int);
                       void delete_last();
           };
        
        CDLL& CDLL::operator=(CDLL& c1)
           {  
               
               while(start!=NULL)
                           {
                               delete_last();
                           }
                
               if(c1.start==NULL)
                   {
                      start=NULL;
                   }

               else
                    { 
                        node *t;
                        t=c1.start;

                        
                        while(t!=c1.start->prev)
                          {
                             insert_at_last(t->item);
                             t=t->next;
                          }
                 
                        insert_at_last(start->prev->item);
                    }

                return *this;
           }

       void CDLL::insert_at_last(int data)
             {     
                  node *n;
                  n=new node;
                  n->item=data;

                   if(start==NULL)
                     {
                         n->next=n;
                         n->prev=n;
                         start=n;
                     }
                    
                   else if(start->next==start)
                      {
                          n->next=start;
                          n->prev=start;
                          start->next=n;
                          start->prev=n;
                      } 
                   
                   else
                      {
                          n->next=start->prev->next;
                          start->prev->next=n;
                          n->prev=start->prev;
                          start->prev=n;
                      }
             }
        void CDLL::delete_last()
            {
                if(start==NULL)
                  {
                    cout<<"Deletion Not Possiblr/Underflow";
                  }
                
                else if(start->next==start)
                  {
                      delete start;
                      start=NULL;
                  }
                
                else
                   {   
                       node *r;
                       r=start->prev;
                       r->prev->next=r->next;
                       start->prev=r->prev;
                       delete r;
                   } 
            }