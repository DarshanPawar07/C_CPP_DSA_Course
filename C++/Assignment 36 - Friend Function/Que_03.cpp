
        /*  Que -  In Question-2, over load operator= to perform copy of Time object  */
        // = operator overloading is done without friend fun
    

       #include<iostream>
       using namespace std;

        class time 

            {
                   private:
                       int h , m , s ;
                   
                   public:
                        friend ostream& operator<<(ostream&,time);
                        friend istream& operator>>(istream&,time&);

                         time operator=(time);

                        void set_data(int,int,int);
                        void display_data();

           };

        
        time time:: operator=(time t1)

                {    
                     time temp; 
                     temp.h=t1.h;
                     temp.m=t1.m;
                     temp.s=t1.s;

                     return temp;
                }

        ostream& operator<<(ostream&cout,time t1)

                     {
                           cout<<"Hr = "<<t1.h<<" Min = " <<t1.m<< " Sec = "<<t1.s;

                           cout<<endl;
                     }


        istream& operator>>(istream&cin,time &t0)

                     {
                          cout<<"Enter The Time\n";

                          cin>>t0.h>>t0.m>>t0.s;

                     }

        // void time:: set_data(int x,int y,int z)
                     //{
                     //    h=x;
                        // m=y;
                        // s=z;
                    // }

        // void time::display_data()
                    // {
                      //   cout<<"Hr= "<<h<< " Min=" <<m<< " Sec= "<<s;
                        // cout<<endl;
                     //}
        

        int main()
               {
                     time t1,t2,t3;

                     //   t1.set_data(1,2,3);
                     //  t2.set_data(4,5,6);

                     cin>>t1;   
                     cin >>t2;   // c3=operator>>(cin,t1)
                     t3=t1;     // t3=operator=(t1);   //c3=operator<<(cout,t1)

                    
                     // t3.display_data();
                     cout<<t3;
                    

                    return 0;


               }