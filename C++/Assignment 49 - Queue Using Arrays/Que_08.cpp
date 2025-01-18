
    /* Que 8 - In question 1, define a method to check queue overflow */

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
                bool is_empty();   // is_empty() same as is_underflow
      }; 
    
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