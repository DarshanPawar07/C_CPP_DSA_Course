        
        /* Que - Consider the following class Array
                 class Array
                          {
                               int *p;
                               int size;
                               public:
                               // methods

                          }; 
                Define constructor to allocate an array of given size (size is given through parameter). 
                Define a subscript operator to access element at given index. Define destructor to deallocates 
                the memory of array.
        */

       #include<iostream>
       using namespace std;

       class array
                {
                        private:
                             int *p;
                             int size;

                        public:
                              void set_data();
                              void display_data(); 

                              array(int size)
                                     {
                                        p=new int [size];
                                     }
                              ~array()
                                    {
                                        delete []p;
                                    }

                              
                              
                }; 
