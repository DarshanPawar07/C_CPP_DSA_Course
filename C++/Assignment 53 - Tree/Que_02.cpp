
        /* Que 2 - In question 1, define a constructor to initialise root pointer with NULL */
        
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
                    BST();
          };
        
         BST::BST()
          {
               root=NULL;
          }
