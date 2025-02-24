  
        /* Que 6 - In question 1, define a method to get highest priority number. */
        
        #include<iostream>
        using namespace std;
        #define EMPTY_QUEUE 1

        struct node
           {
                int item;
                node *next;
                int priority;
           };
        
        class PriorityQueue
           {
                private:
                    node *start;
                
                public:
                   int get_highest_prio_number();
           };

      int PriorityQueue::get_highest_prio_number()
         {
             if(start==NULL)
              {
                  throw EMPTY_QUEUE;
              }
             
             else
               {
                    return start->priority;
               }
         }