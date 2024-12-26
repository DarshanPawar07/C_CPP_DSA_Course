
      /* Que 10 - In question 1, define a copy assignment operator to implement deep copy. */
      
      #include<iostream>
      #include<stdio.h>
      using namespace std;

      class Stack
        {   
            private:
               int capacity;
               int top;
               int *ptr;

            public:
                Stack& operator=(Stack&);
                 
        };

        Stack& Stack::operator=(Stack& s1)
          {    

               if(ptr!=NULL)
                 {
                     delete []ptr;
                 }

               capacity=s1.capacity;
               top=s1.top;

               ptr=new int [capacity];
               
               for(int i=0;i<=top;i++)
                  {
                     ptr[i]=s1.ptr[i];
                  }
                
              return *this;
          }