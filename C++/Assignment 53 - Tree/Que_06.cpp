
        /* Que 6 - . In question 1, define a method for inorder traversing of BST */
        
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
                    void inorder();
                    void recinorder(node* ptr);
          };
        
          void BST::inorder()
             {
                recinorder(root);
             }

          void BST::recinorder(node* ptr)
             {
                 if(ptr!=NULL)
                   {
                       recinorder(ptr->left);
                       cout<<ptr->item;
                       recinorder(ptr->right);
                   }
             }