
        /* Que 9 - In question 1, define a method to search an item in the BST */
        
        
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
                   node* search(int data);
          };
       
        node* BST::search(int data)
           {
                   node *ptr;
                   ptr=root;

                   while(ptr!=NULL)
                     {
                           if(ptr->item==data)
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