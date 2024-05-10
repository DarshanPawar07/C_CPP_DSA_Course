
             /* Que - Write a function to find character in a given string between 
                      specified indices (start index (inclusive) and end index(exclusive)
            */

              
                 #include<stdio.h>
                 #include<string.h>
                  
                  int finding_character(char A[],char c,int start_index,int end_index)


                 {
                    
                    int i;
                    char c;
                    int l;

                    l=length(A);

                    if(end_index>=l)
                        end_index=l;
                    if(start_index>=l)
                         return -1;  // start index greater than length is invalid.

                    for(i>= start_index;i<= end_index;i++)
                          if(c==A[i])
                          return 1;
                     return -1;

                 }