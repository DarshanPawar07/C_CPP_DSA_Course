
    /* Que 5 - In question 1, define a method to view front element of the queue. */

    #include<iostream>
    #include<stdio.h>
    using namespace std;
    #define OVERFLOW 1
    #define UNDERFLOW  2

    class Queue
      { 
            private:
                int capacity;
                int front;
                int rear;
                int *ptr;
           
           public:
                int view_front();
                bool is_empty();
      }; 
    
     int Queue::view_front()
        {
             if(is_empty())
               {
                  throw UNDERFLOW;
               }
            
             else 
               {
                 return ptr[front];
               }
        }

     bool Queue:: is_empty()
        {
             if(front&&rear==-1)
                  {
                     return true;
                  } 
             else 
                 {
                    return false;
                 }
        }
