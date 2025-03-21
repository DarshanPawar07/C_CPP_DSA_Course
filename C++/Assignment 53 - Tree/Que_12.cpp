
        /* Que 12 - In question 1, define a copy assignment operator to implement deep copy. */
        
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
                    BST&  operator=(BST&);
          };
        
         BST& BST:: operator=(BST&)
            {

            }