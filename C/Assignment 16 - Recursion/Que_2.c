# include<stdio.h>

void printN(int);
int main()
{

    printN(1);
    return 0;
} 
void printN(int n)
{
    if(n<=100)
    {
        printN(n+1);
        printf("%d\n",n);
    }
}

