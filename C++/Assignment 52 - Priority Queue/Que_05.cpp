  
        /* Que 5 - In question 1, define a method to get highest priority element */
        
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
                    int get_highest_prio_element();
           };
       
       int PriorityQueue::get_highest_prio_element()
         {
             if(start==NULL)
              {
                  throw EMPTY_QUEUE;
              }
             
             else
               {
                    return start->item;
               }
         }