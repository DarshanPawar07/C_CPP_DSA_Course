
        /* Que 9 - In question 1, define postorder traversal*/
        
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
                     void rec_postorder(node *ptr);
                     void postorder();
          };
        
         void AVL::rec_postorder(node *ptr)
            {
                 while(ptr!=NULL)
                   {
                       rec_postorder(ptr->left);
                       rec_postorder(ptr->right);
                       cout<<ptr->item;
                       cout<<ptr->height;
                   }
            }
         
          void AVL:: postorder()
            {
               rec_postorder(root);
            }

