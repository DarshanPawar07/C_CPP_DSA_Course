
              /* Que - Write a program to calculate the difference between two time periods  */


                   struct time 
                   {
                       int hr,min,sec;

                   }t1,t2;

                   struct time difference(struct time t1,struct time t2)
                   {
                        struct time diff;
                        int seconds = (t1.hr*3600+t1.min*60+t1.sec)-(t2.hr*3600+t2.min*60+t2.sec);

                        diff.hr=seconds/3600;
                        seconds=diff.hr%3600;
                        diff.min=seconds/60;
                        diff.sec=seconds%60;

                        return diff;



                   }