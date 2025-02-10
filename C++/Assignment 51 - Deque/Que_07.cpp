
        /* Que 7 - In question 1, define a method to get front element. */
        
        #include<iostream>
        using namespace std;
        #define UNDERFLOW 1
       
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
                    int get_front();
                    
           };
        
        int Deque::get_front()
            {
                 if(front==rear==NULL)
                    {
                        throw UNDERFLOW;
                    }
                
                else
                   return front->item;
            }
           