
        /* Que 8 - In question 1, define preorder traversal */
        
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
                   void preorder();
                   void rec_preorder(node *ptr);
          };
        
        void rec_preorder(node *ptr)
          {
               while(ptr!=NULL)
                  {   
                      cout<<ptr->item;
                      cout<<ptr->height;
                      rec_preorder(ptr->left);
                      rec_preorder(ptr->right);
                  }
          }
        
        void AVL::preorder()
          {
             rec_preorder(root);
          }
