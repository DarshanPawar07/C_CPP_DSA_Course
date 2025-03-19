
        /* Que 10 - In question 1, define a destructor to release memory of all the nodes of BST. */
        
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
                  ~BST();
                   void del(int );
          };
        
        BST::~BST()
            {
                while(root!=NULL)
                   {
                      del(root->item);
                   }
            }
       void BST::del(int data)
           {
                node *ptr,*parptr;   // ptr will point to that node which i have to delete

                while(ptr!=NULL)  // code for finding ptr and parptr
                   {
                        if(ptr->item==data)
                          {
                             break;
                          }
                        
                        if(data>ptr->item)
                          { 
                            parptr=ptr;
                            ptr=ptr->right;
                          }
                        
                        else if(data<ptr->item)
                          {
                              parptr=ptr;
                              ptr=ptr->right;
                          }
                   }                       /* after this code ptr will point to that node which i have to
                                              delete and parptr will point to parent of ptr */

                node *successor,*par_successor;
                  successor=ptr->right;
                  par_successor=NULL;

                  while(successor->left!=NULL)
                    {
                        par_successor=successor;
                        successor=successor->left;
                    }
                  
                  if(root==NULL)
                    {
                        delete root;
                        root=NULL;
                    }
                  
                  if(par_successor==NULL && successor!=NULL)    // node to be deleted is root node
                     {
                            if(ptr->left && ptr->right == NULL)   // no child of root node
                               {
                                     delete ptr;
                                     root=NULL;
                               }
                            
                            else if(ptr->right && ptr->left !=NULL) // two childs of root node
                               {
                                    ptr->item=successor->item;
                                    delete successor;
                                    par_successor->left=successor->right;
                               }
                            
                             else      // root node has one child node
                               {
                                      if(ptr->left!=NULL)
                                         {
                                             root=ptr->left;
                                             delete ptr;

                                         }
                                      else
                                        {
                                           root=ptr->right;
                                           delete ptr;
                                        }
                               }
                     }
                  
                  else    // node to be deleted is not root node 
                    {
                           if(ptr->left && ptr->right ==NULL)   // NO CHILD
                              {
                                      if(parptr==ptr->left)
                                        {
                                             delete ptr;
                                             parptr->left=NULL;
                                        }
                                      
                                      else 
                                        {
                                            delete ptr;
                                            parptr->right=NULL;
                                        }
                              }
                          
                          else if(ptr->left && ptr->right !=NULL)  // two childs
                              {
                                    ptr->item=successor->item;
                                    par_successor->left=successor->right;
                                     delete successor;
                              }
                          
                          else   // one child
                            {
                                  if(ptr->left!=NULL)
                                    {
                                        parptr->left=ptr->left;
                                        delete ptr;
                                    }
                                  
                                  else 
                                    {
                                       parptr->right=ptr->right;
                                       delete ptr;
                                    }
                            }
                    }


           } 