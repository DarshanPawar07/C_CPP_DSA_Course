
      /* Que 1 - Define a function to find the smallest element in the array */

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
                        int find_smallest();

              };

     int Array::find_smallest()
               {
                  for(int i=1;i<=last_index;i++)
                      {
                          if(p[i]<p[0])
                          {
                            p[0]=p[i];
                          }
                      }
                   
                   return p[0];
               }