

        /* Que - Define a class Customer with instance members cust_id, name, email, mobile. Define non
                 parameterised constructor and parameterised constructor in the class.  */

        #include<iostream>
        using namespace std;

        
        class customer
               {
                    private:
                           int cust_id;
                           string name;
                           string email;
                           string mobile_no;
                  
                   public:
                           customer()                                      //Non Parameterised Constructor
                                     {
                                          cust_id=0;
                                          name="darshan";
                                          email="darshandpawar";
                                          mobile_no="38949333";
                   
                                     }

                          customer( int x , string y , string t , string s)       //parameterised constructor
                          
                                   {
                                       cust_id=x;
                                       name=y;
                                       email=t;
                                       mobile_no=s;

                                   }
                        
                          void display_data()
                                      {
                                           cout<<"Customer Id -" << cust_id<< " Name - " <<name<< " Email - "<<email<< " Mobile no - " <<mobile_no  ;
                                           cout<<endl;
                                     }
                            
                           

            };
      
      int main()
              {
                  customer c1,c2(123,"darshan","darshandpawar123","9162728");
                  c1.display_data();
                  c2.display_data();


              }
         
       
        

     