
        /* Que 4 - In question 1, define a method to insert a new element in the BST */
        
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
                   void insert(int);
          };
        
        void BST::insert(int data)
          {
                 if(root==NULL)
                 {
                     node *n;
                     n=new node;
                     n->item=data;
                     n->left=NULL;
                     n->right=NULL;
                     root=n;
                 }
                
                
                else  
                  {    
                       bool flag=true;
                       node *ptr;
                       ptr=root;

                        while(flag)
                           {
                                if(data==root->item)
                                   {
                                     break;
                                   }
                      
                                if(data>root->item)   //enter in right subtree
                                    {   
                                        if(root->right==NULL)
                                            {
                                                node *n=new node;
                                                n->item=data;
                                                n->left=NULL;
                                                n->right=NULL;
                                                ptr->right=n;
                                                flag=false;
                                            }
                                        else
                                           {
                                              ptr=ptr->right;
                                           }
                                    } 
                                
                                else   // enter in left subtree
                                    {     
                                          if(ptr->left==NULL)
                                               {
                                                   node *n=new node;
                                                   n->right=NULL;
                                                   n->left=NULL;
                                                   n->item=data;
                                                   ptr->left=n;
                                                   flag=false;
                                              }

                                          else
                                              {
                                                 ptr=ptr->left;
                                              }
                                     }
                            }
                  }
          }