
        /* Que - In question 3, define a methods to display date in the following pattern
                   1. 31-12-2022
                   2. 31-Dec-2022    
        */
        

        #include<iostream>
        using namespace std;
        

        class date
                      {
                           private:

                              int d;
                              int m;
                              int y;
                             
                           public:

                                void set_data(int a , int b , int c )
                                         {
                                               d=a;
                                               m=b;
                                               y=c;
                                         }
                              
                              int display_1()
                                       {
                                          cout<<d<<"-"<<m<<"-"<<y;
                                       }
                              
                              int display_2()
                                       {    
                                          char *c[]={ "jan",
                                                      "feb",
                                                      "mar",
                                                      "apr",
                                                      "may",
                                                      "jun",
                                                      "jul",
                                                      "aug",
                                                      "sept",
                                                      "oct",
                                                      "nov",
                                                      "dec"
                                                      };

                                           cout<<d<<"-"<<c[m-1]<<"-"<<y;
                                       }            

     

                      };

       