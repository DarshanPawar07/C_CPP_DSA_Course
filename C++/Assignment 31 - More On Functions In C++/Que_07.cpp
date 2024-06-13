
       /* Que - Define overloaded functions to calculate volume of a cuboid, cone and sphere */

 
        #include<iostream>
        using namespace std;



        int main()

                   {     
                         int r,h,l,b;

                         cout<<"Enter Radius, Height , Length And Breadth";
                         cin>>r>>h>>l>>b;

                         cout<<"The Volume Of The Cuboid ="<<volume(l,b,h);
                         cout<<"The Volume Of The Cone = "<<volume(r,h);
                         cout<<"The Volume Of The Sphere= "<<volume(r);




                   }


        float volume(int l,int b,int h)

                     {
                          int v;
                          v=l*b*h;
                          return v;
                     }           
        
        float volume(int r,int h)

                    {
                         int v;
                         v=1.04*r*r;
                         return v;

                    }
        
        float volume(int r)

                   {
                        int v;
                        v=4.186*r*r;
                        return v;
                        
                   }




            
       
       
                
      