
              /* Que -Write a program to enter the marks of 5 students in Chemistry,
                      Mathematics and Physics (each out of 100) using a structure named
                      Marks having elements roll no.. name, chem_marks, maths_marks and phy_marks
                      and then display the percentage of each student..*/


                      #include<stdio.h>
                      #include<string.h>

                      struct marks
                      {
                           int chem_marks;
                           int maths_marks;
                           int physics_marks;
                           int rollno;
                           char name[20];

                      }s1;

                      struct marks scanning()
                      {    
                           struct marks s1;
                           printf("Enter The Marks In Chemistry\n");
                           scanf("%d",&s1.chem_marks);
                           printf("Enter The Marks In Maths\n");
                           scanf("%d",&s1.maths_marks);
                           printf("Enter The Marks In Physics\n");
                           scanf("%d",&s1.physics_marks);
                           printf("Enter Your Roll Number");
                           scanf("%d",&s1.rollno);
                           printf("Enter Your Name");
                           fflush(stdin);
                           fgets(20,s1.name,stdin);
                           s1.name[strlen(s1.name)-1]='\0';

                           return s1;
                      }

                      void printing(struct marks s1)
                      {
                          struct marks s1;
                          printf("Your Marks In Chemistry Are %d \n",s1.chem_marks);
                          printf("Your Marks In Maths Are %d \n",s1.maths_marks);
                          printf("Your Marks In Physics Are %d \n",s1.physics_marks);
                          printf("Your Roll Number Is %d",s1.rollno);
                          printf("Your Name Is %s");

                          return 0;
                      }

                      void input_marks(struct marks s1[])
                      { 
                        int i;
                         for(i=0;i<=4;i++)
                          s1[i]=scanning();

                      }

                      void printing_marks(struct marks s1[])
                      {
                        int i;
                        for(i=0;i<=4;i++)
                         printing(s1[i]);
                      }

                      

