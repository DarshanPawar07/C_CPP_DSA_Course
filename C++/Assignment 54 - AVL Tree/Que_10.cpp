
        /* Que 10 - In question 1, define inorder traversal. */
        
        #include<iostream>
        using namespace std;

        struct node
          {
               int item;
               node *left;
               node *right;
               int height;
          };
        
        class AVL
          {
                private:
                    node *root;
                
                public:
                   void rec_inorder(node*);
                   void inorder();
          };
        
        void AVL::rec_inorder(node*ptr)
           {
               while(ptr!=NULL)
                 {
                      rec_inorder(ptr->left);
                      cout<<ptr->item;
                      cout<<ptr->height;
                      rec_inorder(ptr->right);
                 }
           }
        
        void AVL::inorder()
          {
               rec_inorder(root);
          }

