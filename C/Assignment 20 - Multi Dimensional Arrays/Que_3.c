
        /* Que - Write a program to print the transpose of a given matrix. */

        #include<stdio.h>
         
         void f1()
         
                {

                    int A[3][3],B[3][3],C[3][3];

                    int i,j;
     
                    printf("Enter The 9 Numbers Of Matrix \n");

                    for(i=0;i<=2;i++)

                    for(j=0;j<=2;j++)
                        {
                            scanf("%d",&A[i][j]);
                        }

                    printf("\n");
          
                    printf("The Transpose Of The Matrix Is\n") ;
                    printf("\n");
     
                    for(i=0;i<=2;i++)

                         { 
                            for(j=0;j<=2;j++)
            
                                {  
                                      if(i==j)
                                          {
                                             C[i][j]=A[i][j];
                                          }

                                       else
                                          {
                                               C[i][j]=A[j][i];
                                          }

                                       printf("%d ",C[i][j]);

                                }
             
                             printf("\n");
                         }
                       
                        printf("\n");
    
                }


                int main()

                    {
                        f1();

                        return 0;
                    } 