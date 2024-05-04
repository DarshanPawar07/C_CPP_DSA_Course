
        /* Que - Convert the following if-else-if construct into switch case.
                  f(var == 1) printf("good");
                  else if(var == 2) printf("better") ;
                  else if(var == 3) printf("best");
                  else printf("invalid");  */

        #include<stdio.h>
        int main()

                      {   
                           int vaar ; 

                           printf("Enter The Vaar\n");
                           scanf("%d",&vaar);

                           switch(vaar)

                                {
        
                                   case 1:
                                   printf("Good");
                                   break;

                                   case 2:
                                   printf("Better");
                                   break;

                                   case 3:
                                   printf("Best");
                                   break;
    
                                   default:
                                   printf("Invalid");

                               }

                          return 0;

                      }