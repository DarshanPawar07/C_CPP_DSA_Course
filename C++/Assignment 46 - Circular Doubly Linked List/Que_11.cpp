
       /* Que 11 - In question 1, define a copy constructor to implement deep copy. */

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
                     CDLL(CDLL&);
                     void insert_at_last(int);
                    
           };
        
        CDLL::CDLL(CDLL& c1)
           {
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