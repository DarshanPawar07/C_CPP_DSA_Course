
    /* Que 11 - In question 1, define a copy constructor to implement deep copy. */

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
                Queue(Queue&);
                   
      }; 
    
    Queue::Queue(Queue &q1)
      {
           capacity=q1.capacity;
           front=q1.front;
           rear=q1.rear;
           ptr= new int [capacity];

           for(int i=0;i<capacity;i++)
              {
                  ptr[i]=q1.ptr[i];
              }
           
      }