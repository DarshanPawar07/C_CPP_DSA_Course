
      /* Que -  Write a program to calculate volume of a cuboid  */

     #include<stdio.h>
     int main()

                {  
                      int length , breadth , height ;
                      
                      float volume;

                      printf("Enter the length,breadth,height\n");

                      scanf("%d %d %d" ,&length , &breadth , &height);

                      volume = length * breadth * height ;

                      printf("The volume of cuboid is %f", volume);

                      return 0;
    
                }

