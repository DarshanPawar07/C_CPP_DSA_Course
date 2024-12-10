
       /* Que 8 - In question 1, define a method to delete last node of the list. */

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
                     void delete_last();
                    
           };
        
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
                       r->prev->next=r->next;  // r->prev->next=start both are same;
                       start->prev=r->prev;
                       delete r;
                   } 
            }