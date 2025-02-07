
        /* Que 4 - In question 1, define a method to insert a new element at the rear.*/
        
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
                   void insert_rear(int data);
                       
                    
           };
           
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

        