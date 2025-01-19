
    /* Que 9 - In question 1, define a method to check queue underflow. */

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
              bool is_full();
      }; 
    
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