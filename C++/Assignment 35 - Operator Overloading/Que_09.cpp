        
        /* Que - In Question-8, define operator pre decrement and post decrement to decrease distance by 1 cm. */

        #include<iostream>
        using namespace std;

        class distancee     
                   {
                        private:
                             int km,m,cm;
                        
                        public:
                             void set_data(int ,int,int);
                             void display_data();
                             distancee pre_decrement();
                             distancee post_decrement();
                    };
        
         void distancee::set_data(int x ,int y ,int z )
                       {
                             km=x;
                             m=y;
                             cm=z;
                       }

         void distancee::display_data()
                      {
                            cout<<"km= "<<km<< " Mt = " <<m<< " Cm = "<<cm;
                            cout<<endl;
                      }

          distancee distancee::pre_decrement()
                      {
                           distancee temp;

                           temp.km=--km;
                           temp.m=--m;
                           temp.cm=--cm;

                           return temp;
                      }

         distancee distancee:: post_decrement()
                      {
                           distancee temp;

                           temp.km=km--;
                           temp.m=m--;
                           temp.cm=cm--;

                           return temp;

                      }

        
        int main()
               {
                   distancee d1,d2,d3;
                   d1.set_data(1,2,3);
                   d2.set_data(4,5,6);

                   d3= d1.pre_decrement();
                   d3.display_data();

                   d3=d2.pre_decrement();
                   d3.display_data();

                   d3=d1.post_decrement();
                   d3.display_data();

                   d3=d2.post_decrement();
                   d3.display_data();

               }