  
        /* Que  4 - In question 1, define a method to delete highest priority element */
        
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
                   void del();

           };
       
       void PriorityQueue::del()
         {  
               if(start==NULL)
                 {
                    throw EMPTY_QUEUE;
                 }
               
               else
                  {
                       node *r;
                       r=start;
                       start=r->next;
                       delete r;
                  }
         }