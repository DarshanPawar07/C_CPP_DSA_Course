
        /* Que 5 - In question 1, define a method for preorder traversing of BST */
        
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
                    void preorder();
                    void recpreorder(node *ptr);
          };
        
        void BST::preorder()
           {
                recpreorder(root);
           }
        
         void BST::recpreorder(node *ptr)
            {
                 if(ptr!=NULL)
                  {   
                      cout<<root->item;
                      recpreorder(ptr->left);
                      recpreorder(ptr->right);
                  }
            }