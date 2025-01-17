
    /* Que 7 - In question 1, define a destructor to deallocates the memory.*/

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
               ~Queue();
      }; 

       Queue::~Queue()
           {
                if(ptr!=NULL)
                  {
                     delete []ptr;
                  }
           }
