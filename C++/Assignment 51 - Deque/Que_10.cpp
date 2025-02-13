
        /* Que 10 - In question 1, define a method to check if deque is empty.  */
        
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
                   bool is_empty();
                    
           };
        
        bool Deque::is_empty()
            {
                if(front==rear==NULL)
                  {
                     return true;
                  }
                
                else
                  {
                     return false;
                  }
            }
           