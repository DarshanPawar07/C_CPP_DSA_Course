
      /* Que 3 - In question 1, define a method to push a new element on to the Stack. */
      
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
                void push(int);   // same as insert data 
                 
        };
    
     void Stack::push(int data)   // append ho rha hai mtlb last mei add ho rha hai
         {   
             
               if(top+1==capacity)     // array is full
                 {
                     cout<<"Stack Overflow";
                 }
               
               
                else 
                   {    top++; 
                        ptr[top]=data;
                   }
         }