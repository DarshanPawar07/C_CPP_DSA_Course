
        /* Que-7 - In question 1, define a method to delete an element at specified index */

        #include<iostream>
        using namespace std;

        class array 
        {
             private:  
                 int capacity;
                 int last_index;
                 int *p;
             
             public:
                int deletee(int index,int value)
                     {   
                        try
                        {
                            if(last_index==-1)
                            throw 1;
                            
                            for( int j=index;j<last_index;j++)
                                {
                                     p[j]=p[j+1];
                                }
                                
                             p[index]=value;
                        }

                        catch(int e)
                          {
                              if(e==1)
                              cout<<"Array Is Empty";
                          }
                        
                     }
                 
        };
