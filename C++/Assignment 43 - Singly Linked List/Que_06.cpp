
       /* Que 6 - In question 1, define a method to insert a data into the list after the specified node of the list*/

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
              void insert_after(node* ,int);

         };
        
        void SLL::insert_after(node *r,int data)
        {
              node *n;
               
               try
               {
                    if(r==start)
                     throw 1;

                    n->item=data;
                    n->next=r->next;
                    r->next=n;
                    
               }
               
               catch(int e)
               {
                   if(e==1)
                     {
                         n->item=data;
                         n->next=NULL;
                         start=n;
                     }
               }
              
        }
         