
              /* Que -Write a program to store information of n students and display them using structure.*/


              #include<stdio.h>
              #include<string.h>

              struct information
              {
                     int rollno;
                     char name[20];

              }e1;


              struct information scanning()
              { 
                 struct information e1;
                printf("Enter Roll No And Name\n");
                scanf("%d",&e1.rollno);
                fflush(stdin);
                fgets(e1.name,20,stdin);
                e1.name[strlen(e1.name)-1]='\0';
                  
                  return e1;
              }
              

              void printing(struct information e1)
              {
                  struct information e1;
                  printf("%d",e1.rollno);
                  printf("%s",e1.name);
                  return 0;

              }
              void input_student_array(struct information e1[],int n)
              {  int i;
                 for(i=0;i<n;i++)
                   e1[i]=scanning();
              }

              void printing_studnt_array(struct information e1[],int n)
              {
                int i;
                for(i=0;i<n;i++)
                 printing(e1[i]);

              }
             



