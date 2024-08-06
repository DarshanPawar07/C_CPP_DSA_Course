
        /*  Que - Define a class Time with appropriate instance variables and member functions.
                  Overload following operators
                  1. << insertion operator
                  2. >> extraction operator  
        */
    

       #include<iostream>
       using namespace std;

        class time 
            {
                  private:
                       int h,m,s;
                   
                   public:
                        friend ostream& operator<<(ostream&,time);
                        friend istream& operator>>(istream&,time&);

                        void set_data(int,int,int);
                        void display_data();

           };

        ostream& operator<<(ostream&cout,time t0)

                     {
                           cout<<"Hr = "<<t0.h<<" Min = " <<t0.m<< " Sec = "<<t0.s;
                           cout<<endl;
                     }


        istream& operator>>(istream&cin,time &t0)

                     {
                          cout<<"Enter The Time\n";
                          cin>>t0.h>>t0.m>>t0.s;
                     }


         void time:: set_data(int x,int y,int z)

                     {
                         h=x;
                         m=y;
                         s=z;
                     }


         void time::display_data()

                     {
                         cout<<"Hr= "<<h<< " Min=" <<m<< " Sec= "<<s;
                     }
        

        int main()
        
               {
                     time t1,t2,t3;

                    //  t1.set_data(1,2,3);
                    // t2.set_data(4,5,6);

                    cin>>t1;      // c3=operator>>(cin,t1)
                    cout<<t1;     //c3=operator<<(cout,t1)

                    return 0;


               }