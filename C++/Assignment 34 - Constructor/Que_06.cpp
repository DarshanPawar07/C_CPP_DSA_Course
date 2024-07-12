

        /* Que - Define a class Numbers with size and arr pointer as instance variables. Provide constructor
                 to initialise instance members, dynamically allocate an array of given size and store
                 address in arr variable of object. Also define destructor to deallocate memory of array. 
                 Implement deep copy using copy constructor to avoid memory issues */

        #include<iostream>
        using namespace std;

        
        class numbers
               {
                    private:
                           int size;
                           int *arr;

                     public:
                           numbers(int x)
                                     {
                                          size=x;
                                         

                                          arr= new int[size];  //making an array of our required size

                                    }

                              numbers(numbers &x)   //constructor for deep copy
                                       {
                                           size=x.size;
                                           arr= new int [size];        //making new array for c3
                                            for(int i=0;i<size;i++)
                                                 {
                                                    arr[i]=x.arr[i];       //copying elements of array c1 into c3
                                                 }
                                                   
                                       }
                            
                            ~numbers()
                                     {
                                          delete []arr;
                                     }
                          
                    
                    

               };
         
        

     