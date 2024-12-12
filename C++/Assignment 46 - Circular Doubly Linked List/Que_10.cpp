
       /* Que 10 - In question 1, define a destructor to deallocates memory for all the nodes in the linked list. */

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
                    ~CDLL();
                    void delete_last();
           };
        
        CDLL::~CDLL()
           {
                 while(start!=NULL)
                    {
                        delete_last();
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