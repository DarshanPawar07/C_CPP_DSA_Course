   
       /* Que 9 - In question 1, define a method to edit an element at specified index. */

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
                     void edit(int,int ); 

          };

        void DynArray::edit(int value,int index)
            {    
                 try
                {
                    if(index<0 || index>last_index)
                    throw 1;

                      p[index]=value ;

                }
                
                catch(int e)
                {
                    if(e==1)
                    cout<<"Invalid Index Or Array Is Empty";
                }
                
             }