             
        /* Que  -  Write a program to calculate the sum of all even numbers and sum of all odd
                   numbers, which are stored in an array of size 10. Take array values from 
                   the user  */     
             
             
        #include<stdio.h>
        int main()
        
                      {

                             int a[10] , i , sum = 0 , osum = 0;

                             printf("Enter 10 Numbers\n") ;

                             for( i = 0 ; i <= 9 ; i++)

                                  {
                                     scanf("%d" , &a[i]) ;
                                  }

                             for( i = 0 ; i <= 9 ; i++ )

                                   {     
                                         if( a[i] % 2==0 )
                                         sum = sum + a[i] ;        //Sum Of Evem Numbers
                                      
                                         else
                                         osum = osum +  a[i] ;     //Sum Of Odd Numbers

                                   }

                             printf("Sum Of First 10 Even Numbers Is %d\n",sum);
                             
                             printf("Sum Of First 10  Odd Numbers Is %d",osum);

                             return 0;

                        
                      }