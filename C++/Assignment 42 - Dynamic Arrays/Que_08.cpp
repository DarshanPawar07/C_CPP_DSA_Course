   
       /* Que 8 - In question 1, define a method to insert a new element at specified index*/

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
                     void insert(int ,int ); //append means last mei ek element add krna
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
        void DynArray::insert(int index ,int value)
            {    
                try
                {
                    if(index<0 || index>last_index)
                    throw 1;

                    if(is_full())
                       doubleArray();
                    
                     for(int i=last_index;i>=index;i++)
                        {
                            p[i+1]=p[i];
                        }

                     p[index]=value;
                     last_index++;

                }
                
                catch(int e)
                  {
                    if(e==1)
                    cout<<"Invalid Index Or Array Is Empty";
                  }
               
                 
            }