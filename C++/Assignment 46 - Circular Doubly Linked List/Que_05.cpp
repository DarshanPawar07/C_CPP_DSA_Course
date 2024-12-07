
       /* Que 5 - In question 1, define a method to search a node with the give item. */

       #include<iostream>
       using namespace std;

       struct node
          {
               int item;
               node *prev;
               node *next;
          };
        
        class CDLL
           {
                private:
                    node *start;
                
                 public:
                    node* search_node(int);
                    
           };  
        
        node* search_node(int data)
            {
                  if(start==NULL)
                    {
                        cout<<"No Data Is Present In The List/Underflow";
                        return NULL ;
                    }
                   
                   else if(start->next=start)
                      {
                            if(start->item==data)
                               {
                                  return start;
                               }
                            else 
                               return NULL;
                      }
                   
                   else
                      {
                           node *t;
                           t=start;

                           while(t!=start->prev)
                             {
                                 if(t->item==data)
                                  {
                                     return t;
                                  }
                                 
                                 t=t->next;
                             }
                          return NULL;
                      }
            }