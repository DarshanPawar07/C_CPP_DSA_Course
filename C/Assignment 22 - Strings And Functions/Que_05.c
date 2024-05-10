
              /* Que - Write a function to transform a string into lowercase */

              #include<stdio.h>
              #include<string.h>

              char transform_lowercase(char A[] , char B[])

                                              {

                                                  int i;

                                                  for(i=0;A[i];i++)

                                                  if(A[i] >='A' && A[i] <='Z')
                                                  B[i]=A[i]+32;

                                                  else
                                                  B[i]=A[i];

                                                  return B;
                      
                                              }