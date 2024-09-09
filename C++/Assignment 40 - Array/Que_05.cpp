
        /* Que-5 - In question 1, define a method to insert a new element at specified index */

        #include<iostream>
        using namespace std;

        class array 
        {
             private:  
                 int capacity;
                 int last_index;
                 int *p;
             
             public:
                     int array:: insert(int index , int value)
                          {   

                                  try
                                  {
                                       
                                       if(index<0 || index>capacity)
                                       {
                                          throw 1;
                                       }

                                       for(int j = capacity ; j>index ;j-- )
                                            {  
                                                    p[j+1]=p[j];
                                            } 
                        
                                       p[index]=value;


                                  }

                                  catch(int e)
                                  {
                                        if(e==1)
                                        {
                                          cout<<"Invalid Index";
                                        }

                                  }

                                   
                         }
        };
