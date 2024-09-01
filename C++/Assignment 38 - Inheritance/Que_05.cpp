
        /* Que - 5  In question 3 & 4, derive a class StraightLine from Shape with two Coordinate type 
                    objects as instance members. Provide methods to setLine(), getDistance() and showLine()*/

        
        #include<iostream>
        using namespace std;
        #include<math.h>

         
        
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
                            return sqrt(x*x + y*y);   
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
        
       
          
        class StraightLine:public shape ,public Coordinate
            {
                private:
                    Coordinate c1,c2;
                
                public:

                     void set_line(Coordinate s1, Coordinate s2)
                        {
                              c1=s1;
                              c2=s2;
                        }
                      
                     float get_distance()
                        {
                             return c1.get_distance(c2);
                        }

                     void show_line()
                         {
                              c1.show_coordinate();
                              c2.show_coordinate();

                         }

                   
                    
            };
        
        
        
        
         