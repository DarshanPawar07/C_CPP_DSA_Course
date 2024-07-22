        
        /* Que - Define a class Complex with appropriate instance variables and member functions.
                 Define following operators in the class:
                 1. +
                 2. -
                 3. *
                 4. == 

        */

       #include<iostream>
        using namespace std;
            
            class complex 
                   {
                        private :
                               int a,b;

                        public:
                            void set_data(int,int);
                            void display_data();

                            complex operator+(complex);
                            complex operator-(complex);
                            complex operator*(complex);
                            bool operator==(complex);
                   };
            
                 void complex:: set_data(int x , int y)
                              {
                                   a=x;
                                   b=y;
                              }
                 void complex::display_data()
                                 {
                                         cout<<" a = "<<a<< " b="<<b;
                                         cout<<endl;
                                 }

                 complex complex:: operator+(complex c5)
                              {
                                   complex c;
                                   c.a=a+c5.a;
                                   c.b=b+c5.b;
                                   return c;
                              }
                 complex complex:: operator-(complex c5)
                              {
                                   complex c;
                                   c.a=a-c5.a;
                                   c.b=b-c5.b;
                                   return c;
                                     
                              }
                 complex complex:: operator*(complex c5)
                              {
                                   complex c;
                                   c.a=a*c5.a;
                                   c.b=b*c5.b;
                                   return c;
                                     
                            }

                 bool complex:: operator==(complex c5)
                             {
                                   if(a==c5.a && b==c5.b)
                                      return true;
                                   else 
                                       return false;
                             }

          int main()
                 {
                      complex c1,c2,c3;

                      c1.set_data(1,2);
                      c2.set_data(3,4);

                      c3 = c1+c2;                     // c3 = c1.operator+(c2)
                      c3.display_data();    

                      c3= c1-c2;                     //c3= c1.operator-(c2);
                      c3.display_data();

                      c3=c1*c2;                     //c3=c1.operator*(c2);
                      c3.display_data();

                      bool c4=c1==c2;               // c3= c1.operator==(c2);
                      cout<<c4;                     //it will return /print 0 for false and 1 for true

                 }