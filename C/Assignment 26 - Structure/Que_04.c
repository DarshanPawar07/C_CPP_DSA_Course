
              /* Que - Write a function to find the highest salary employee from a given array 
                       of 10 employees. [Refer structure from question 1 */

                       /* You have given a array of salaries*/

                       #include<stdio.h>
                       #include<string.h>

                       struct employee 
                                     {
                                         int salary[20];

                                     }e;

                        
                      

                           
                        void highest_salary(struct employee e[],int n) //n is the no. of employee in the string.
                         {   
                             int i;
                             struct employee e1;// here we make a new variable e1
                             e1=e[0]; // e1 is the one in which atlast only one highest salary will be stored
                             for(i=1;i<n-1;i++)
                             if(e1.salary<e[i].salary)
                             e1=e[i];

                             return e1;
                         }

                         


                      



                          


                       