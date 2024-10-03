   
       /* Que 4 - In question 1, define a method halfArray() to decrease the size of the array by half
                  of its size*/

       #include<stdio.h>
       #include<iostream>
       using namespace std;


       class DynArray
          {
               private:
                   int capacity;
                   int last_index;
                   int *p;
                
                protected:
                     void halfArray();

          };

        void DynArray::halfArray()
            {
                 int *temp;
                 temp=new int [capacity/2];
                 capacity=capacity/2;

                 for(int i=0;i<=last_index;i++)
                     {
                        temp[i]=p[i];
                     }

                 delete []p;
                 p=temp;

                 capacity=capacity/2;

                 delete []temp;
                 temp=NULL;
                    
            }