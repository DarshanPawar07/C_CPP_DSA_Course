
       /* Que 6. In question 1, define a method to insert a data into the list after the specified node of the list. */

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
                 void insert_after(int,node*);
           };
         
          void CLL::insert_after(int data , node *r)
              {    
                   node *n;
                   n=new node;
                   n->item=data;

                   if(r==NULL)
                      {
                         n->next=n;
                         last=n;
                      }
                   
                   else if(last->next==last)  // else if(r==last) is wrong 
                      {
                          n->next=last->next;
                          last->next=n;
                          last=n;
                          //or
                          // insert_at_last(data);
                      }
                      
                    else
                       {
                           n->next=r->next;
                           r->next=n;
                       }
                   }