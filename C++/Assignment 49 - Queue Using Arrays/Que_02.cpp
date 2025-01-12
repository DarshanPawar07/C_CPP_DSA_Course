
    /* Que 2 - In question 1, define a parameterzied constructor to initialise member variables.*/

    #include<iostream>
    #include<stdio.h>
    using namespace std;

    class Queue
      { 
            private:
                int capacity;
                int front;
                int rear;
                int *ptr;
           
           public:
              Queue(int);
      }; 
  
   Queue::Queue(int cap)
       {
            capacity=cap;
            front=-1;
            rear=-1;
            ptr= new int[capacity];
       }