

        /* Que - Define a class Book with bookid, title and price as instance member variables. 
                 Define non parameterised and parameterised constructor in the class. */

        #include<iostream>
        using namespace std;

        
        class book
               {
                    private:
                           int book_id;
                           string tittle;
                           float price;

                     private:
                           book()                               //non parameterised constructor
                               {
                                    book_id =0;
                                    tittle="";
                                    price=0;
                               }

                             book(int x,string y,float z)           //parameterised constructor
                               {
                                    book_id =x;
                                    tittle=y;
                                    price=z;
                               }
                              
                              book(int x,string y,float z):book_id(x),tittle(y),price(z)  //using initialisers
                              {};
                           
              };
       

     