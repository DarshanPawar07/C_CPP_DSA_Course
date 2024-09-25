
      /* Que 7 - Define a function to rotate an array towards right by one position */

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
                        void rotate_array();

              };

     void Array::rotate_array()
               {  
                  int sum=0;
                  
                  int temp =p[last_index] ;

                  for(int i=last_index-1;i>=0;i--)

                      {  
                          p[i+1]=p[i];
                          
                      }

                 p[0]=p[last_index];
                   
                   
               }