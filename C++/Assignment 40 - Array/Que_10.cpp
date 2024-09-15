
        /* Que-10 - In question 1, define a method to count number of elements present in the array. */

        #include<iostream>
        using namespace std;

        class array 
        {
             private:  
                 int capacity;
                 int last_index;
                 int *p;
               

             
             public:
                
                int count()
                   { 
                     return last_index;
                   }
        };
