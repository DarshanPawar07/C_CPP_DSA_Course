  
        /* Que 3 - In question 1, define a method to insert new item in the Priority Queue according to the 
                   priority number. */
        
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
                   void insert(int,int);
           };
          
          void PriorityQueue::insert(int p,int data)
             {     
                   node *n;
                   n->item=data;
                   n->priority=p;
                   if(start==NULL || n->priority>start->priority)
                     {
                          n->next=start;
                          start=n;
                     }
                   
                   else
                     {
                         node *t=start;
                         while(t->next!=NULL)
                           {
                                if(n->priority >t->next->priority)
                                  {
                                      break;
                                  }
                                t=t->next;
                           }   
                         
                         n->next=t->next;
                         t->next=n;
                     }
             }