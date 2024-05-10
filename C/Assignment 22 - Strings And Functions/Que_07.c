
             /* Que - Write a function to find a character in a given string.
                      Return index of first occurrence of given character.
                      Return -1 if character not found*/

 
                        #include<stdio.h>
                        #include<string.h>

                        int find_character( char A[], char B[] )
                             {
                                 char c;
                                 int i;

                                 for(i=0;A[i];i++)
                                  { 
                                      if(c==A[i])
                                      return i;
                                  } 

                                 return -1;
                                

                             }
