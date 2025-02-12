
        /* Que 9 - In question 1, define a destructor to deallocate the memory. */
        
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
                     ~Deque();
                     void Delete_front();
                    
           };
        
        Deque::~Deque()
           {    
                if(front==rear==NULL)
                   {
                       front==rear==NULL;
                   }

                while(front!=NULL)
                  {
                      Delete_front();
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
           


           