           
             /* Que - Write a program to check whether a given number is there in the Fibonacci series or not */
           
              #include<stdio.h>
              int main()

                        {

                             int i=0 , a=-1 , b=1 , c , n , num ;

                             printf("Enter the number\n");
                             scanf("%d" , &num) ;

                             while(i <= num)
                                            {
                                               c = a + b ;
                                               a = b ;
                                               b = c ;
                                               
                                               i++ ;

                                            }

                             if(c == num)
                                          {
                                             printf("Entered Number Exists In Fibonacci series");
                                          } 

                             else
                                   {
                                      printf("Entered Number Does Not Belongs To Fibonacci Series");
                                   }
                            
       
                             return 0;

                        }
 
