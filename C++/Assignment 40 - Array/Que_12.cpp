
        /* Que-12 - In question 1, define a method to find an element in the array. Return index if the element found, otherwise return -1. */

        #include<iostream>
        using namespace std;

        class array 
        {
             private:  
                 int capacity;
                 int last_index;
                 int *p;
             
             public:
                 int find_element(int v)
                   {
                        for(int i=0;i<capacity;i++)
                          {
                            if(p[i]==v)
                            {
                                return i;
                            }
                            else
                            {
                                return -1;
                                   
                            }
                          }
                   }
        };
