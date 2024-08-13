
        /*  Que - In Question-8, provide overloaded insertion and extraction operators. */
    
        
        
        #include<iostream>
        using namespace std;

         class coordinate
                 {
                         private:
                               int x,y;
                         public:
                              friend coordinate operator,(coordinate,coordinate);
                              
                               friend ostream& operator<<(ostream&,coordinate);
                               void set_data(int,int);

                 };

        void coordinate::set_data(int a, int b)
                         {
                             x=a;
                             y=b;
                         }
        
        coordinate operator,(coordinate c1 ,coordinate c2)
                {
                     coordinate c3;
                      c3=(c1,c2);
                      return c3;

                }

         ostream& operator<<(ostream&cout,coordinate c)
                     {
                           cout<<c;
                           cout<<endl;
                     }
        
         

        

        int main()
                {    
                        coordinate c1,c2,c3;
                        c1.set_data(1,2);
                        c2.set_data(3,4);
                        
                        c3=c1,c2;        //c3=operator,(c1,c2);
                        cout<<c3;       //c3.operator<<();

                        return 0;


               }
           
        
    