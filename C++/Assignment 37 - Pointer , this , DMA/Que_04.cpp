
        /*  Que -  Consider the following class Array
                   class Array
                          {
                             int *p;
                             int size;
                             public:
                             // methods
                         };  
                         
                    Define operator = to perform deep copy of Array objects.
        */

       class array
              {
                   private:
                        int *p;
                        int size;

                   public :
                        void set_data();
                        void display_data();
                        friend void operator=(int,int);

              };

     

       void operator=(array a1 , array a2)
              {


              }

    
    