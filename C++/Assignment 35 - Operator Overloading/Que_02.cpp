        
        /* Que - Create a class Time which contains hour, min and second as fields. Overload greater 
                 than. (>) operator to compare two time objects. */
                  
        
        #include<iostream>
        using namespace std;

        class time
                {
                     private:
                               int h,m,s;
                     
                     public:
                           void set_data(int ,int , int);
                           void display_data();
                           bool operator>(time);
                };
        
            void  time ::set_data(int x , int y , int z)
                               {
                                     h=x;
                                     m=y;
                                     s=z;
                               }

            void time ::display_data()
                              {
                                cout<<"Hr= "<<h<< "Min= "<<m<< "Sec="<<s;
                              }

             bool time :: operator>(time t5)
                             {
                                 if(h>t5.h)
                                      {
                                        return true;
                                      }

                                 else if(t5.h>h)
                                      {
                                        return false ;
                                      }

                                 else if(t5.m>m)
                                       {
                                         return false;
                                       }

                                 else if(m>t5.m)
                                       {
                                         return true;
                                       }
                                
                                 else if(t5.s>s)
                                       {
                                         return false;
                                       }

                                 else if(s>t5.s)
                                      {
                                        return true;
                                      }
                                 else 
                                      {
                                        return false;
                                      }



                                //call by  t1.operator>(t2);
                             }
            
            int main()
                      {
                          time t1,t2,t3;
                            t1.set_data(1,2,3);
                            t2.set_data(4,5,6);

                            bool t4=t1.operator>(t2);
                            cout<<t4;                       //it will print 0 for false and 1 for true
                      }


       