   
       /* Que 15 - In question 1, define a method to find an element in the array. Return index if the element 
                  found, otherwise return -1. */

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
                     int find_element(int); 

          };

         int  DynArray::find_element(int value)
            {      
                   try
                   {
                        if(last_index==-1)
                        throw 1;

                        for(int i=0;i<=last_index;i++)
                      {
                          if(p[i]==value)
                          return i;

                          else
                           return -1;
                      }

                   }
                   
                   catch(int e)
                   {  
                      if(e==1)
                       cout<<"Array Is Empty";
                     
                   }
                   
                   
            } 