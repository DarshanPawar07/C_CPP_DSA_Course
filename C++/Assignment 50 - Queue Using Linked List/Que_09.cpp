       
        /* Que 9 - In question 1, define a copy assignment operator to implement deep copy. */
       
        #include<iostream>
        using namespace std;
       
        struct node
          {
              int item;
              node *next;
          };

        class Queue
           {
               private:
                 node *front;
                 node *rear;
                 
               public: 
                   Queue& operator=(Queue &);
                   void Queue::insert(int data);
           };
        
         Queue& Queue:: operator=(Queue &q1)
           {
                if(front!=NULL)
                  {
                     front=NULL;
                  }
                
                if(rear!=NULL)
                  {
                     rear=NULL;
                  }
                
                node *t; 
                t=q1.rear;

                while(t!=NULL)
                   {
                       insert(t->item);
                       t=t->next;
                   }
                
                return *this;
           }

       void Queue::insert(int data)
           {      
                    node *n;
                    n=new node;
                    n->item=data;

                  if(front=rear=NULL)
                      {
                          n->next=NULL;
                          front=rear=n;
                      }
                  
                  else
                      {
                           n->next=rear;
                           rear=n;
                      }
            }