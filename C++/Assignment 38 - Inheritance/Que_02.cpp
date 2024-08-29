
        /* Que - 2   Define a class Circle with radius as private instance variable and setRadius(), 
                     getRadius(), getArea() as public instance methods. Define a class ThickCircle as 
                     a subclass of Circle with thickness as private instance variable and getThickness(), 
                     setThickness() as public instance methods. Provide an overridden method getArea() to 
                     calculate area of thick portion of circle.*/

        
        #include<iostream>
        using namespace std;
         
        
        class Circle

           {  
                private:
                      int radius ;

                public:
                      void set_radius(int r)
                          {
                              radius=r;
                          }
                       
                       int get_area()
                           {
                               return (3.14*radius*radius);
                           }
                        
                        int get_radius()
                            {
                                return radius;
                            }

             };

        class thick_circle: public Circle            // child class of class person
             {    
                                                    /* won't be able to inherit radius variable from
                                                     circle class as it is private in parent class */
                   private:                                    
                       float thickness;

                   public:

                      void set_thickness(int t)
                      
                          {  
                              
                              thickness=t;
                          }
                     float get_thickness()

                          {    
                              return thickness;
                          }
                     
                     float get_area()
                          {
                               return 3.14*((get_radius()+thickness)*(get_radius()+thickness) - 
                                                                                         get_radius()*get_radius());
                          }

             };


        int main()
        
               {

                   thick_circle t1,t2;       /* majority times jevha aapan child class banavto tevha 
                                                        objects fkt child class che ch banavayche */


               }
        
        
        
        