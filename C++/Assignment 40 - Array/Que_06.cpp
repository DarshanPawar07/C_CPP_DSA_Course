
        /* Que-6 - In question 1, define a method to edit an element at specified index. */

        #include<iostream>
        using namespace std;

        class array 
        {
             private:  
                 int capacity;
                 int last_index;
                 int *p;
             
             public:
                 int edit(int index,int value)
                     {  
                        try
                        {
                            if(index<0 || index>last_index)
                            throw 1;

                             p[index]=value;

                        }

                        catch(int e)
                        {
                            if(e==1)
                            cout<<"Invalid Index";
                        }
                        
                     }

        };
