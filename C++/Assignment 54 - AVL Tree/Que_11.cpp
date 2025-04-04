
        /* Que 11 - In question 1, define destructor to release memory. */
        
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
                    ~AVL();
          };
        
        AVL::~AVL()
           {
                while(root!=NULL)
                  {
                    Delete(root->item);
                  }
           }

