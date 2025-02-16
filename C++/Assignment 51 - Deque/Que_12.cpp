
        /* Que 12 - In question 1, define a copy assignment operator to implement deep copy. */
        
        #include<iostream>
        using namespace std;
       
        struct node
          {
               int item;
               node *next;
               node *prev;
          };
        
        class Deque
           {
              
                private: 
                     node *front;
                     node *rear;
                
                public:
                    void insert_rear(int);
                    Deque& operator=(Deque d1);
                     void Delete_front();
            };
        
        Deque& Deque::operator=(Deque d1)
            {
                if(d1.front=NULL)
                   {
                       front=NULL;
                   }
                 else
                    {    
                         if(front!=NULL)    
                            {
                                Delete_front();
                            }

                          node *t;
                          t=d1.rear;

                          while(t!=NULL)
                             {
                                 insert_rear(t->item);
                                 t=t->next;
                             }
                    }
                 
                 return *this;
             }
        
       void Deque::insert_rear(int data)
            {   
                 node *n;
                 n=new node;
                 n->item = data;
                 n->next=NULL;

                 if(rear==front==NULL)
                   {
                       
                       n->prev=NULL;
                       front=rear=n;
                   }
                 
                 else 
                    {
                         n->prev=rear;
                         rear->next=n;
                         rear=n;
                    }
            }

      void Deque::Delete_front()
           {
               if(front==rear==NULL)
                  {
                       cout<<"Underflow";
                  }
                
                else if(front==rear)
                  {
                      delete front;
                      front=rear=NULL;
                  }
                
                else
                  {
                       front=front->next;
                       delete front->prev;
                       front->prev=NULL;
                  }
           }
           