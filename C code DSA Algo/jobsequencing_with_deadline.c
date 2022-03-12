#include<stdio.h>
#include<stdlib.h>

int i,n,t,j,m,k;

int main()
{
    int n, d[20], p[20];
    printf("Enter the number of jobs : \n");
    scanf("%d", &n);
    // printf("Enter the deadline : \n");
    for(i=1; i<=n; i++)
    {
        printf("Enter the %d deadline : \n", i);
        scanf("%d", &d[i]);
        printf("Enter the %d profit : \n", i);
        scanf("%d", &p[i]);
    }
    job(d,p,n);
}

void job(int deadline[], int profit[], int n1)
{
    t=0;
    for(i=1; i<=n1; i++)
    {
        printf("%d profit is : %d \n", i, profit[i]);
        if(t < profit[i])
        t = profit[i];
    }
    for(i=1; i<=n1; i++)
    {
        for(j=(i+1); j<=n1; j++)
        {
            if(deadline[i] != deadline[j])
            {
                m = profit[i] + profit[j];
            }
            else if(deadline[i] > deadline[j])
            {
                k = n1 + 1;
            }
            k++;
            if(m > t)
            {
                t = m;
            }
        }
    }
    printf("Maximum profit is : %d \n", t);
}