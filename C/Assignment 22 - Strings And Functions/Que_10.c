
             /* Que - Write a function to check whether a given string is an alphanumeric 
                      string or not (Alphanumeric string must contain at least one 
                      alphabet and one digit)*/

                      
                       #include<stdio.h>
                        #include<string.h>

                        int alphanumeric_or_not( char A[] )

                                        {
                                            int i,j,alpha,digit;

                                            for(i=0;A[i];i++)

                                            {
                                                
                                                if(A[i]>='a' && A[i]<='z'  || A[i]>='A' && A[i]<= 'z')
                                                      alpha=1;
                                                
                                                if(A[i] >='0' && A[i]<= '9')
                                                     digit=1;
                                                    
                                            }     

                                            if(alpha&digit)
                                               return 1;
                                            else
                                                return 0;
                                            






                              }

                                