
             /* Que - Write a function to find a word in a given string */

              #include<stdio.h>
              #include<string.h>
              void find_word(char A[])
              {
                  int i;
                  char word;
                  printf("Enter A Character");
                  scanf("%c",&word);
                  for(i=0;A[i];i++);
                  if(A[i]==word)
                  {
                    printf("%d",i);

                  }
                  else
                  {
                    printf("This Character Does not exist");
                  }

                  return 0;
              }
              int main()
              {   
                 char A[]= " darshan ";
                 
                 find_word(A);

                 return 0;

              }