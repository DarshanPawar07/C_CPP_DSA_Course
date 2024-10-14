   
       /* Que 14 - In question 1, define a destructor to deallocate the memory of array. */

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
                     ~DynArray(); 

          };

         DynArray:: ~DynArray()
            {    
                 delete []p;
            }