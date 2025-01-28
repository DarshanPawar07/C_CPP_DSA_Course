       
       /* Que 5 - In question 1, define a method to view front element in the queue. */
       
       #include<iostream>
       using namespace std;
       #define EMPTY_LIST 1
       
       struct node
          {
              int item;
              node *next;
              node *prev;
          };

       class Queue
          {
                private:
                 node *front;
                 node *rear;
                 
               public: 
                    int view_front();
          };

        int Queue::view_front()
           {    
                 if(front=rear=NULL) 
                     {
                       throw EMPTY_LIST;
                     }
                 else
                    {
                       return front->item;
                   }
           }