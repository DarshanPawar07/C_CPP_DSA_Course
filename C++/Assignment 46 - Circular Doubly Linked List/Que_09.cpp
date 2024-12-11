
       /* Que 9 - In question 1, define a method to delete a specific node. */

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
                     void delete_node(node*);
                     
                    
           };
        
        void CDLL::delete_node(node* r)
            {
                  if(r==NULL)
                   {
                      cout<<"Deletion Not Possibe/Underflow";
                   }
                  
                  else if(r->next==r && start==r)   //r=start
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
            }