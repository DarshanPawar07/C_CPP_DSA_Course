
        /* Que - Define a class Matrix to represent a 3x3 order matrix. Provide appropriate methods and 
                  properties to the class. Also define following methods in the class:
                  1. Matrix add(Matrix)
                  2. Matrix sub(Matrix)
                  3. Matrix multiply(Matrix)
                  4. Matrix transpose()
                  5. bool is singular()
        
        
        
        */

        #include<iostream>
        using namespace std;

         class matrix
                    {
                        private :
                               int a11,a12,a13,a21,a22,a23,a31,a32,a33;

                         public:

                               void set_values(int, int ,int ,int,int,int,int,int,int);
                                    

                              void display();
                                     
                              matrix add(matrix);
                                    
                              matrix substract(matrix);
                                     
                              matrix multiply(matrix);
                                    
                              matrix transpose();
                                     
                                     
                                     
                                     
                    };

          void matrix:: set_values(int o, int p,int q,int r ,int s,int t,int u, int v,int w)
                              {
                                  a11= o;
                                  a12=p;
                                  a13=q;
                                  a21=r;
                                  a22=s;
                                  a23=t;
                                  a31=u;
                                  a32=v;
                                  a33=w;
                              }

          void  matrix::display()
                         {
                              cout<<a11<<a12<<a13;
                              cout<<a21<<a22<<a23;
                              cout<<a31<<a32<<a33;   
                              cout<<endl;          
                         }
                                
          matrix matrix:: add(matrix d)
                         {
                             matrix f;

                              f.a11=a11+d.a11; 
                              f.a12=a12+d.a12; 
                              f.a13=a13+d.a13;       
                              f.a21=a21+d.a21; 
                              f.a22=a22+d.a22; 
                              f.a23=a23+d.a23; 
                              f.a31=a31+d.a31; 
                              f.a32=a32+d.a32; 
                              f.a33=a33+d.a33; 
                         }
          matrix matrix::substract(matrix d)
                         {   
                              matrix f;
                              f.a11=a11-d.a11; 
                              f.a12=a12-d.a12; 
                              f.a13=a13-d.a13;       
                              f.a21=a21-d.a21; 
                              f.a22=a22-d.a22; 
                              f.a23=a23-d.a23; 
                              f.a31=a31-d.a31; 
                              f.a32=a32-d.a32; 
                              f.a33=a33-d.a33;   
                          }

          matrix matrix::multiply(matrix d)
                         {
                              matrix f;

                              f.a11=a11*d.a11; 
                              f.a12=a12*d.a12; 
                              f.a13=a13*d.a13;       
                              f.a21=a21*d.a21; 
                              f.a22=a22*d.a22; 
                              f.a23=a23*d.a23; 
                              f.a31=a31*d.a31; 
                              f.a32=a32*d.a32; 
                              f.a33=a33*d.a33;           
                         }
                              
          matrix matrix:: transpose()
                         {
                                        
                         }


          int main()
                   {
                      matrix m1,m2,m3,m4,m5,m6;

                      m1.set_values(1,2,3,1,2,3,1,2,3);
                      m2.set_values(1,2,3,1,2,3,1,2,3);

                      m3=m1.add(m2);
                      m4=m1.substract(m2);
                      m5=m1.multiply(m2);

                      m3.display();
                      m4.display();
                      m5.display();

                      return 0;



                   }