
     /* Que -  Define a function to swap data of two int variables using call by reference  */


     #include<iostream>
     using namespace std;
     
     int swap(int &a,int &b) 
     {
            a=a+b;
            b=a-b;
            a=a-b;
     }          
