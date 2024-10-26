
       /* Que 8 -  In question 1, define a method to delete last node of the list.
*/

       #include<iostream>
       #include<stdio.h>
       using namespace std;
       

       struct node
       {
             int item;
             node *next;
       };

       class SLL
         {    private:
              node *start;

              public:
              void delete_last();
         };

        void SLL::delete_last()
          {
                node *t;
                t=start;
                while(t->next->next!=NULL)
                   {
                     t=t->next;
                   }
                
                delete t->next;
                t->next=NULL;
                
                
          }
         