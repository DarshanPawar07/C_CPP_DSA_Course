
     /* Que - Write a C++ program to add all the numbers of an array of size 10. */

     #include<iostream>
     
     using namespace std;

     int main()
     {  
        int a[10]={ 1,2,3,4,5,6,7,8,9,1};
        int i,sum=0;
        //cout<<"Enter A String Of Numbers";
       // cout<<endl;
        //cin>>a[10];
       // a[]=0;

        for(i=0;i<=9;i++)
        {  
            
            sum=a[i]+sum;
        }

        cout<<"The Sum Of The Given String Is "<<sum;

        return 0;

     }