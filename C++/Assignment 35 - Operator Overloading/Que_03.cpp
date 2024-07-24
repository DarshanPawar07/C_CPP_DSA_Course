        
        /* Que - In Question-2, overload pre-increment and post-increment operator to increment Time 
                 object value by one second. */

                 
        #include<iostream>
        using namespace std;

        class time 
                {
                    private:
                          int h,m,s;

                    public:
                         void set_data(int,int,int);
                         void display_data();
                         time operator++();             //  preincrement
                         //time                         // postincrement ?
                };  
         
           void time:: set_data(int x, int y , int z)
                        {
                            h=x;
                            m=y;
                            s=z;
                          
                        }

           void time:: display_data()
                         {
                               cout<<"Hr= "<<h<< " Min = "<<m<< " Sec="<<s;
                               cout<<endl; 
                         }

           time time:: operator++()
                         {   
                              time temp;

                              temp.h=++h;
                              temp.m=++m;
                              temp.s=++s;

                              return temp;
                        }
        
        int main()
                {
                        time t1,t2,t3;

                        t1.set_data(1,2,3);
                        t2.set_data(4,5,6);

                        t3= t1.operator++();          //preincrement
                        t3.display_data();

                        t3=t2.operator++();           //preincrement
                        t3.display_data();
                     

                }

        
