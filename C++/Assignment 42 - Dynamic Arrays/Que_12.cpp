   
       /* Que 12 - In question 1, define a method to get element at specified index. */

       #include<stdio.h>
       #include<iostream>  
       using namespace std;


       class DynArray
          {
               private:
                   int capacity;
                   int last_index;
                   int *p;
                
                public:
                     int get_element(int); 

          };

        int DynArray::get_element(int index)
            {    
                try
                {
                    if(index<0 || index>last_index)
                    throw 1;

                    return p[index];

                }
                
                catch(int e)
                {
                    if(e==1)
                    cout<<"Invalid Index";
                }
                
                 
                 
            }