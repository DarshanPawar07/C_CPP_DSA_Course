
    /* Que - Write a C++ program to calculate the sum of two numbers. */

     #include<iostream>

     using namespace std;

     inline int add(int, int);

     int main() 
            {   
                int a,b;

                cout<<"Enter Two Numbers\n";
                cin>>a>>b;

                cout<<"The Addition of "<<a<<" And "<<b<<" Is "<<add(a,b); //addition Using a Function 
                cout<<"\n";

                cout<<"The Addition of "<<a<<" And "<<b<<" Is "<<a+b; 
                cout<<"\n";

                return 0;
            }

     int add(int a, int b)

                     {
                          return a+b;
                     }