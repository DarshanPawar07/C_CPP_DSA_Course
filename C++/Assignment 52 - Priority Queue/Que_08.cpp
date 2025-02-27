  
        /* Que 8 - In question 1, define a method to check if Priority Queue is empty */
        
        #include<iostream>
        using namespace std;

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
                    bool is_empty();
           }; 
        
         bool PriorityQueue::is_empty()
            {
                 if(start==NULL)
                   {
                    return true;
                   }
                 else
                   {
                     return false;
                   }
            }