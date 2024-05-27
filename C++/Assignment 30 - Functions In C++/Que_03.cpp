    
     /* Que - Define a function to calculate x raised to the power y.  */


     #include<iostream>
     using namespace std;
     int power(int ,int);

     int main()

                {
                      int x,y;
                      cout<<"Enter A Number";
                      cout<< endl;
                      cin>>x;
                      cout<< endl;
              
                      cout<<"Enter It's Power";
                      cout<< endl;
                      cin>>y;
                      cout<< endl;

                      cout<<""<<x<<" To The Power Of "<<y<<" is " <<power(x,y);

                      return 0;
                      
                }

     int power(int x ,int y)

                            {    
                                 int i,a;

                                 a=x;

                                 for(i=1;i<=y-1;i++)
                                                    {
                                                        x=a*x;
                                                     }

                                  return x;
                             }