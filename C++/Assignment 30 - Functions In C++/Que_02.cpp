
       /* Que - . Define a function to find the highest value digit in a given number. */

        #include<iostream>
        using namespace std;
        
          int highest(int a)

                            {
                                int max =-1,y;

                                while(a)
                                       {
                                           y=a%10;
                                           if(max<y)
                                                    {
                                                       max=y;
                                                    }
                                          a=a/10;
                                      }

                              return max;

                          }