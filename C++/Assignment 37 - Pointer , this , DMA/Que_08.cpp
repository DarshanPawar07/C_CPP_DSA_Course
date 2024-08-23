
         /* Que - Define a class String with char pointer and length of the string as instance member 
                  variables. Define a method to dynamically create an array of char type and hold the 
                  input string in such a way that the array length is just enough to accommodate the input string
        */


       #include<iostream>
       using namespace std;

       class String
            {  
                 private:
                       char *p;   // p=&a
                       int n;

                public:
                 void create(int n, char *p );
                    
            };

       
       void String::create(int n,char *p)
                   {
                       p=(char*)malloc(n);
                       p[0]='\0';


                   }