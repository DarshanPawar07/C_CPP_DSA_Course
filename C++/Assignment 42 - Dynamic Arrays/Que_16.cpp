   
       /* Que 16 - In question 1, define a copy constructor to implement deep copy */

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
                    DynArray(DynArray&) ; 

          };

         DynArray::DynArray(DynArray&darr)
            {    
                     capacity=darr.capacity;
                     last_index=darr.last_index;

                     p=new int [capacity];

                     for(int i=0;i<=last_index;i++)
                        {
                            p[i]=darr.p[i];
                        }
            }   