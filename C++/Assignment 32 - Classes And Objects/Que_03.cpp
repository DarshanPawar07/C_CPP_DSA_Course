
        /* Que - Define a class Date to represent date (like d=31, m=12, y=2022). Declare appropriate 
                 number of instance member variables and also define instance member functions to set
                 date and get date */
        

        #include<iostream>
        using namespace std;


        class date
                     {
                           private:

                               int d;
                               int m;
                               int y;  
                              
                           public:

                               void set_date(int a , int b , int c)
                                             {
                                                d=a;
                                                m=b;
                                                y=c;
                                             }
                               
                               int display_date()
                                           {
                                                cout<< "Date="<<d<< "Month="<<m<< "Year="<<y;
                                           }

                     };
             