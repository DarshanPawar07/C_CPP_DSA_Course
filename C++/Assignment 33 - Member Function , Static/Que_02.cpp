
        /* Que - Define a class Time to represent a time with instance variables h,m and s to store hour, 
                 minute and second. Also define following member functions
                  1. void setTime(int,int,int)
                  2. void showTime()
                  3. void normalize()
                  4. Time add(Time)
                  5. bool is_greater(Time)  */

        #include<iostream>
        using namespace std;

         class time
                    {
                        private:
                               int h , m ,s ;
                         
                         public:

                                void set_time(int x, int y,int z);
                                     

                                void show_time();
                                     
                                void normalize();

                                time add(time);

                                bool is_greater(time);
                                    
                    };


           void time:: set_time(int x, int y,int z)
                                     {
                                        h = x;
                                        m = y;
                                        s = z;
                                     }

          void time:: show_time()
                                     {
                                         cout<<"hr="<<h<< " min="<<m<< " sec="<<s;
                                     }
                                
          void time:: normalize()// condition when seconds and minutes are more than 60
                                     {
                                          m=m+s/60;
                                          s=s%60;
                                          h=h+m/60;
                                        
                                     }
          
          time time :: add(time y)         
                                     {
                                        time x;
                                        x.h=h+y.h;
                                        x.m= m+y.m;
                                        x.s=s+y.s ;

                                        return x;
                                     }

          bool time:: is_greater(time y)    /*konsa time bada hai dono mei se jaise 2 times ko add krr rhe ho 
                                            vaise do time mei se konsa bada hai*/
                             {
                                  if(h>y.h)
                                       return true;
                                  else if (h<y.h)
                                        return false;
                                  else if(m>y.m)
                                         return true;
                                  else if(m<y.m)
                                        return false;
                                  else if(s>y.s)
                                        return true;
                                  else 
                                        return false;
                                 
                                         
                                        
                             }

          int main()
                  {

                       time t1,t2,t3;

                        t1.set_time(11,25,34);

                        t2.set_time(12,35,43);

                        t3=t1.add(t2);

                        t1.is_greater(t2);


                        t3.show_time();

                        return 0;

                  }