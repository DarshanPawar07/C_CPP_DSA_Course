
        /* Que - Define a class Circle with radius as its property. Provide setRadius() and 
                 getRadius() methods. Also define methods to return area and circumference of circle. */
        

        #include<iostream>
        using namespace std;


        class circle
                    {
                          private:

                                 int r;

                         public:
              

                                  void setradius(int a)
                                              {
                                                   r=a;
                                                  
                                              }
       
                                   int getradius()
                                                {
                                                   return r;
                                                }

                                   float area()
                                              {
                                                  float a = 3.14*r*r;
                                                  return a;
                                              }    
        
                                   float circum()
                                              {
                                                   float c = 6.28*r;
                                                     return c;
                                              }



                    };
              

       