
       /* Que 4 - In question 1, define a method to insert a data into the list at the end*/

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
              node *start;

              void insert_last(int);

         };
         
        
         void SLL::insert_last(int data)
           {
                 node *n;
                 node *t;
                 t=start;
                 while(t->next!=NULL)
                 {
                    t=t->next;
                 }
                 n->item=data;
                 n->next=NULL;
                 t->next=n;

           }