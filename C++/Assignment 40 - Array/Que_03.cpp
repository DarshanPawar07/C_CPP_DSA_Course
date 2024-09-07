
        /* Que-3 - In the question 1, add a method to check whether an array is empty or not by returning True
                   or False */

        #include<iostream>
        using namespace std;

        class array 
        {
             private:  
                 int capacity;
                 int last_index;
                 int *p;
             
             public:
                bool is_empty()
                {
                    if(last_index==-1)
                    return true;

                    else
                    return false;
                }
        };
