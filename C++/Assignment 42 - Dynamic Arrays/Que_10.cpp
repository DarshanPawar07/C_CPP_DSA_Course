   
       /* Que 10 - In question 1, define a method to delete an element at specified index. */

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
                     void del(int ); 

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

        void DynArray::del(int index)
            {     
                 try
                {
                    if(index<0 || index>last_index)
                    throw 1;

                     for(int i=index;i<=last_index;i++)
                     {
                         p[i]=p[i+1];
                     }
                       last_index--;

                     if(capacity>1 && last_index+1<capacity*2)
                      halfArray();

                }
                
                catch(int e)
                {
                    if(e==1)
                    cout<<"Invalid Index";
                }

            }