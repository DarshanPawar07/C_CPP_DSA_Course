

        /* Que - Define a class student and write a program to enter student details using constructor
                 and define member function to display all the details. */

        #include<iostream>
        using namespace std;

        
        class student
               {
                    private:
                           int roll_no;                         //instance member variable
                           string name;                         //instance member variable
                           int age;                             //instance member variable
                     
                     public:
                            student()                           //constructor
                                   {
                                        cout<<"Enter Roll no , Name ,Age\n" ;
                                        cin>>roll_no>>name>>age;
                                   }
                            
                           void display()
                                       {
                                           cout<<"Roll No -" << roll_no<< " Name - " <<name<< " age - "<<age;
                                           cout<<endl;
                                        }
                            
              };
         
         int main()
                {
                     student s1,s2,s3;
                     s1.display();
                     s2.display();
                     s3.display();

                     return 0;
                }
        

     