
        /* Que - 3  Define a class Coordinate with x and y as instance variables. Define overloaded 
                    versions of getDistance(), first with no argument calculating distance from origin, 
                    and second with one argument of Coordinate type to calculate distance between two 
                    coordinates. Also define other methods if required     */

        
        #include<iostream>
        
        #include<math.h>
        using namespace std;
         
        
        class Coordinate
           {
                private:
                   int x,y;
                
                public:

                    void set_distance(int a,int b)
                        {
                            x=a;
                            y=b;
                        }
                         
                     float get_distance()
                        {
                            return sqrt(x*x + y*y);   // distance between 2 points = sqrt (x2-x1)^2 + (y2-y1)^2
                                                       // in this case x1 and y1 is origin and equals to 0. 
                        } 

                    float get_distance(Coordinate a)
                        {
                              return sqrt((x-a.x)*(x-a.x) + (y-a.y)*(y-a.y));


                        }
                    

                    void show_coordinate()
                         {
                             cout<<"( X = " <<x<< " Y = "<<y<<")";
                         }

                    Coordinate set_data(int a,int b)
                        {  
                            Coordinate temp;
                             
                             temp.x=a;
                             temp.y=b;

                             return temp;


                         }


           };

    