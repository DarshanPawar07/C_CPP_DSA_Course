
        /* Que 11 - In question 1, define a copy constructor to implement deep copy.*/
        
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
                    Deque(Deque &);
                    void insert_rear(int);
            };
        
        Deque::Deque(Deque &q1)
            {
                  node *t;
                  
                  front=rear=NULL;

                  if(q1.front==NULL)
                    {
                        front=NULL;
                    }

                  else
                    {     
                           t=q1.rear;
                           while(t!=NULL)
                               {   
                                 insert_rear(t->item);
                                  t=t->next;
                               }
                    }
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