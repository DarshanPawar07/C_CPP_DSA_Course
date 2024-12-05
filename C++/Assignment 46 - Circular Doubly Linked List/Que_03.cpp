
       /* Que 3 - In question 1, define a method to insert a data into the list at the beginning. */

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
                    void insert_at_first(int);
           };
        
        void CDLL::insert_at_first(int data)
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
                            start->prev=n;
                            start->next=n;
                            start=n;
                       }
                  
                  else
                     {
                         n->next=start;
                         n->prev=start->prev;
                         start->prev->next=n;
                         start->prev=n;
                         start=n;
                     }
             }