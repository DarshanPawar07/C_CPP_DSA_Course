
        /*  Que -  Define a class Student with roll no, name and age as instance variables. Create setStudent()
                    and showStudent() methods in the class. Overload operator == to compare two Student objects  
        */
        
        #include<iostream>
        using namespace std;

        class student 
                  {
                        private:
                             int roll_no;
                              string name;
                              int age;

                        public:
                             student set_data(int,string,int);
                             void display_data();
                              friend bool operator==(student,student);

                  };

        student student :: set_data(int s1,string s3,int s2)
                     {
                          student temp;

                          temp.roll_no=s1;
                          temp.age=s2;
                          temp.name=s3;
                          
                          return temp;
                     }

          bool operator==(student s7,student s8)
                     {
                         

                         if(s7.roll_no==s8.roll_no && s7.name==s8.name && s7.age==s8.age)
                                {
                                    return true;
                                }
                         
                         else 
                            return false;

                                  



                     }


        void student:: display_data()
                    {
                        cout<<" Roll no =" <<roll_no<< " Age = "<<age<<" Name = "<<name;
                        cout<<endl;
                    }



        int main()
              {
                   student s1,s2,s3,s4;
                   bool c3;

                   //char s[]="darshan";

                   s2=s1.set_data(30,"darshan",19);
                   s2.display_data();

                   s4=s3.set_data(26,"omkar",20);
                   s4.display_data();
                    
                    c3=operator==(s1,s2);
                    cout<<c3;

                    return 0;

              }
        