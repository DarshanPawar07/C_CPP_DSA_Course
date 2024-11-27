
       /* Que 8. In question 1, define a method to delete last node of the list. */

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
                   void delete_last();
           };
        
        void CLL::delete_last()
           {
                if(last==NULL)
                   {
                       cout<<"Deletion Not Possible/Underflow";
                   }
               
                else if(last->next=last)
                  {
                      delete last;
                      last=NULL;
                  }
                
                else  //traversing
                  {
                      node *t;
                      t=last->next;

                      while(t->next!=last)
                         {
                            t=t->next;
                         }
                      t->next=last->next;
                      delete last;
                      last=t;
                  }
           }
