
        /* Que - Define a class Complex to represent a complex number. Declare instance member
                 variables to store real and imaginary part of a complex number, also define 
                 instance member functions to set values of complex number and print values of complex number */
        

        #include<iostream>
        using namespace std;


        class complex
                  {
                       private:
                              int a;
                              int b;
                       
                       public:
                              void set_values(int x,int y)
                                          {
                                                a=x;
                                                b=y;
                                          }
                              
                              
                              
                              int display_number()
                                      {
                                         cout<< "Real= " <<a<< " Imaginary=" <<b ;
                                      }
                              
                              

                   };