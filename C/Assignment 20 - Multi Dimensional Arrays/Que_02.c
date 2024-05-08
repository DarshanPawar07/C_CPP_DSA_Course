
        /* Que - Write a program to calculate the product of two  matrices each of order 3x3   */

        #include<stdio.h>
        void f1()
                 {
                      int A[3][3],B[3][3],C[3][3];
                      int i,j;

                      printf("Enter The 9 Numbers Of Matrix A\n");

                      for(i=0;i<=2;i++)
                          {
                               for(j=0;j<=2;j++)
                                    {
                                       scanf("%d",&A[i][j]);

                                    }
                           }

                      printf("Enter The 9 Numbers Of Matrix B\n");

                      for(i=0;i<=2;i++)

                           { 
                               for(j=0;j<=2;j++)
                                    {
                                      scanf("%d",&B[i][j]);
                                    }
                           } 

                      printf("The Multiplication Of The Two Matrices Is");
                      printf("\n");

                      for(i=0;i<=2;i++)

                           { 
                              for(j=0;j<=2;j++)
                                  {
                                       C[i][j] = A[i][j] * B[i][j];
                                       printf("%d ",C[i][j]); 
                                  }
                
                              printf("\n");

                           }
                              printf("\n");

                           }

                           int main()
                              {

                                   f1();
                                   
                                   printf("\n");
                                   return 0;
                              }
