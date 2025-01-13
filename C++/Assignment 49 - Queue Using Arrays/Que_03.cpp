
    /* Que  3 - In question 1, define a method to insert a new element at the rear in the queue. */

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
              void insert(int);
               bool is_full();
      }; 


    void Queue::insert(int data)
       {   
            if(is_full())
               {
                  throw OVERFLOW;
               }
            if(front&&rear==-1)
              {
                  front=rear=0;
                  ptr[rear]=data;
              }
            else if(rear=capacity-1)
              {
                 rear=0;
                 ptr[rear]=data;
              }
            else 
               {
                  rear++;
                  ptr[rear]=data;
               }
        }

    bool Queue::is_full()
       {   
             if(rear==0 && front==capacity-1 || rear+1==front)
                {
                  return true;
                }
             else
                {
                   return false;
                }
       }