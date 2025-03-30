
        /* Que 7 - In question 1, define a method to delete an element from the tree. */
        
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
                   void Delete(int data);
          };
       
       void Delete(int data)
        {
          
        }