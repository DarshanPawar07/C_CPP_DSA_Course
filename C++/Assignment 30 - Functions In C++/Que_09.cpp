
     /* Que - Write functions using function overloading to find a maximum of two
                 numbers and both the numbers can be integer or real.  */

    #include<iostream>
     using namespace std; 

     void big(int a,int b)
                        {
                              if(a>b)
                              {
                                cout<<""<<a<<" Is Greater Than "<<b<<"";
                              }
                              else
                              {
                                cout<<""<<b<<" Is Greater Than "<<a<<"";
                              }
                        }
    
     void big(double a,double b)
                        {
                              if(a>b)
                              {
                                cout<<""<<a<<" Is Greater Than "<<b<<"";
                              }
                              else
                              {
                                cout<<""<<b<<" Is Greater Than "<<a<<"";
                              }
                              
                        }