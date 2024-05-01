
            /* Que- Write A Program TO Take Marks Of 5 Subjects From The User. Assume Marks Are  Given Out 
                    Of 100 And Passing Marks Is 33.Now Display Whether The Candidate Passed The Examination
                    Or Failed */

        #include <stdio.h>
        int main()

                    {
 
                         int Eng, Hindi, Phy, Chem, Maths , n=33 ;
                   

                         printf("Enter Marks In Eng , Hindi , Phy , Chem , Maths Out Of 100\n");

                         scanf(" %d %d %d %d %d ", &Eng, &Hindi, &Phy, &Chem, &Maths) ;

                         if ( Eng & Hindi & Phy & Chem & Maths  >= n )
                                         { 
                                             printf("You Are Passed");
                                         }

                         else
                            {
                                printf("You Are Failed");
                            } 


                         return 0;


                    }