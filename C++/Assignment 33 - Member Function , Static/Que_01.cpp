
        /* Que - Define a class Complex to represent a complex number with instance variables a and b to 
                 store real and imaginary parts. Also define following member functions
                   1. void setData(int,int)
                   2. void showData()
                   3. Complex add(Complex)
                   4. Complex subtract(Complex)
                   5. Complex multiply(Complex) */


        #include<iostream>
        using namespace std;

         class complex 
                     {

                         private :
                                int a , b ;
                         
                         public:
                              void set_data(int x, int y);
                              void show_data();
                              complex add(complex);
                              complex substract(complex);
                              complex multiply(complex);

                              
                         

                               
                    };

       void complex::set_data(int x, int y)
                            {
                                a=x;
                                b=y;
                            }

        void complex::show_data()
                           {
                                cout<<"Real="<<a<<" Imaginary="<<b;
                                cout<<endl;
                           }

        complex complex:: add(complex s)
                            {
                                 complex r;
                                 r.a=a+s.a;
                                 r.b=b+s.b;
                                 return r;
                            }
                                
        complex complex:: substract(complex n)
                            {
                                 complex m;        
                                 m.a=a-n.a;
                                 m.b=b-n.b;
                                 return m; 
                            }
        complex complex:: multiply(complex x)
                            {
                                  complex y;
                                  y.a=a*x.a;
                                  y.b=b*x.b;
                                  return y;                    
                            }
       
       int main()
               {

                     complex c1,c2,c3,c4,c5;
                     c1.set_data(5,6);
                     c2.set_data(4,7);

                     c3= c1.add(c2);
                     c4=c1.substract(c2);
                     c5=c1.multiply(c2);

                     c3.show_data();
                     c4.show_data();
                     c5.show_data();

               }