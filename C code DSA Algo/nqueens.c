#include<stdio.h>
int place(int x[],int n);
void nqueens(int n);
int place(int x[],int n)
{
    for(int i=1;i<n;i++)
    {
        if(x[i]==x[n] || i-x[i]==n-x[n] || i+x[i]==n+x[n])
        {
            return 0;
        }
    }
    return 1;
}
void printsolution(int n,int x[])
{
    char c[n+1][n+1];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            c[i][j]='*';
        }
    }
    for(int i=1;i<=n;i++)
    {
        c[i][x[i]]='Q';
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            printf("%c ",c[i][j]);
        }
        printf("\n");
    }
}
void nqueens(int n)
{
    int k=1,x[n+1],count=0;
    x[k]=0;
    while(k!=0)
    {
        x[k]+=1;
        while(x[k]<=n &&  (!place(x,k)))
        {
            x[k]+=1;
        }
        if(x[k]<=n)
        {
            if(k==n)
            {
                count++;
                printf("Solution=%d\n",count);
                printsolution(n,x);
            }
            else
            {
                k++;
                x[k]=0;
            }
        }
        else
            k--;
    }
}
int main()
{
    int n=0;
    printf("Enter the number of queens:");
    scanf("%d",&n);
    nqueens(n);
    return 0;
}
