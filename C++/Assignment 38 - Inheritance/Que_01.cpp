
        /* Que -1  Define a class Person with name and age as instance variables as private members. 
                   Provide setters and getters as protected methods. Derive a class Employee from 
                   Person class with private instance variable salary. Provide public methods setEmployee()
                   and showEmployee().*/

        
        #include<iostream>
        using namespace std;
         
        
        class person

           {   
                private:
                    string name;
                    int age;

                protected:
                    void set_name(string n)
                       {
                          name=n;
                       }

                    void set_age(int a)
                       {
                          age=a;
                       }
                     
                    string get_name()
                       {
                          return name;
                       }
                     
                     int get_age()
                       {
                              return age;
                       }
            };
            
        class employee : public person          // child class of class person
            {
                 private:                       /* won't be able to inherit name and age varibles from
                                                    person class as they are private in parent class */
                    double salary;

                 public :
                     void set_Employee(double s)
                      {  
                          set_name("Darshan");
                          set_age(14);

                          salary =s ;
                      }

                     void show_Employee()
                       {    
                            cout<<"Name Of The Employee = "<<get_name();

                            cout<<" Age = "<<get_age();
                            
                            cout<<" Salary = "<<salary;
                       }

            };
        
        
        
         int main()
          
          {       
               person p1,p2;

               employee e1,e2;            /* koi bhi object person class ka mei person class ke methods ko access
                                              nhi kr skta kyunki vo protected agar unko access krna hai main fun
                                              mei to unhe public banana hoga but humne un methods ko uske child 
                                              class mei child class ke ek fun mei unko call kiya hai aur unka 
                                              use kiya hai to hum aisa kr skte hai ki child classs ke jis fun mei
                                               unhe use kiya hai unhi fun ko unke onject ke dwara call kr de  */

               e1.set_Employee(20000);
               e1.show_Employee();
              
              return 0;
               


          }