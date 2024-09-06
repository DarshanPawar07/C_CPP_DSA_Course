
        /* Que-2 - In question 1, define a parameterised constructor to create an array of specified size. */

        #include<iostream>
        using namespace std;

        class array 
        {
             private:  
                 int capacity;
                 int last_index;
                 int *p;
             
             public:
                 array(int s)
                 {
                     p= new int[s];
                 }
                 
        };
