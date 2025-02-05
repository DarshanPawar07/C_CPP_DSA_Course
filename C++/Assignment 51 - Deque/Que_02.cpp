
        /* Que 2 - In question 1, define a constructor to initialise member variables  */
        
        #include<iostream>
        using namespace std;
       
        struct node
          {
               int item;
               int *next;
               int *prev;
          };
        
        class Deque
           {
              
                private: 
                     node *front;
                     node *rear;
                
                public:
                     Deque();
                    
           };
        
        Deque::Deque()
           {
               front=NULL;
               rear=NULL;
           }
           