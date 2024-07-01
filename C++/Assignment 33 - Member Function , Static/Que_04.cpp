
        /* Que -  Write a driver function main() to use TestResult class (Question 3). Create an array to
                  5 TestResult objects, set values to all the objects and display the results in
                  sorted order (by net_score).
        
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
                  cout<<" Roll no = "<<roll<<" Right weightage = "<<r<<" Wrong weightage = "<<w<<" Net Score = "<<s;
                         cout<<endl;
                }
                                       
          void test_result:: right_weightage(int w  )
                                     {

                                       
                                     }

          void test_result:: wrong_weightage(int , int)
                                     {
                                         
                                     }

        int main()
                  {
                       test_result  t1,t2,t3,t4,t5;

                       t1.set(25,75,25,75);
                       t2.set(26,85,15,85);
                       t3.set(27,95,5,95);
                       t4.set(28,96,4,96);
                       t5.set(29,97,3,97);

                       t1.display();
                       t2.display();
                       t3.display();
                       t4.display();
                       t5.display();

                       



                        
                  }