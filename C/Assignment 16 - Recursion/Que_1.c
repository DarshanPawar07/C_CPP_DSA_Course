# include<stdio.h>

void printN(int);
int main()

{
   printN(100);
   return 0;
}
void printN(int n)
{
    if(n>0)
    {
        printN(n-1);
        printf("%d\n",n);

    } 
}
 