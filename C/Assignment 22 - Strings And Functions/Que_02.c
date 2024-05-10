
            /* Que - Write a function to reverse a string */

            #include<stdio.h>
            #include<string.h>

            char reverse( char A[] )

                                  {   
                                      int i;
                                      char c,l;
                
                                      A[strlen(A)-1]='\0';
                                      l=strlen(A);

                                      for(i=0;i<l/2;i++)
                                      
                                           {
                                               c = A[i];
                                               A[i]=A[l-1-i];
                                               A[l-1-i]=c;
                    
                                            }

                                      return A;

                                  }