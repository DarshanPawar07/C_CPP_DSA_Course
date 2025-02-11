
        /* Que 8 - In question 1, define a method to get rear element */
        
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
                    int get_rear();
                    
           };
        
        int Deque::get_rear()
           {
                if(front==rear==NULL)
                    {
                        throw UNDERFLOW;
                    }
                
                else
                   return rear->item;
           }
           