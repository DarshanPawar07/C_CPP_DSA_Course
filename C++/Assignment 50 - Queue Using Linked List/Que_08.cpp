       
        /* Que 8 - In question 1, define a copy constructor to implement deep copy.  */
       
        #include<iostream>
        using namespace std;
       
        struct node
           {
              int item;
              node *next;
              node *prev;
           };

        class Queue
           {
                private:
                 node *front;
                 node *rear;
                 
               public:
                  Queue(Queue&);
                 void Queue::insert(int data);
           };

         Queue:: Queue(Queue &q1)
           {   
               front=rear=NULL;
               node*t;
               t=q1.rear;

               while(t!=NULL)
                {
                     insert(t->item);
                     t=t->next;
                }
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