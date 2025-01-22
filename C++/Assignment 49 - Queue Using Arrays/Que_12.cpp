
    /* Que 12 - In question 1, define a copy assignment operator to implement deep copy. */

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
              Queue& operator=(Queue&);
      }; 
    
     Queue& Queue::operator=(Queue& q1)
       {

           if(ptr!=NULL)
           {
              delete []ptr;
           }
           
           
           capacity=q1.capacity;
           front=q1.front;
           rear=q1.rear;
           ptr=new int[capacity];

           for(int i=0;i<capacity;i++)
             {
                 ptr[i]=q1.ptr[i];
             }
            
            return *this;
       }