       
       /* Que 4 - In question 1, define a method to view rear element in the queue. */
       
        #include<iostream>
        using namespace std;
        #define EMPTY_LIST 1
       
        struct node
          {
              int item;
              node *next;
              node *prev;
          };

        class Queue
          {
                private:
                 node *front;
                 node *rear;
                 
               public: 
                   int view_rear();
          };
        
        int Queue::view_rear()
           {   
               if(front=rear=NULL) 
                  {
                      throw EMPTY_LIST;
                  }
                  
              else
                {
                    return rear->item;
                }
               
           }