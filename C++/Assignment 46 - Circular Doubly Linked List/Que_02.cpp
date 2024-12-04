
       /* Que 2 - In question 1, define a constructor to initialise start pointer with NULL */

       #include<iostream>
       using namespace std;

       struct node
          {
               int item;
               node *prev;
               node *next;
          };
        
        class CDLL
           {
                private:
                    node *start;
                
                 public:
                    CDLL();
                    
           };
        
        CDLL::CDLL()
            {
                start=NULL;
            }