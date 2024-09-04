
        /* Que - 8  Define a class Actor with name, age as instance variables and setter, getters as instance
                    methods. Define a class TVActor as a derived class of Actor with instance variable to store
                    number of TV projects done or running and define setter, getter. Also define setTVActor() and 
                    showTVActor(). Define a class MovieActor as a derived class of Actor with instance variable to
                    store number of movies done or running and define setter, getter. Also define setMovieActor() 
                    and showMovieActor(). Derive a class AllScreenActor from TVActor and MovieActor. Define a 
                    method to setActorData() and showActorData()     */

        
        #include<iostream>
        using namespace std;
         
        
        class actor
           {
                 protected:
                       string name;
                       int age;


                  public:
                        void set_actors(int a,string s)
                               {
                                   name=s;
                                   age=a;
                               }
                        
                        void get_actors()
                               {
                                    cout<<"Actor Name ="<<name<<" Age= "<<age;
                               }
            
           };

        class TvActor :virtual public actor
            {                                  /* virtual isiliye lagaya kynuki iski child class (all screen actor) ko 
                                                   iske parent class (actor) se direct connect krke kuch 
                                                   cheeze inherit krni hai */
                 public:                                      
                     int tv_projects;
                     

                
                 public:
                       void set_tv_project_count(int a)
                           {
                              tv_projects=a;
                            
                           }
                              

                        int get_tv_project_count()
                            {
                                  return tv_projects;
                            }
                        
                        void set_Tv_actor(string s,int a,int n )
                           {       
                                set_actors(a,s);
                                set_tv_project_count(n);

                                
                           }
                         
                        void show_Tv_actor()
                           {
                                get_actors();

                                get_tv_project_count();

                           }

            };

        class Movieactor :virtual public actor            /* virtual isiliye lagaya kynuki iski child class 
                                                             (all screen actor) ko iske parent class (actor) se 
                                                              direct connect krke kuch cheeze inherit krni hai */
             {
                  private:
                        int movies_count;
                       

                  public:
                        
                        void set_movies_count(int a)
                             {
                                   movies_count=a;

                             }
                        
                        int get_movies_count()
                             {
                                    return movies_count;
                             }
                        

                        void set_movie_actor(string s ,int a ,int n)
                              { 
                                     set_actors(a,s);
                                     set_movies_count(n);
                                  
                              }
                        
                        void show_movie_actor()
                              {
                                   get_actors();
                                   get_movies_count();

                              }
             };


            class AllScreenActor: public TvActor,public Movieactor
                 {
                       public:
                            
                             void set_actorData(string s,int a,int mc ,int tc)
                                 {
                                     set_actors(a,s);
                                     set_tv_project_count(tc);
                                     set_movies_count(mc);

                                 }
                            
                            void show_actorData()
                                {   
                                     get_actors();
                                     get_tv_project_count();
                                     get_movies_count();

                                }
                 };
        
        
        
         