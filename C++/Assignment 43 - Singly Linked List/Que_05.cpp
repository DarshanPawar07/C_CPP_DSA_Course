
       /* Que 5 - In question 1, define a method to search a node with the give item.*/

       #include<iostream>
       #include<stdio.h>
       using namespace std;
       

       struct node
       {
             int item;
             node *next;
       };

       class SLL
         {  
             private:
              node *start;

              public:
                 void search_node(int );

         };

        void SLL::search_node(int data)
           {
                node *t;
                t=start;

                
                while(t->next!=NULL)
                  {  
                     if(t->item==data)
                        {
                           cout<<"Item Found At Address "<<t;
                        }
                        
                      t=t->next;
                  }
                  
                

           }
         