
    /* Que 6 -  In question 1, define a method to delete the front element of the queue. */

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
                void Delete();
                bool is_empty();
      }; 
    
     void Queue::Delete()
       {  
            if(is_empty())
              {
                  throw UNDERFLOW;
              }
            if(front&&rear==-1)
              {
                  front=rear=0;
              }
            
            else if(front=capacity-1)
              {
                  front=0;
              }
            else
              {
                  front++;
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