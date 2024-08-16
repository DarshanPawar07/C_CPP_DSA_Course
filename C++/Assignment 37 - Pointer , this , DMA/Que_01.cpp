
         /* Que - Define a class Person with name and age as instance variables. Provide
                  parameterised constructor with two formal arguments name & age, to initialise 
                  instance variables
        */


       #include<iostream>
       using namespace std;

       class person
            {  
                 private:
                       string name;
                       int age;

                public:
                     person(int age ,string name)
                       {
                           this->name=name;
                           this->age=age;
                       }
                     
            };

      
       int main()
         {
              person p1(19,"Darshan");

              return 0;

         }