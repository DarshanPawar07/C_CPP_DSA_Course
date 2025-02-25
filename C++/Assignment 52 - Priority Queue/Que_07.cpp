  
        /* Que 7 -In question 1, define a destructor to deallocate the memory. */
        
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
                    ~PriorityQueue();
                     void del();
           };

        PriorityQueue::~PriorityQueue()
           {
                while(start!=NULL)
                  {
                    del();
                  }
           }

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