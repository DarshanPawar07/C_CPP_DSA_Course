
        /* Que 3 - In question 1, define a method to insert a new element at the front  */
        
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
                    void insert_front(int);
                    
           };
        
        void Deque::insert_front(int data)
            {  
                  node *n;
                  n=new node;
                  n->item=data;

                  if(rear==front==NULL)
                     {
                          n->next=NULL;
                          n->prev=NULL;
                          rear=front=n;
                     }
                  
                  else
                     {
                         n->next=front;
                         n->prev=NULL;
                         front->prev=n;
                         front=n;
                     }
            }
           