
       /* Que 7 - In question 1, define a method to delete first node from the list. */

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
                    void delete_first();
                    
           };

        void CDLL::delete_first()
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
                        r=start;
                        start->prev->next=r->next;
                        start->next->prev=r->prev;
                        start=r->next;
                        delete r;
                    }
            }