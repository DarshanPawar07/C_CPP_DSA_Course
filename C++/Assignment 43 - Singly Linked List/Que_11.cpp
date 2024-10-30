
       /* Que 11 - In question 1, define a copy constructor to implement deep copy.*/

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
              SLL(SLL&);
              void insert_last(int);

         };
                void SLL::insert_last(int data)
           {
                node *n;
                 
                 node *t;
                 while(t->next!=NULL)
                 {
                    t=t->next;
                 }
                n->item=data;
                n->next=NULL;
                t->next=n;

           }
         
        SLL::SLL(SLL& s1)
           {
                node *t;
                t=s1.start;           // new obj/list wala t 
                start=NULL;            // new obj/list wala start
                while(t!=NULL)
                    {
                       insert_last(t->item);
                       t=t->next;
                    }
           }