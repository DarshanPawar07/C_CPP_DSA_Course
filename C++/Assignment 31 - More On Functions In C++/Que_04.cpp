
       /* Que -. Define a function to calculate LCM of three numbers */

 
        #include<iostream>
        using namespace std;
        #include<stdio.h>
        #include<string.h>




        void LCM(int a,int b,int c)

            {    int l;

                for(l=a>b?a>c?a:c:b>c?b:c; l<=a*b*c;l++)
                           {
                                if(l%a==0 && l%b==0)
                                     {
                                        cout<<"The LCM Of " <<a<< b<< " And " <<c<< "=" <<l;
                                        break;
                                     }
                           }

                

            }






            
       
       
                
      