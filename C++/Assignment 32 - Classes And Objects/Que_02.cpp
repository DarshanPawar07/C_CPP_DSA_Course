
        /* Que - Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate number 
                 of instance member variables and also define instance member functions to set values for 
                 time and display values of time */
        

        #include<iostream>
        using namespace std;


        class time
                    {
                        private:
                             int h;
                             int m;
                             int s;
                        
                        public:
                             void set_time(int a ,int b,int c)
                                          {
                                               h=a;
                                               m=b;
                                               c=s;
                                          }
                              
                              int display_time()
                                          {
                                                cout<<h<< "Hr" <<m<< "Min" <<s<< "Sec";


                                          }




                    };
             