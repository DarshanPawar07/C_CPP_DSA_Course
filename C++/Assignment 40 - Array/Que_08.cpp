
        /* Que-8 - In question 1, define a method to check if the array is full by returning true or false. */

        #include<iostream>
        using namespace std;

        class array 
        {
             private:  
                 int capacity;
                 int last_index;
                 int *p;
             
             public:
             
               bool is_full()
                 {
                    if(capacity-1==last_index)
                        return true;

                    else 
                       return false;
                 }
                 
        };
