
            /* Que - Four players are playing a tournament of Chess with round robin
                    method (each player will play with every other player). 
                    Each win has 2 points, draw has 1 point and loose has 0 points.
                    Declare a score_board two dimensional array to store the
                    scores of the players agains each player*/

             #include<stdio.h>
             void f1()
                  {    
                        int A[4],B[4],C[4],D[4];
                        int A1,B1,C1,A2,A0,B2,B0,C2,C3,D1,D2,D0,i,j,k,l;


                       printf("Enter Whether A0 Wins(2),Losses(0),Draw(1) In The Match Between A0B0\n");
                       scanf("%d",&A0);

                         for(i=0;A[0];)
                         for(j=0;B[0];)
                        if(A0==2)
                       {
                         A[i]=2;
                         B[j]=0;

                       }
                       else if(A0==1)
                       {
                        A[i]=1;
                        B[j]=1;
                       }
                       else
                       {

                        A[i]=0;
                        B[j]=2;
                     }
                       
                  
                       printf("Enter Whether A1 Wins(2),Losses(0),Draw(1) In The Match Between A1C0\n");
                       scanf("%d",&A1);

                         for(i=1;A[1];)
                         for(k=0;C[0] ;)
                      if(A1==2)
                       {
                         A[i]=2;
                         C[k]=0;

                       }
                       else if(A0==1)
                       {
                        A[i]=1;
                        C[k]=1;
                       }
                       else
                       {

                        A[i]=0;
                        C[k]=2;

                       }
                       
                        

                       printf("Enter Whether A2 Wins(2),Losses(0),Draw(1) In The Match Between A2D0\n");
                       scanf("%d",&A2);
                       for(i=2;A[2];)
                         for(l=0;D[0] ;)

                      if(A2==2)
                       {
                         A[i]=2;
                         D[l]=0;

                       }
                       else if(A2==1)
                       {
                        A[i]=1;
                        D[l]=1;
                       }
                       else
                       {

                        A[i]=0;
                        D[l]=2;

                       }
                      
                       printf("Enter Whether B1 Wins(2),Losses(0),Draw(1) In The Match Between B1C1\n");
                       scanf("%d",&B1);
                       for(j=1;B[1];)
                         for(k=1;C[1] ;)
                       if(B1==2)
                       {
                         B[j]=2;
                         C[k]=0;

                       }
                       else if(B1==1)
                       {
                        B[j]=1;
                        C[k]=1;
                       }
                       else
                       {

                        B[j]=0;
                        C[k]=2;

                       }
                      
                      printf("Enter Whether B2 Wins(2),Losses(0),Draw(1) In The Match Between B2D1\n");
                      scanf("%d",&B2);
                      for(j=2;B[2];)
                         for(l=1;D[1];)
                       if(B2==2)
                       {
                         B[j]=2;
                         D[l]=0;

                       }
                       else if(B2==1)
                       {
                        B[j]=1;
                        D[l]=1;
                       }
                       else
                       {

                        B[j]=0;
                        D[l]=2;

                       }
 
                       printf("Enter Whether C2 Wins(2),Losses(0),Draw(1) In The Match Between C2D2\n");
                       scanf("%d",&C2);
                       for(k=2;C[2];)
                         for(l=2;D[2] ;)
                       if(C2==2)
                       {
                         C[k]=2;
                         D[l]=0;

                       }
                       else if(C2==1)
                       {
                        C[k]=1;
                        D[l]=1;
                       }
                       else
                       {

                        C[k]=0;
                        D[l]=2;

                       }


                       printf("%s",A);
                       printf("%s",B);
                       printf("%s",C);
                       printf("%s",D);
                    
                  }

                int main()
                         {
                              f1();
                              return 0;
                         }