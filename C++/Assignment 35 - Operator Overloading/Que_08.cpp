        
        /* Que -   Consider a class Distance
                   class Distance
                   {  
                        int km, m, cm;
                         public: //methods;
                    };                                */

          
        
        #include<iostream>
        using namespace std;

        class distancee
                  {
                      private:
                             int km,m,cm;

                    
                      public:
                           void set_data(int,int,int);
                           void display_data();
                           distancee  conversion();
                  };

         void distancee:: set_data(int x,int y,int z)
                    {
                         km=x;
                         m=y;
                         cm=z;
                    }

         void distancee::display_data()
                    {
                        cout<<"km= "<<km<< " Mt = " <<m<< " Cm = "<<cm;
                    }
        distancee distancee:: conversion()
                   {  
                      distancee temp;
                      
                       if(m>1000)
                          {   
                              int z=m/1000;
                              temp.km=km+z;
                              temp.m=m%1000;
                              temp.cm=cm;

                          }

                       else if(cm>1000)
                                {
                                   int z=cm/1000;
                                   temp.m=m+z;
                                   temp.cm=cm%1000;
                                   temp.km=km;
                                }

                         else  
                             {
                               temp.cm=cm;
                               temp.km=km;
                               temp.m=m;
                             }

                        return temp ;
                   }


        int main()
                {
                     distancee d1,d2,d3;

                     d1.set_data(1,2,3);
                     d2.set_data(3,4,5);

                     d3=d1.conversion();
                     d3.display_data();

                }