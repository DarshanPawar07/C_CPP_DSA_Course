
         /* Que - In question-4, define a method to sort Time object array. */


       #include<iostream>
       using namespace std;

       class time
            {  
                 private:
                       
                       int hr,min,sec;

             

            };


       time* method(int n)                           
                {                                        
                     return new time [n];               /*    time *p = new time[n];
                                                             return p;
                                                      */
               }

        void sort(time t[],int n)
           {
               int i,r;
               time a ;
              
              for(r=1;r<=n-1;r++)

                 {
                    for(i=0;i<=n-1-r;i++)
                    {
                         if(t[i]>t[i+1])
                          {   
                              a=t[i+1];
                              t[i]=t[i+1];
                              t[i+1]=a;
                          }

                         else
                            {
                               t[i]=t[i];
                               t[i+1]=t[i+1];

                            }
                    }
                 }
           }                          

                                                  
                 
                  
 