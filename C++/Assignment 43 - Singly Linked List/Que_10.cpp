
       /* Que 10 - In question 1, define a destructor to deallocates memory for all the nodes in the linked list*/

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
              ~SLL();

         };
         
         SLL:: ~SLL()
           {
               node *t;
               t=start;

               while(start!=NULL)
                   {
                       start=t->next;
                       delete t;
                       t=start;
                   }
           }