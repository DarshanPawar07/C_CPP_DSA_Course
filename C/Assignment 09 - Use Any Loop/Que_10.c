
             /* Que - Write a program to reverse a given number */
           
            #include<stdio.h>
            int main()

                    {
                           int x , y = 0 ,z;

                           printf("Enter The Number\n");
                           scanf("%d",&x); 
                         
                           while(x != 0)

                                 {
                                     z = x % 10 ;
                                     y =  y * 10 + z ;
                                     x /= 10 ;
                                   
                                 }

                           printf("%d",y);

                           return 0;

                    }
                       
