       
        /* Que 6 - In question 1, define a method to delete the front element of the queue. */
       
        #include<iostream>
        using namespace std;
        #define UNDERFLOW 1
       
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
                    void Delete();
           };
       
        void Queue::Delete()
           {     
                 if(front==rear==NULL)
                   {
                      throw UNDERFLOW;
                   }
                 else if(front==rear)
                   {
                       delete front;
                       delete rear;
                       front=rear=NULL;
                   }
                 else
                   {
                        node *t;
                        t=rear;
                        while(t->next!=front)
                             {
                                 t=t->next;
                             }
                         t->next=front->next;
                        
                         delete front;
                         front=t;
                   }
                
                  
           }