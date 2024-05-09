
             /* Que - Write a program in C to count the total number
                      of alphabets, digits and special  characters in a string*/

             
            #include<stdio.h>
            #include<string.h>
            int main()
                      {   
                   
                         char A[50];
                         int i;
                         int a=0,b=0,c=0;
                
                         printf("Enter The String\n");
                         fgets(A,50,stdin);

                         A[strlen(A)-1]='\0';

                         for(i=0;A[i];i++)
                             {
                                 switch(A[i])

                                 {
                           
                                      case 'a'... 'z':
                                      case 'A'... 'Z':
                                      a++;
                                      break;
                             
                                      case  '1'...'9':
                                      b++;
                                      break;
                            
                                      default:
                                      c++;

                                 } 

                             }

                         printf("\n");
                         printf("Alphabets Are %d\n",a);
                         printf("Digits Are %d\n",b);
                         printf("Special Characters Are %d\n",c);
                         printf("In The Word %s",A);

                         return 0;
                
                      }