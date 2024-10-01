   
       /* Que 3 - In question 1, define a parameterised constructor to create an array of specified size. */

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
                  DynArray(int);

          };
       
        DynArray:: DynArray(int size)
           {   

                capacity=size;
                last_index=-1;
              
                if(p!=NULL)
                 {
                    delete []p;
                 }
                p= new int [size];
           }
           