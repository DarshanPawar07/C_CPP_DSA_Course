
       /* Que 11. In question 1, define a copy constructor to implement deep copy.*/

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
                    CLL(CLL&);
                    void delete_first();
                    void insert_at_last(int);
           };

        CLL::CLL(CLL& c1)
            {
                  if(c1.last==NULL)
                    {
                       last=NULL;
                    }
                  
                  else
                   {    
                        node *t;
                        t=c1.last->next;

                        while(t!=last)
                          {
                             insert_at_last(t->item);
                             t=t->next;
                          }
                        
                        insert_at_last(last->item);
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


 