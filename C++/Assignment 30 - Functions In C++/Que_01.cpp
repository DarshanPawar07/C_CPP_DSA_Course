
     /* Que - . Define a function to check whether a given number is a Prime number or not */

     #include<iostream>
    
     using namespace std;
    

     int main()
                {    
                      int a;

                      cout<<"Enter A Number";

                      cout<<endl;

                      cin>>a;

                      int i;

                      for(i=2 ; i<=a-1 ;i++)

                                        {
                                            if(a % i == 0)
                                                       {
                                                          cout<<"Not A Prime Number";
                                                          break;
                                                       }
                                             else
                                                    {
                                                        cout<<"Prime Number";
                                                        break;
                                                    }
                                        }

        
                      return 0;


                 }