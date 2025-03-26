
        /* Que 3 - In question 1, define a method to print graph matrix. */
        
         #include<iostream>
        using namespace std;
        
        class Graph
          {
                private:
                     int v_count,e_count;
                     int **adj;
                
                public:
                   void print_matrix();
          };
        
        void Graph::print_matrix()
           {
                 for(int i=0;i<v_count;i++)
                    {  
                        cout<<endl;
                        for(int j=0;j<v_count;j++)
                           {
                                cout<<adj[i][j]<<" ";
                           }
                    }
           }
