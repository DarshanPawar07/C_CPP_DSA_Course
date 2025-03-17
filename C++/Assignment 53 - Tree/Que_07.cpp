
        /* Que 7 - In question 1, define a method for postorder traversing of BST */
        
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
                   void postorder();
                   void recpostorder(node *ptr);
          };
   
           void BST::postorder()
              {
                  recpostorder(root);
              }

           void BST::recpostorder(node *ptr)
              { 
                  if(ptr!=NULL)
                    {
                        recpostorder(ptr->left);
                        recpostorder(ptr->right);
                        cout<<ptr->item;
                    }
              }