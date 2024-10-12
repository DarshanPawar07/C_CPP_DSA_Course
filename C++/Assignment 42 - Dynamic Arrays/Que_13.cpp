   
       /* Que 13 - In question 1, define a method to count number of elements present in the array. */

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
                     int count(); 

          };

        int DynArray::count()
            {    
                 return last_index+1;

                 
            }