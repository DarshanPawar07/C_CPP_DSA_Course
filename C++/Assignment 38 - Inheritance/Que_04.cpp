
        /* Que - 4  Define a class Shape with shapeName as instance variable. Provide setter and getter */

        
        #include<iostream>
        using namespace std;
         
        
        class shape
           {
                 private:
                       string shapeName;


                  public:
                     void set_shape(string s)
                        {
                           shapeName=s;
                        }

                     void get_shape()
                        {
                            cout<<" Shape Name ="<<shapeName;
                        }
                    
                    
           };

         
         int main()
              {
                    shape s1,s2;

                    s1.set_shape("square");

                    s1.get_shape();

                    return 0;

              }
        
        
        
        
         