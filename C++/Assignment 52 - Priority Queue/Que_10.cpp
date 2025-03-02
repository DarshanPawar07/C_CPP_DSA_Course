  
        /* Que 10 -In question 1, define a copy assignment operator to implement deep copy.*/
        
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
                 PriorityQueue& operator=(PriorityQueue&);
                 void insert(int,int);
           };

        PriorityQueue& PriorityQueue:: operator=(PriorityQueue& p1)
            {
                 
                 node *t=p1.start;
                 
                 while(start!=NULL)
                   {
                       del();
                   }
                 
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