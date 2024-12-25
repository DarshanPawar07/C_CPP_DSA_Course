
      /* Que 9 - In question 1, define a copy constructor to implement deep copy.*/
      
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
                Stack(Stack&);
                 
        };
      
       Stack::Stack(Stack& s1)
          {
               capacity=s1.capacity;
               top=s1.top;

               ptr=new int [capacity];
               
               for(int i=0;i<=top;i++)
                  {
                     ptr[i]=s1.ptr[i];
                  }
         }