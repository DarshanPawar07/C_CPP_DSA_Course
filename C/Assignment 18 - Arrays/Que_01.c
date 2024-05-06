        
       /* Que - Write A Program To Calculate The Sum Of Numbers Stored In An Array Of Size 10. Take
                Array Values From The User.  */   
           
           
           
       #include<stdio.h>
       int main()

                    {  
                          
                           int a[10] , i , sum = 0 ;
   
                           printf("Enter 10 Numbers\n");

                           for( i = 0 ; i <= 9 ; i++)
                                    {    
                                       scanf(" %d " , &a[i]) ;
                                    }
                        
                           for( i = 0 ; i <= 9 ; i++)
                                  {
                                      printf("Sum Is %d",sum) ;
                                  }
                           
                        
                           return 0;

                    }
