
        /* Que 3 - In question 1, define a method to check if the tree is empty. */
        
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
                    bool is_empty();
          };
        
        bool BST::is_empty()
           {
                 if(root==NULL)
                   {
                      return true;
                   }
                 else
                   {
                      return false;
                   }
           }
