
      /* Que 2 - Define a function to find the greatest element in the array */

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
                        int find_greatest();

              };

     int Array::find_greatest()
               {
                  for(int i=1;i<=last_index;i++)
                      {
                          if(p[i]>p[0])
                          {
                            
                            int temp=p[0];
                            p[0]=p[i];
                            p[i]=temp;

                          }
                      }

                   return p[0];

                   
               }