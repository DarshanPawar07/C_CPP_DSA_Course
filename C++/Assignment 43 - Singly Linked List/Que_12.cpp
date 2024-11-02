
       /* Que 12 - In question 1, define a copy assignment operator to implement deep copy.*/

       #include<iostream>
       #include<stdio.h>
       using namespace std;
       

       struct node
       {
             int item;
             node *next;
       };

       class SLL
         {   
            private:
              node *start;

            public:
              SLL& operator=(SLL&);
              void insert_last(int data);
              void delete_first();
         };
        
        void SLL::insert_last(int data)
           {
                node *n;
                 
                 node *t;
                 while(t->next!=NULL)
                 {
                    t=t->next;
                 }
                n->item=data;
                n->next=NULL;
                t->next=n;

           }

        void SLL::delete_first()
          {
                 node *r;
                 r=start;

                 start=r->next;
                 delete r;
          }
        

        SLL& SLL:: operator=(SLL& s1)
           {
                  node *t;
                  t=s1.start;
                 
                  
                  while(start!=NULL)
                     {
                        delete_first() ;
                     }
                     
                  while(t!=NULL)
                     {
                        insert_last(t->item);
                        t=t->next;
                     }
                  
                  return *this;

           }
         