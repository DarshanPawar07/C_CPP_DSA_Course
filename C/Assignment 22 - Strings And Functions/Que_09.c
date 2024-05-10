
             /* Que - Write a function to swap two characters of a given string 
                      with specified indices */

                       #include<stdio.h>
                        #include<string.h>

                        int swap_characters( char A[] )

                              {
                                
                                 char c,l;
                            
                                 int swap1,swap2; // j & k are the indexes given by user to swap

                                 l=length(A);
                                 
                                  if(swap1 && swap2 > 0)

                                         if(swap1 || swap2 > l)
                                              printf("Swapping Not Possible\n");

                                         else
                                             { 
                                                 c=A[swap1];    /* if it is said tthat swap jth position element
                                                                    with kth position element */

                                                  A[swap1]=A[swap2];
                                                  A[swap2]=c;
                                             } 

                                       return  A;
                              }