
        /*  Que -  Define a class Integer with instance variable of type int. Provide a friend logical 
                   operator not!. Also define a friend operator == to compare two Integer objects.  */
                 

        class integer 
              {
                  private:
                       int a,b;


                  public:
                      friend integer operator!=(integer,integer);
                      friend integer operator==(integer,integer);
                      void set_data(int,int);

              };


         integer operator!=(integer i ,integer i0)
                    {
                        if(i.a != i0.a && i.b!= i0.b )
                        return i;
                    }

         integer operator==(integer i0,integer i)
                   {
                        if(i.a=i0.a && i.b==i0.b)
                        return i;

                   }
         void integer::set_data(int x,int y)
                  {
                       a=x;
                       b=y;
                  }
