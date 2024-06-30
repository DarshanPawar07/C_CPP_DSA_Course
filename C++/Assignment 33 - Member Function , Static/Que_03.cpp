
        /* Que -  Define a class TestResult with properties roll_no, right, wrong, net_score. Also define 
                  class properties right_weightage, wrong_weightage. Provide methods to set and get all 
                  the properties.
        
        */

        #include<iostream>
        using namespace std;

         class test_result
                    {
                         private :
                        
                               int roll , r , w , s ;

                         public:
                               
                               void set(int,int,int,int);
                                      
                              
                               void display();
                                      
                               void right_weightage(int , int ,int );
                                     

                                void wrong_weightage(int , int);
                                     
                        
                    };

          void test_result:: set(int w , int x , int y , int z)
                                      {
                                           roll = w;
                                           r = x;
                                           w = y;
                                           s = z;
                                      }
                              
          void test_result:: display()
               {
                         cout<<"Roll no ="<<roll<<"Right weightage="<<r<<"Wrong weightage="<<w<<"Net Score ="<<s;
                }
                                       
          void test_result:: right_weightage(int , int ,int )
                                     {
                                       
                                     }

          void test_result:: wrong_weightage(int , int)
                                     {
                                         
                                     }
        
          