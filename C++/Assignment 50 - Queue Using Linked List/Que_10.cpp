       
        /* Que 10 - In question 1, define a method to count number of elements present in the queue. */
       
        #include<iostream>
        using namespace std;
       
        struct node
          {
              int item;
              node *next;
          };

        class Queue
          {
                private:
                 node *front;
                 node *rear;
                 node *prev;
                 
               public:
                   int Queue::count_elements();
          };
        
        int Queue::count_elements()
           {
                node *t;
                t=rear;
                int c=0;
                 while(t!=NULL)
                   {
                      c++;
                      t=t->next;
                   }
                 
                 return c;
           }