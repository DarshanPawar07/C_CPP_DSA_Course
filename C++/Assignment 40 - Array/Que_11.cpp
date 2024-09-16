
        /* Que-11 - In question 1, define a destructor to deallocate the memory of array. */

        #include<iostream>
        using namespace std;

        class array 
        {
             private:  
                 int capacity;
                 int last_index;
                 int *p;
             
             public:
                 ~array()
                   {
                      delete []p;
                   }
                 
        };
