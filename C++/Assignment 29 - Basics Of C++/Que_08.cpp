
    /* Que - Write a C++ program to swap values of two int variables without using third variable */

    #include<iostream>
    using namespace std;

    int main()
    {
       int a,b;
       cout<<"Enter Two Numbers";
       cout<<endl;
       cin>>a>>b;

       
       a=a+b;
       b=a-b;
       a=a-b;

       cout<<"After Swapping a="<<a<<" And b="<<b<<" " ;
       return 0;

    }