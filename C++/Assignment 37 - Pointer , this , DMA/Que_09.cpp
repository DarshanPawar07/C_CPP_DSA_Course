
         /* Que - In question-8, define methods to convert string into uppercase, lowercase.
        */


          class String

              {  
                    private:

                         char *p;   // p=&a
                         int n;

                   public:
                       char* create(int n, char *p );
                       void convert_uppercase(char t[],int n);

                    
              };

       

           char* String::create(int n,char *p)
       
                   {
                       char *p = new char[n];
                       return p;
                   }
           
           void convert_uppercase(char t[],int n)
              {
                     int i;
                     

                     for(i=0;i<=n-1;i++)
                         {
                              if(t[i]>='a' && t[i]<='z')
                                  {
                                      t[i]=t[i-32];
                                  }
                         }
              }


          void convert_lowercase(char t[],int n)

              {
                     int i;
                 

                     for(i=0;i<=n-1;i++)
                         {
                              if(t[i]>='A' && t[i]<='Z')
                                  {
                                      t[i]=t[i+32];
                                  }
                         }
              }