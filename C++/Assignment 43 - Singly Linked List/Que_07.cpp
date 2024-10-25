
       /* Que 7 - In question 1, define a method to delete first node from the list */

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
              void delete_first();

         };

        void SLL::delete_first()
          {
                 node *r;
                 r=start;

                 start=r->next;
                 delete r;
          }
         