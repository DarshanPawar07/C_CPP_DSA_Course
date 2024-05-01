

        /* Que - Write a program to calculate sum of cubes of first N  natural numbers */
                       
        #include<stdio.h>
        int main()

                  {

                        int i , s , n ; 

                        printf("Enter The value of n\n");
                        scanf("%d",&n);

                        for( i=1 , s=0 ; i<=n ; i++ )
                                                     {
                                                          s = s + (i * i * i) ;
                                                     }
                           
                        printf("Sum Of Cubes Is %d\n",s);

                        return 0;

                  }