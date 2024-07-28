        
        /* Que -   Define a C++ class fraction
                   class fraction
                        {
                             long numerator, 
                             long denominator;
                             public: 
                             fraction (long n=0, long d=0);
                        }

                   Define an operator + to add two fraction object. */

          
          #include<iostream>
          using namespace std;

          class fraction
                      {
                           private:
                                       long num ;
                                       long den ;
                         
                           
                           public:
                                   void set_data(long,long);
                                   void display_data();

                                   fraction operator+(fraction);


                      };
          
           void fraction:: set_data(long x ,long y)

                      {
                            num=x;
                            den=y;
                          
                      }

           void fraction::display_data()
                    {
                         cout<<"Numerator="<<num<< " Denominator="<<den;
                    }
                   

           fraction fraction:: operator+(fraction f1)

                    {
                           fraction temp;

                               temp.num= f1.num +num;
                               temp.den= f1.den + den;

                               return temp ; 

                                      
                    }
           
           
            
                    
           int main()

                   {
                       fraction f1 , f2 , f3 ;

                       f1.set_data(10000,20000);
                       f2.set_data(30000,40000);

                       f3 = f1.operator+(f2);
                       f3.display_data();
                       
                       return 0 ;

                             
                   }  

           
            
            
