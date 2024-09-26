
      /* Que 8 - Define a function to remove duplicate elements in the array. */

      #include<iostream>
      #include<stdio.h> //incomplete
      using namespace std;

      class Array
              {    
                   private:
                         int capacity;
                         int last_index;
                         int *p;
                   
                   public:
                        void duplicate();

              };

     void Array::duplicate()
               {  
                  

                  for(int i=0;i<=last_index;i++)
                        {  
                             for(int j=0;i<=last_index;i++)
                                
                                {
                                    if(p[i]==p[j])
                                    {
                                        cout<<"There Exist Duplicate Of"<<p[j]<<"At Index"<<i<<"&"<<j;
                                    }

                                    else 
                                       cout<<"No Duplicate Element Found";
                                }
                        }

                 
                   
                   
               }