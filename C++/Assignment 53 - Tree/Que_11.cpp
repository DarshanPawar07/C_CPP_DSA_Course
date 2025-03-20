
        /* Que 11 - In question 1, define a copy constructor to implement deep copy. */
        
        #include<iostream>
        using namespace std;

        struct node
          {
               int item;
               node *left;
               node *right;
          };
        
        class BST
          {
                private:
                    node *root;
                
                public:
                  BST() ;
          };
        
        BST::BST()
           {
               
           }
