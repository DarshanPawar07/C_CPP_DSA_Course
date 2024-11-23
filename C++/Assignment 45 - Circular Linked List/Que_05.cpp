
       /* Que 5. In question 1, define a method to search a node with the give item. */

        #include<iostream>
        using namespace std;
        
        struct node
           {
                 int item;
                 node *next;
           };

        class CLL
           {  
               private:
                  node *last;

               public:
                   node* search_node(int);
           };
         
        node* CLL::search_node(int data)
            {    
                   node *t;
                  t=last->next;
                  
                  while(t!=NULL)
                    {
                        if(t->item==data)
                           {
                              return t;
                           }
                    }
                  
                  if(last->item==data)
                     {
                         return last;
                     }
                  return NULL; 
            }