
      /* Que 4 - Define a function to search an element in the array */

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
                        void search(int);

              };

     void Array::search(int value)
               {
                  for(int i=0;i<=last_index;i++)
                      {
                          if(p[i]==value)
                          {
                            cout<<"Yes The Element"<<value<<"Exits In Array , At Index"<<i;
                          }

                          else
                             cout<<"The Element Does Not Exist In The Array";
                      }
                   
                   
               }