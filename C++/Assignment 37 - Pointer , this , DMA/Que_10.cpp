
         /* Que - In question-8, define methods to print string, return string, return length of string. */


       #include<iostream>
       using namespace std;

       class String
            {  
                 private:
                       char *p;   // p=&a
                       int n;

                public:
                 char* create(int n, char *p );
                    
            };

       

       char* String::create(int n,char *p)
       
                   {
                       char *p = new char[n];
                       return p;
                   }

       void display_strinng(string s)
              {
                      cout<<" String = "<<s;

                       
              }

       string returrn_strinng(string s,int n)
              {
          
                    return s;
              }

     
        int returrn_length(int n)
              {
                      
                       return n;
              }