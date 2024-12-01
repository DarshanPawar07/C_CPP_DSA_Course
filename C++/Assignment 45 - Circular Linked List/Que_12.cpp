
       /* Que 12. In question 1, define a copy assignment operator to implement deep copy.*/

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
                   CLL& operator=(CLL&);
                   void delete_first();
                   void insert_at_last(int);
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

     void CLL::insert_at_last(int data)
            {    
                 node *n;
                 n=new node;
                 n->item=data;
                 if(last==NULL)
                    {
                        n->next=n;
                        last=n;
                    }
                  
                  else if(last->next==last)  //imp
                     {
                         n->next=last;
                         last->next=n;
                         last=n;
                     }
                  else 
                     {
                         n->next=last->next;
                         last->next=n;
                         last=n;
                     }
            }


        CLL& CLL::operator=(CLL& c1)
           {
                 if(c1.last==NULL)
                    {
                       last=NULL;
                    }

                 else
                   {
                        while(last!=NULL)
                          {
                             delete_first();
                          }

                         node *t;
                         t=c1.last->next;
                         while(t!=last)
                           {
                              insert_at_last(t->item);
                              t=t->next;
                           }
                         insert_at_last(last->item);
                    }
               return *this;
           } 