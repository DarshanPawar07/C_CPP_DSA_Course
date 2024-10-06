   
       /* Que 7 - In question 1, define a method to append a new element in the array*/

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
                     void append(int value); //append means last mei ek element add krna
                     bool is_full();
                
                  protected:
                     void doubleArray();


          };

        void DynArray::doubleArray()
            {
                 int *temp;
                 
                 temp=new int [capacity*2];
                 capacity=capacity*2;

                 for(int i=0;i<=last_index;i++)
                     {
                        temp[i]=p[i];
                     }

                 delete []p;
                 p=temp;

                 capacity=capacity*2;

                 delete []temp;
                 temp=NULL;
                    
            }
         bool DynArray::is_full()
            {    
                 if(last_index==capacity-1)
                  return true;
                 
                 else if(last_index==-1)
                 return false;

            }

        void DynArray::append(int value)
            {    
               
                    if(is_full())
                     doubleArray();
                    
                    last_index++;
                    p[last_index]=value;
                
                
                
               
            }