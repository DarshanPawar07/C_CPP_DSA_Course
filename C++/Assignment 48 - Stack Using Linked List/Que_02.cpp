
      /* Que 2 - In question 1, define a parameterzied constructor to initialise member variables.*/
      
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
               Stack();
               Stack(int);
               void create_Stack(int);
                 
        };
    
    Stack::Stack()    // simple/ saadha constructor
       {
           capacity=0 ;
           top=-1;
           ptr=NULL;
       }

    Stack::Stack(int s)   // paramerterised constructor
       {
           capacity=s ;
           top=-1;
           ptr=new int[capacity];
       }
    
    
    
    void Stack::create_Stack(int s)
        {   
            if(ptr!=NULL)
               {
                  delete []ptr;
               }

            capacity=s;
            top=-1;
            ptr=new int[capacity];
        }