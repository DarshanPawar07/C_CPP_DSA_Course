
        /* Que - Program to find and display grade obtained by a student in a test. Grading specifications are as follows
                 - Marks from 90 to 100 Grade A
                 - Marks from 80 to less than 90: Grade B
                 - Marks from 70 to less than 80 Grade C
                 - Marks from 60 to less than 70: Grade D - Marks from 50 to less than 60: Grade E
                 - Marks below 50: Grade F    */

         #include<stdio.h>
         int main()

                     {   
                           char m;

                           printf("Enter The Grade\n");
                           scanf("%c",&m);

                           switch(m)

                                  {

                                      case 'A':
                                      printf("Marks From 90 To 100");
                                      break;

                                      case'B':
                                      printf("Marks From 80 To Less Than 90");
                                      break;

                                      case 'C':
                                      printf("Marks From 70 To Less Than 80");
                                      break;

                                      case 'D':
                                      printf("Marks From 60 To Less Than 70");
                                      break;

                                      case 'E':
                                      printf("Marks From 50 To Less Than 60");
                                      break;

                                      case 'F':
                                      printf("Marks Below 50");
                                      break;
  
                                      default:
                                      printf("Invalid Marks");

                                }

                            return 0;

                     }                      