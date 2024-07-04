

        /* Que - Define a class Cuboid with length, breadth and height as instance member variables. 
                 Define constructors to initialise member variables   */

        #include<iostream>
        using namespace std;

        
        class cuboid
               {
                    private:
                           int length; //instance member variables or feilds
                           int breadth;
                           int height;
                     
                     public:
                           cuboid ()//non parameterized constructor
                                  {
                                        length=0;
                                        breadth=0;
                                        height=0;
                                  }

                          cuboid(int x , int y, int z) //parameterized constructor
                                   {
                                        length=x;
                                        breadth=y;
                                        height=z;
                                   }
                    
                    

               };
         
         

        
        int main()
                {

                     cuboid c1,c2(1,2,3);

                }
        

     