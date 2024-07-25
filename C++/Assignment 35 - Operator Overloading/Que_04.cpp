        
        /* Que - In Question-2, overload operator+ to add two Time objects. */

        #include<iostream>
        using namespace std;

        class time 
                 {
                       private:
                              int h,m,s;
                        
                        public:
                               void set_data(int,int,int);
                               void display_data();
                               time operator+(time);
                 };
        

         void time::set_data(int x , int y , int z)
                      {
                           h=x;
                           m=y;
                           s=z;
                      }

         void time::display_data()
                    {
                        cout<<"Hr= "<<h<<" Min="<<m<< " Sec="<<s;
                    }

         time time::operator+(time t6)
                    {
                         time temp;
                         temp.h=h+t6.h;
                         temp.m=m+t6.m;
                         temp.s=s+t6.s;

                         return temp;
                    }
        
        int main()
                {
                        time t1,t2,t3;

                        t1.set_data(1,2,3);
                        t2.set_data(4,5,6);

                        t3 =  t1+t2;                //t1.operator+(t2);

                        t3.display_data();
                }