
     /* Que -  Define a function to print Pascal Triangle up to N lines. */


     #include<iostream>
     using namespace std;

     /* 
     
     void printPascal(int lines)
{
    int i,j,flag,c,n,r;
    for(i=1;i<=lines;i++)
    {
        flag=1;
        n=i-1;
        r=0;
        for(j=1;j<=2*lines-1;j++)
        {
            if(j>=lines+1-i && j<=lines-1+i)
            {
                if(flag)
                    cout<<combi(n,r++);
                else
                    cout<<" ";
                flag=1-flag;
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    
*/