
              /* Que - Write a function to compare two strings. */

              /* Compare krna means Jo bhi pehele Mismatched Letter Hai Unke
                 ASCII code Ka Diffrence retrun kr de*/ 

              #include<stdio.h>
              #include<string.h>

              int Compare( char A[] , char B[] )
                                      {
                                         
                                           int i;

                                           for(i=0;A[i]&&B[i];i++)
                                           
                                                if( A[i]!=B[i] )
                                                break;
                                             
                                                return A[i]-B[i];
                                            
                                      }
