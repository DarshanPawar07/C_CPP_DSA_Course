
      /* Que 1 - =Define a function to find the second largest element in the array. */

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
                        int find_second_greatest();

              };

     int Array::find_second_greatest()
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
                      
                 for(int i=2;i<=last_index;i++)
                     {  
                          if(p[i]>p[1])
                             {
                                  int temp=p[1];
                                  p[1]=p[i];
                                  p[i]=temp;
                             } 
                     }

                   return p[1];

               }