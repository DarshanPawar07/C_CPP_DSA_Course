
      /* Que 6 - Define a function to calculate average of all the elements of an array.. */

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
                        int average_of_elements();

              };

     int Array::average_of_elements()
               {  
                  int sum=0;

                  for(int i=0;i<=last_index;i++)

                      {  
                          sum=sum+p[i];
                          
                      }
                   
                   int average=sum/last_index;
                   
                   return average;
               }