           
            /* Que -  Write a program to find first occurrence of a given character 
                       in a given string */

             
             #include<stdio.h>
             #include<stdio.h>
    
             int main()
             {  
                char A[50];
                char ch;
                int i,j;

                printf("Enter The String\n");
                fgets(A,50,stdin);

                printf("Enter The Character\n");
                scanf("%c",&ch);

                A[strlen(A)-1]='\0';

                for(i=0;A[i];i++)
                   if(ch == A[i] )
                    break;
                   

                if(A[i]==0)
                   printf("%c Character Does Not Occur In The String %s",ch,A);
                else
                   printf("%c Character Occur In The String %s At Index Number %d ",ch,A,i);

                 
                   
                   return 0;

             }

             /* Occurrence Means We Have To Tell The PosItion Number Where The Particular 
                Character Occur First*/