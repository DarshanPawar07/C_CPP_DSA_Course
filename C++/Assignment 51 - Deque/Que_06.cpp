
        /* Que 6 - In question 1, define a method to delete rear element  */
        
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
                     void delete_rear();
                    
           };
        
        void Deque::delete_rear()
           {    
                if(front==rear==NULL)
                  {
                      cout<<"Underflow";
                  }
                
                else if(front==rear)
                   {
                        delete rear;
                        front=rear=NULL;
                   }
                
                else
                   {
                       rear=rear->prev;
                       delete rear->next;
                       rear->next=NULL;
                   }
           }

           