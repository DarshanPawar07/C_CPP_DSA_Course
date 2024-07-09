

        /* Que - Define a class Time with hr,min,sec as instance member variables. Define constructor 
                 to initialise time object  */

        #include<iostream>
        using namespace std;

        
        class time
               {
                    private:
                           int hr;
                           int min;
                           int sec;
                    
                     public:
                           time()
                                {
                                   hr=0;
                                   min=0;
                                   sec=0;
                                }
                            
                           time(int x,int y ,int z)
                                  {
                                     hr=x;
                                     min=y;
                                     sec=z;
                                  }
                            
                            time(int x,int y,int z):hr(x),min(y),sec(z)  // using initialisers
                            {};

               };
       
       int main()
                 {
                        time t1,t2(1,2,3);
                 }
         
        

     