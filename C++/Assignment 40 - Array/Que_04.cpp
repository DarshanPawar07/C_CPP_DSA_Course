
        /* Que-4 - In question 1, define a method to append a new element in the array */

        #include<iostream>
        #include<stdio.h>
        using namespace std;

        class array 
        {
             private:  
                 int capacity;
                 int last_index;
                 int *p;
             
             public:
                int append(int v)    //add a value to last index
                 {  
                     try
                     {
                           if(capacity==last_index+1)
                           throw 1;
                            
                            last_index++;
                            p[last_index]=v ;
                            
                     }

                     catch(int e)
                     {
                        if(e==1)
                        {
                           cout<<"array is full";
                        }
                     }
                   
                   
                 }
                 
        };
