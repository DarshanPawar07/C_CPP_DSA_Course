
       /* Que 1. Define a class CLL to implement Circular linked list data structure with member variable 
                 last pointer of type node.*/

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
           };