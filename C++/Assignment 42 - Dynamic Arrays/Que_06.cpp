   
       /* Que 5 - In the question 1, add a method to check whether an array is empty or not by returning True or False */

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
                     bool is_empty();

          };

        bool DynArray::is_empty()
            {
                if(last_index==-1)
                 return true;

                 else if(last_index==capacity-1)
                  return false;
                 
            }