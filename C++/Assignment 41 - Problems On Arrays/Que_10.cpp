
      /* Que 10 - Define a function to swap elements with specified indices in the array */

      #include<iostream>
      #include<stdio.h>
      using namespace std;

      class Array
              {    
                   private:
                         int capacity;
                         int last_index;
                         int *p;
                   
                   public:
                        void swap_elements(int,int);

              };

     void Array::swap_elements(int i ,int j)
               {
                   int temp =p[i];

                   p[i]=p[j];
                   p[j]=temp;
                      
               }