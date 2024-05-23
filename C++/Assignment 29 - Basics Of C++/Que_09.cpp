
     /* Que - Write a C++ program to find the maximum of two numbers */

     #include<iostream>
     using namespace std;
     int main()
     {
        int a,b;
        cout<<"Enter Two Numbers";
        cout<<endl;
        cin>>a>>b;

        if(a>b)
        {
            cout<<"The Greatest Among "<<a<<" And "<<b<<" Is "<<a;
        }
        else if (b>a)
        {
           cout<<"The Greatest Among "<<a<<" And "<<b<<" Is "<<b;
        }
        else
         {
            cout<<"Both Of Them Are Equal";
         }
        
        return 0;

     }