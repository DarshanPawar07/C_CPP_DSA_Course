
        /* Que 5 - In question 1, define a method to delete front element */
        
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
                   void Delete_front();
                    
           };
        
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
           