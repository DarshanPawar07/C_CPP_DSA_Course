
       
       /* Que 2 - In question 1, define a constructor to initialise start pointer with NULL */
       
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
               DLL();


         };
       
       DLL::DLL()
          {
              start=NULL;
          };