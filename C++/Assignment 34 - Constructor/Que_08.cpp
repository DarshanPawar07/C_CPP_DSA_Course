

        /* Que - Define a class Date with d, m, y as instance variables. Initialise members using initialisers */

        #include<iostream>
        using namespace std;

        
        class date
               {
                    private:
                           int d;
                           int m;
                           int y;
                    
                    public:
                           date()       
                                {
                                   d=0;
                                   m=0;
                                   y=0;
                                }
                            
                            date(int l , int r ,int n)           //parameterised constructor
                                {
                                   d=l;
                                   m=m;
                                   y=n;
                                }
                            
                            date(int l , int r ,int n) : d(l), m(r),y(n)       //contructor using initialiser
                            {};
                                  
                                           
                              

                    

               };
        
        int main()
               {
                     date d1,d2;
               }
         
        

     