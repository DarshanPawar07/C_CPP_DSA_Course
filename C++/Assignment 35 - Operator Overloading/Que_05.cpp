        
        /* Que - Define a class matrix to represent 3x3 matrix. Provide appropriate instance methods. 
                 Also define operator +, operator -, operator * to perform addition, subtraction and
                 multiplication operations respectively.

                 Consider following class Numbers
                 class Numbers
                       {
                            int x,y,z;
                            public:
                            // methods
                       };
                    
                    Overload the operator unary minus (-) to negate the numbers.
        */

       
       #include<iostream>
       using namespace std;
        class matrix
              {
                   private:
                          int a11,a12,a13,a21,a22,a23,a31,a32,a33;
                    
                    public:
                            void set_data(int,int,int,int,int,int,int,int,int);
                            void display_data();
                            matrix operator+(matrix);
                            matrix operator-(matrix);
                            matrix operator*(matrix);

                               
              };
        
         void matrix::set_data(int s,int t,int u,int v,int w,int x,int y,int z,int r)
                    { 
                        a11=s;a12=t;a13=u;a21=v;a22=w;a23=x;a31=y;a32=z;a33=r;

                    }

         void matrix:: display_data()
                    {
                       cout<<a11<<a12<<a13;
                       cout<<endl;
                       cout<<a21<<a22<<a23;
                       cout<<endl;
                       cout<<a31<<a32<<a33;

                    }

         matrix matrix::operator-(matrix m)
                       {
                          matrix temp;
                           
                           temp.a11=a11-m.a11;  temp.a12=a12-m.a12;   temp.a13=a13-m.a13;
                           temp.a21=a21-m.a21;  temp.a22=a22-m.a22;   temp.a23=a23-m.a23;
                           temp.a31=a31-m.a31;  temp.a32=a32-m.a32;   temp.a33=a33-m.a33;

                       }

         matrix matrix:: operator+(matrix m)
                        {
                            matrix temp;
                           
                           temp.a11=a11+m.a11;  temp.a12=a12+m.a12;   temp.a13=a13+m.a13;
                           temp.a21=a21+m.a21;  temp.a22=a22+m.a22;   temp.a23=a23+m.a23;
                           temp.a31=a31+m.a31;  temp.a32=a32+m.a32;   temp.a33=a33+m.a33;

                           return temp;
                        }

         matrix matrix:: operator*(matrix m)
                                 
                        {
                            matrix temp;
                           
                           temp.a11=a11*m.a11;  temp.a12=a12*m.a12;   temp.a13=a13*m.a13;
                           temp.a21=a21*m.a21;  temp.a22=a22*m.a22;   temp.a23=a23*m.a23;
                           temp.a31=a31*m.a31;  temp.a32=a32*m.a32;   temp.a33=a33*m.a33;

                           return temp;
                        }
            
        int main()
                 {
                     matrix m1,m2,m3;
                     m1.set_data(1,2,3,4,5,6,7,8,9);
                     m2.set_data(1,2,3,4,5,6,7,8,9);

                     m3=m1+m2;
                     m3.display_data();

                     m3=m1-m2;
                     m3.display_data();

                     m3=m1*m2;
                     m3.display_data();
                 }


        