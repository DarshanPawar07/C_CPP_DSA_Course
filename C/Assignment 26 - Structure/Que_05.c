
              /* Que - Write a function to sort employees according to their salaries
                       [ refer structure from question 1] */
  
                       #include<stdio.h>
                       #include<string.h>   
                       #include<math.h>
                       #include<stdlib.h>                 

                        struct employee 
                                     {
                                         int salary[20];

                                     }e;

                           
                      int Index_Of_highest_salary(struct employee e[],int n) //n is the no. of employee in the string.
                         {   
                             int i,index;
                             struct employee e1;
                             e1=e[0]; 
                             for(i=1;i<n-1;i++)
                             if(e1.salary<e[i].salary)
                               {
                                    e1=e[i];
                                    index=i;

                               }
                             return index;
                         }

                /* by finding the index of highest salary we will sort the array salarywise
                     and will keep highest salary last index as we are sorting it from lowest to highest salary*/
  
                       
                            
                        void sort_by_salary(struct employee e[],int n)
                        {   
                            struct employee temp //temp is a a variable made to store data temporary
                            int i,index;
                            
                            for(i=n-1;i=1;i--)
                            {
                                index=Index_Of_highest_salary(e,i+1);
                                temp=e[n-1];
                                e[i]=e[index];
                                e[index]=temp;
                            }
                            

                        }