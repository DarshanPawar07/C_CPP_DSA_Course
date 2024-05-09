                    /* Que - Write a program to count vowels in a given string */

                    #include<stdio.h>
                    #include<string.h>
                    int main()

                            {

                                char A[50],B[]="aeiouAEIOU";

                                int i,j;
                                int c;

                                printf("Enter Your Name\n");
 
                                fgets(A,50,stdin);
                                A[strlen(A)-1]='\0';

    
                                for(i=0, c=0 ; A[i];  i++)

                                    for(j=0 ; B[j] ;j++)

                                        if( A[i] == B[j])
                                            {
                                                c++;
                                                break;
                                            }
               
                                printf("The Number Of Vowels In %s Is %d\n",A,c);

                                return 0;
                                
                            }