
        /* Que - 7  In question 6, derive a class GameResult with an array of 5 int type variables to 
                    store the result in each round. Result value is 2 for win, 0 for loose and 1 for 
                    draw. Provide methods to set Result and getResult. Write method to calculate final 
                    result of the game */

        
        #include<iostream>
        using namespace std;
         
        
        
        #include<iostream>
        using namespace std;
         
        
        class game
           {
                 private:
                        int A[5];


                  public:
                     void set_score(int round,int score)
                        {  
                              int i;
                              
                              for(i=0;i<=round-1;i++)
                                 {        

                                 }
                        }

                     void get_score(int round)
                        {   
                            int i ;

                            for(i=0;i<=round-1;i++)

                               {
                                 cout<<" Score ="<<A[round];
                               } 
                               
                        }
            
           };

         class gameresult : public game
             {
                  private:
                       int result[5];


                  public:

                     void set_result(int round , int s)
                        {
                             result[round]=s;
                        }


                     int get_result(int round)
                        {
                           return result[round];
                        }

                     int final_result()              // final result will be the sum of all results
                          {
                              int i ,s=0;

                              for(i=1;i<=4;i++)
                              
                                 {
                                     s=s+result[i];
                                 }
                               
                               return s;
                          }

                    
                                           
                                    
                                      
                          
                          
             }; 
        
        
        
        
         