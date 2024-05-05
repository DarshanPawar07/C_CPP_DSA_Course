# include<stdio.h>

void printN(int);
int main()

{
    printN(1);
    return 0;

}
void printN(int n)

{   
    
    if(n < 100)
    printN(2*n);
    printf("%d\n",n);

}
