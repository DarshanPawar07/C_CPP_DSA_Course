
        /* Que - 5  Define a class Game with an array of 5 int variables as instance member to store
                    the score of each of 5 rounds. Provide method to setScore(int round, int score).
                    Also provide method getScore(int round) */

        
        #include<iostream>
        using namespace std;
         
        
        class game
           {
                 private:
                        int A[5];


                  public:
                     void set_score(int r,int score)
                        {  
                              
                                 A[r]=score;

                        }

                     int get_score(int r)
                        {   
                            cout<< A[r];
                             cout<<endl;
                        }
            
           };


      int main()
          {
              game g1,g2;


              g1.set_score(1,2);
              g1.set_score(2,0);
              g1.set_score(3,1);
              g1.set_score(4,2);
              g1.set_score(5,0);

              g1.get_score(1);
              g1.get_score(2);
              g1.get_score(3);
              g1.get_score(4);
              g1.get_score(5);

              return 0;

          }
        
        
        
        
         