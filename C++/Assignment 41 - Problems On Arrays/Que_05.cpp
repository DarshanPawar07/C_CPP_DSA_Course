
      /* Que 5 - Define a function to calculate sum of all the elements of an array. */

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
                        int sum_of_elements();

              };

     int Array::sum_of_elements()
               {  
                  int sum=0;

                  for(int i=0;i<=last_index;i++)

                      {  
                          sum=sum+p[i];
                          
                      }
                   
                   return sum;
                   
               }