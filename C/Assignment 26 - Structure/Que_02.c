
              /* Que - Write a function to take input employee data from the user.
                       [ Refer structure from question 1 ]    */

                       
                        #include<stdio.h>
                        #include<string.h>

                       /* struct employee
                                     {
                                           int member_id;
                                           char name[20];
                                           float salary;
                                      }e1;*/

                        void input(struct employee e1)
                         {  
                            //struct employee e1;
                            printf("Enter memer id , name , salary\n");
                            scanf("\n%d\n",&e1.member_id);
                            fflush(stdin);
                            fgets(e1.name,20,stdin);
                            e1.name[strlen(e1.name)]='\0';
                            scanf("%f",&e1.salary);
                            return(e1);
                            displaying(e1);
                           
                         }

                        /* void displaying(struct employee e1)
                         {
                            printf("%d\n %s\n %f\n",e1.member_id,e1.name,e1.salary);
                         }

                         int main()
                         {  
                            input(e1);
                            
                             
                            return 0;

                         }*/