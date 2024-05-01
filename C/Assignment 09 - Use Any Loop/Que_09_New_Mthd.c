
        /* Que - Write a program to calculate LCM of two numbers */

        #include<stdio.h>
        int main()

                  {  

                        int a , b , i , flag , l ;

                        printf("Enter the numbers\n");
                        scanf("%d %d",&a,&b);

                        for( i=2 , l=1 , flag=0 ; a>1 || b>1 ; )
                        
                                                      {

                                                           if( a % i == 0)
                                                                          {
                                                                             a=a/i;
                                                                             flag=1;
                                                                          }

                                                            if( b % i == 0)
                                                                          {
                                                                             b=b/i;
                                                                             flag=1;
                                                                          }

                                                            if(flag == 1)
                                                                          {
                                                                             l = l*i;
                                                                             flag =0;
                                                                          }

                                                            else
                                                                 {
                                                                    i++;
                                                                 }

                                                       }

                        printf("LCM Of %d & %d is %d", a, b, l);
 
    
                        return 0 ;

                  }