
         /* Que - Define a class Complex with instance variables a and b to store real and imaginary 
                  part of a complex number. Provide setData() method with formal arguments with the 
                  name a and b, to set the values of instance variables. Also define showData() 
                  method to display instance member variable values
        */


       #include<iostream>
       using namespace std;

       class complex
            {  
                 private:
                       
                       int a,b;

                public:
                     void set_data(int a,int b);
                     void display_data();
                          

                     
            };

        void complex::set_data(int a,int b)
              {
                   this->a=a;
                   this->b=b;
              }
              
        void complex::display_data()
             {
                cout<<" a = "<<a<< " b = "<<b;
             }

       
       int main()
             {
                  complex c1,c2;

                  c1.set_data(1,2);
                  c1.display_data();

                  return 0;
             }