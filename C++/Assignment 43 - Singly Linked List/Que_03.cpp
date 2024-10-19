
       /* Que 3 - In question 1, define a method to insert a data into the list at the beginning.*/

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
               void insert_start(int);
         };
         
        
        void SLL::insert_start(int value)
            {
                 node *n;
                 n->item=value;
                 n->next=start;
                 start=n;
            }