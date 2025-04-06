
        /* Que 12 - In question 1, define a search method to find the element in the tree. */
        
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
                    node* search(int);
          };
       
        node* AVL::search(int data)
          {
                node *ptr;
                
                ptr=NULL;
                while(ptr!=NULL)
                  {
                       if(data=ptr->item)
                         {
                            return ptr;
                            break;
                         }
                      
                       if(data>ptr->item)
                          {
                            ptr=ptr->right;
                          }
                       
                       else
                         {
                            ptr=ptr->left;
                         }
                  }
          }