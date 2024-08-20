
         /* Que - In question-4, define a method to dynamically create an array of Time objects with 
                  specified size (received through argument) and return array
        */



       #include<iostream>
       using namespace std;

       class time
            {  
                 private:
                       
                       int hr,min,sec;

                public:
                     void set_hour(int );
                     void set_min(int );
                     void set_sec(int );
                     void get_hour();
                     void get_min();
                     void get_sec();
                    
            };

        void time::set_hour(int hr)
             { 
                 this->hr=hr;
             }

        void time::set_min(int min)
             { 
                 this->min=min;
             }

        void time::set_sec(int sec)
             { 
                this->sec=sec;
             }

        void time::get_hour()
             {
                 cout<<" Hr= "<<hr;
             }

        void time::get_min()
             {
                 cout<<" Min="<<min;
             }

        void time::get_sec()
             {
                 cout<<" Sec="<<sec;
             }

       time* method(int n)                           
                {                                        
                     return new time[n];               /*    time *p = new time[n];
                                                             return p;
                                                      */
                }                                          
                                                  
                 
                  
                                       
       int main()
            {
                 time t1,t2;
                  
                  t1.set_hour(1);
                  t1.set_min(2);
                  t1.set_sec(3);
                  t1.get_hour();
                  t1.get_min();
                  t1.get_sec();

                  return 0;

            }