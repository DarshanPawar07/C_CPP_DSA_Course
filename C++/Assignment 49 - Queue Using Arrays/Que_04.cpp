
    /* Que 4 -  In question 1, define a method to view rear element of the queue. */

    #include<iostream>
    #include<stdio.h>
    using namespace std;
    #define Queue_empty 1
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
               int view_rear();
               bool is_empty();
      }; 

     int Queue::view_rear()
        {
             if(is_empty())
               {
                   throw UNDERFLOW;
               }
             
             else
               {
                   return ptr[rear];
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