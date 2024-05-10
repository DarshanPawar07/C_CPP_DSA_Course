
            /* Que - Write a function to count vowels in a given string */
            
            #include<stdio.h>
            #include<string.h>
            
            int count_vowels( char A[], char B[])
                                          {

                                               int i,j,count;
                                               A[50]="AEIOUaeiou";

                                               for(i=0;A[i];i++)
                                                  for(j=0;B[j];j++)
                                                       if(A[i]==B[j])
                                                          count++;
                                                 
                                                return count;


                                          }