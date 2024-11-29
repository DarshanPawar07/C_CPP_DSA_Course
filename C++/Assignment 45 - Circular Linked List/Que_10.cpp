
       /* Que 10. In question 1, define a destructor to deallocates memory for all the nodes in the linked list.*/

        #include<iostream>
        using namespace std;
        
        struct node
           {
                 int item;
                 node *next;
           };

        class CLL
           {  
                private:
                   node *last;
               
                public:
                   ~CLL();
                   void delete_first();

           };

         void CLL::delete_first()
              {
                    if(last==NULL)
                       {
                         cout<<"Deletion Not Possible / Underflow";
                       }
                    
                    else if(last->next==last)
                       {
                          delete last;
                          last=NULL;
                       }

                    else 
                       {
                           node *r;
                           r=last->next;
                           last->next=r->next;
                           delete r;
                       }
                    }
         
         CLL::~CLL()
             {
                   while(last!=NULL)
                      {
                          delete_first();
                      }

             }