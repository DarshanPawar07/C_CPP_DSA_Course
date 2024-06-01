
     /* Que -  . Define overloaded functions to calculate area of circle, area of rectangle and area of triangle */


     
     int area(int a,int b)
                           {
                               return (3.14 * a* a );
                           }

     
     int area(int l,int b)
                           {
                              return l * b;
                           }

     int area(int b,int h,int H)
                           {
                               double s;
                               s=(h+b+H)/2.0;

                               return (s*(b-h)*(h-H)*(b-H));

                           }