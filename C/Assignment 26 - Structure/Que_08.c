
              /* Que -Write a program to store information of 10 students and display them using structure.*/


              #include<stdio.h>
              #include<string.h>


              struct student 
              {
                  char name[20];
                  int class;
                  int marks;
              }s1;

              void storing(struct student s1)
              {   
                  struct student s1;
                  printf("Enter The Class\n");
                  scanf("%d",s1.class);
                  fflush(stdin);
                 
                  printf("Enter The Name Of The Students\n");
                  fgets(s1.name,20,stdin);
                  s1.name[strlen(s1.name)]='\0';
                 
                  printf("Enter The Marks\n");
                  scanf("%d",s1.marks);

                  return s1;
                 
             }

             void displaying(struct student s1)
                        {
                             printf("%s Of Class %d Has %d Marks",s1.name,s1.class,s1.marks);
                            
                             return s1;

                        }

                      