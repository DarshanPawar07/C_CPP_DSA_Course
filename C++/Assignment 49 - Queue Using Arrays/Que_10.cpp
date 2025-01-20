
    /* Que 10 - In question 1, Define a method to count number of elements present in the queue */

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
               int count_elements();
               bool is_empty();
      }; 
    
    int Queue::count_elements()
       {
             if(is_empty())
                {
                    return 0;
                }
            if(front&&rear==-1)
               {
                   return 1;
               }
            if(rear>front)
               {
                  return rear-front+1;
               }
            else 
               {
                   return capacity-rear+front+1;
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