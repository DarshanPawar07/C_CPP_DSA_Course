
       /* Que 2 - In question 1, define a constructor to initialise start pointer with NULL. */

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
                SLL();

          };

         SLL::SLL()
            {
                start=NULL;
            }
         
       