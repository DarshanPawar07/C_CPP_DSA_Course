

        /* Que - Define a class Complex with instance variables for real and imaginary part of a complex
                 number. Define only one parameterised constructor in the class to initialise complex object.
                 Also define showData method in the class to display object data. Now create an array of
                 Complex class with size 5 and display values of each object. */

        #include<iostream>
        using namespace std;

        
        class complex
               {
                    private:
                           int a;
                           int b;
                          // int h;

                    public:
                           complex(int x,int y)
                                      {
                                          a=x;
                                          b=y;
                                      }
                            void show_data()
                                      {
                                          cout<<"Real Part = " <<a<< "Imaginary Part = " <<b;
                                      }
                                   
                    
                    

               };
       
          void array_complex()
                     {      int i;
                            complex c[5]={complex(1,2),complex(3,4),complex(4,5),complex(5,6),complex(7,8)};
                            for( i=0;i<=4;i++)
                                 c[i].show_data();
                     }

        int main()
               {
                     complex c1(1,2);
                     c1.show_data();
               }
         
        

     