
       /* Que 3. In question 1, define a method to insert a data into the list at the beginning. */

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
                   void insert_at_first(int);
           };
         
          void CLL::insert_at_first(int data)
              {   
                  node *n;
                  n=new node;
                  n->item=data;

                  if(last==NULL)
                    {
                        n->next=n;    // imp n->next mdhe self address yeil
                        last=n;
                    }

                  else if(last->next==last)   //imp
                    {
                        n->next=last;
                        last->next=n;
                    }
                  
                  else
                    {
                        n->next=last->next;
                        last->next=n;
                    }
                     
              }


                