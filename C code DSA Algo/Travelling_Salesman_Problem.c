#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int n;
int a[MAX][MAX];
int visited[MAX];
int cost=0;

void get()
{
    int i,j;
    printf("Enter the no. of cities : ");
    scanf("%d",&n);
    printf("Enter the cost matrix : \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0;i<n;i++)
        visited[i]=0;
}
int least(int c)
{
    int i,min=999,nc=999;
    int kmin;
    for(i=0;i<n;i++)
    {
        if(a[c][i]!=0 && visited[i]==0)
        {
            if(a[c][i]<min)
            {
                min=a[i][0]+a[c][i];
                kmin=a[c][i];
                nc=i;
            }
        }

    }
    if(min!=999)
    {
        cost=cost+kmin;
    }
    return nc;
}
void mincost(int city)
{
    visited[city]=1;
    printf("%d",city+1);
    int ncity=least(city);
    if(ncity==999)
    {
        ncity=0;
        printf("%d",ncity+1);
        cost=cost+a[city][ncity];
        return;
    }
    mincost(ncity);
}

void put()
{
    printf("\n");
    printf("The cost is : %d",cost);
}
int main()
{
    get();
    mincost(0);
    put();

    return 0;
}

