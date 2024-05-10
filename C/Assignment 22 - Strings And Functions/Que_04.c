
             /* Que - Write a function to transform string into uppercase */

             #include<stdio.h>
             #include<string.h>


              char Tranform_uppercase( char A[],char B[] )
              
                                                {

                                                    int i;

                                                    for(i=0;A[i];i++)

                                                    if(A[i]>='a' && A[i]<='z')
                                                    B[i]= A[i] - 32;

                                                    else
                                                    B[i] = A[i];

                                                    return A;
                      
                    
                                                 }

         