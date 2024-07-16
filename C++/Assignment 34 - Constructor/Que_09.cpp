

        /* Que - Define a class Room for a hotel management project with room number, room type, is_AC,
                 price as instance variables. Initialise instance variables using constructor. */

        #include<iostream>
        using namespace std;

        
        class room
               {
                    private:
                           int room_no;
                           string room_type;
                           bool is_ac;
                           float price;
                     

                     public:
                            room()                                       //non parameterised construtor
                                 {
                                    room_no=0;
                                    room_type="";
                                    is_ac=true;
                                    price=0.0;

                                 }
                            
                            room(int s , string t,bool u,float v)        //parameterised constructor
                                {
                                   room_no=s;
                                   room_type=t;
                                   is_ac=u;
                                   price=v;

                                }
                    
                    

               };
              

              int main()
                     {
                            room r1,r2(1,"r",true,999.0);

                     }
         
        

     