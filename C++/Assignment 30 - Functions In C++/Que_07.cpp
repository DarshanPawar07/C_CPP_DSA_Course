
     /* Que - Write a function using the default argument that is able to add 2 or 3 numbers   */


     #include<iostream>
     using namespace std;
    
     int add(int,int,int);

     int main()

                {
                     int a,b,c;

                     cout<<"Enter The Numbers";
                     cout<<endl;
                     cin>>a>>b>>c;

                     cout<<"The Addition Is "<<add(a,b,c);

                     return 0;
                }

    int add(int x,int y,int z=0)

                             {
                                   return x+y+z;

                             }