
        /*  Que -  Define a class Complex and overload following operators as a friend.
                   1. +
                   2. -
                   3. *  
        */
         

         #include<iostream>
          using namespace std;

          class complex
          
                {
                        private:
                            int a , b ;
                        
                        public:
                            friend complex operator+(complex,complex);
                            friend complex operator-(complex,complex);
                            friend complex operator*(complex,complex);

                            void set_data(int , int);
                            void display_data();

                };


            void complex::set_data(int x, int y)
                         {
                             a=x;
                             b=y;
                         }
            
            void complex::display_data()
                         {
                             cout<<" a="<<a<< " b="<<b;
                             cout<<endl;
                             
                         }

             complex operator+(complex c,complex c0)
                         {
                             complex temp;

                             temp.a=c.a+c0.a;
                             temp.b=c.b+c0.b;

                             return temp;
                         }

            complex operator-(complex c,complex c0)
                         {
                              complex temp;

                              temp.a=c.a-c0.a;
                              temp.b=c.b-c0.b;

                              return temp;
                         }

            complex operator*(complex c,complex c0)
                         {   
                                complex temp;

                                temp.a=c.a*c0.a;
                                temp.b=c.b*c0.b;

                                return temp;

                         }

        
        int main()
              {
                  complex c1,c2,c3;

                  c1.set_data(1,2);
                  c2.set_data(3,4);

                  c3=operator+(c1,c2); // or c3=c1+c2;
                  c3.display_data();

                  c3=operator-(c1,c2);   // or c3=c1-c2
                  c3.display_data();

                  c3=operator*(c1,c2);
                  c3.display_data();

                  return 0;


         }