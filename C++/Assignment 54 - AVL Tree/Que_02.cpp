
        /* Que 2 - In Question 1, define a method createGraph() to create and store adjacent node information.*/
        
        #include<iostream>
        using namespace std;
        
        class Graph
          {
                private:
                     int v_count,e_count;
                     int **adj;
                
                public:
                  void create_graph(int,int);
          };
         
         void Graph::create_graph(int v_no,int e_no)
           {      
                  v_count=v_no;
                  e_count=e_no;

                  adj=new int *[v_count];  //adj will pint to the array of pointers
                  
                  for(int i=0;i<v_count;i++)
                    {
                          adj[i]=new int[v_count];  // each block of array of pointer will have an new array
                    }
                 
                  for(int i=0;i<v_count;i++)
                    {
                        for(int j=0;j<v_count;j++)
                           {
                              adj[i][j]=0;              // poore 2D matrix mei pehele zero likh lenge
                           }
                    }
               
                  for(int k=0;k<e_count;k++)
                     {    
                         int u,v;
                         cout<<"Enter The address (aij) of the node which has edges";
                         cin>>u>>v;
                         
                         adj[u][v]=1;
                         adj[v][u]=1;
                     }

           }
          
