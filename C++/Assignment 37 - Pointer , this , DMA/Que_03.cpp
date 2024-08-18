
         /* Que - In question-2, write a non member function in which instantiate Complex class 
                  dynamically. Initialise instance variables and display their values */


       #include<iostream>
       using namespace std;

       class complex
            {  
                 private:
                       
                       int a,b;

                public:
                     void set_data(int ,int );
                     void display_data();
                          

                     
            };

        void complex::set_data(int a,int b)
              {
                   this->a=a;
                   this->b=b;
              }
              
        void complex::display_data()
             {
                cout<<" a = "<<a<< " b = "<<b;
             }

          
        void function()

              {
                  complex *p= new complex;          // dynamically creating a complex class 

                  p->set_data(10,20);
                  p->display_data();

              }
       