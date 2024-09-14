
        /* Que-9 - In question 1, define a method to get element at specified index.*/

        #include<iostream>
        using namespace std;

        class array 
        {
             private:  
                 int capacity;
                 int last_index;
                 int *p;
             
             public:
                 int get_element(int i)
                   {
                      return p[i];
                   }
                 
        };
