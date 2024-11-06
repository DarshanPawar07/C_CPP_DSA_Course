

       /* Que 3 - In question 1, define a method to insert a data into the list at the beginning */

       #include<iostream>
       using namespace std;

       struct node
         {
            int item;
            node *prev;
            node *next;

         };

       class DLL
         {    
            private:
              node *start;

            public:
               void DLL::insert_at_first(int);


         };
       
       void DLL::insert_at_first(int data)
            {
                node *n;  // n means pointer which points new node

                n->item=data;
                n->next=start;
                n->prev = NULL;
                if(start!=NULL)
                    {
                       start->prev=n;
                    }
                start=n;


            };