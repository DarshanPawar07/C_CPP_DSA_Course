
       /* Que 7. In question 1, define a method to delete first node from the list.*/

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