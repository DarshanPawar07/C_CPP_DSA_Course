# include<stdio.h>

void printN(int);
int main()
{
    printN(100);
    return 0;
}

 void printN(int n)
{   
    if( 2*n -3 == 0)
    printN(2*n - 3);
    printf("%d\n",&n);

}