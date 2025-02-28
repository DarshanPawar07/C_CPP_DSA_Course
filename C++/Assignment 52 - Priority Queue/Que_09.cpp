  
        /* Que 9 -In question 1, define a copy constructor to implement deep copy. */
        
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
                     PriorityQueue(PriorityQueue&);
                     void insert(int,int);
           };
          
         PriorityQueue:: PriorityQueue(PriorityQueue& p1)
            {
               start=NULL;
                 node *t=p1.start;

                 if(p1.start==NULL)
                   {
                      start=NULL;
                   }
                 
                 else
                   {
                       while(t!=NULL)
                        {
                           insert(t->priority,t->item);
                           t=t->next;
                        }
                   }
             }

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