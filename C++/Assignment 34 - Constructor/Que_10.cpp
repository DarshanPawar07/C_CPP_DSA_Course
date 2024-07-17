

        /* Que - . Define Circle class with radius as instance variable. Define two constructors in the 
                   class - non parameterised and parameterised  */

        #include<iostream>
        using namespace std;

        
        class circle
               {
                    private:
                           int r;
                           
                    
                    public: 
                          circle()                       //non parameterised construtor
                              {
                                   r=0;
                              }
                            
                           circle(int x)                  // parameterised construtor
                               {
                                   r=x;
                               }
                    
             };

       int main()
               {
                     circle c1,c2(4);
               }
         
        

     