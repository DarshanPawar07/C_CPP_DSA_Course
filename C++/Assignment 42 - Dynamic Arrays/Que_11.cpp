   
       /* Que 11 - In question 1, define a method to check if the array is full by returning true or false. */

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
                     bool is_full( ); 

          };

        bool DynArray::is_full()
            {    
                 if(last_index==capacity-1)
                  return true;
                 
                 else if(last_index==-1)
                 return false;

                 
                 
            }