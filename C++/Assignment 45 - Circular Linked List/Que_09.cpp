
       /* Que 9. In question 1, define a method to delete a specific node. */

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
                 void delete_node(node *);
           };

         void CLL::delete_node(node *r)
              {     
                   if(r==NULL)
                      {
                         cout<<"Deletion Not Possible/Underflow";
                      }
                   
                   else if(r==last)
                      {
                          delete r;
                          last=NULL;
                      }
                  else 
                      {
                          node *t;
                          t=last->next;
                          while(t->next!=r)
                             {
                                t=t->next;
                             }
                          
                          t->next=r->next;
                          delete r;
                      }
                }  