#include <stdio.h>
#include <stdlib.h>
# define MAX 999
void dij(int n,int v,int cost[10][10],int dist[])
{
    int i,j,flag[100],min,w,u;
    for(i=1;i<=n;i++)
    {
        flag[i]=0;
        dist[i]=cost[v][i];
    }
    int count=2;
    while(count<=n)
    {
        min=99;
        for(w=1;w<=n;w++)
        {
            if(dist[w]<min && !flag[w])
            {
                min=dist[w];
                u=w;
            }
        }
            flag[u]=1;
            count++;
            for(w=1;w<=n;w++)
            {
                if(dist[u]+cost[u][w]<dist[w]&&!flag[w])
                {
                    dist[w]=dist[u]+cost[u][w];
                }
            }

    }
}
int main()
{
    int n,v,cost[10][10],dist[100],i,j;
    printf("Enter the no. of nodes : \n");
    scanf("%d",&n);
    printf("\nEnter the cost : ");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&cost[i][j]);
            if(cost[i][j]==0)
            {
                cost[i][j]=MAX;
            }
        }
    }
    printf("\nEnter the source vertex : ");
    scanf("%d",&v);
    dij(n,v,cost,dist);
    printf("\nThe shortest path is : ");
    for(i=1;i<=n;i++)
    {
        if(i!=v)
        {
            printf("\n%d-> %d = %d\n",v,i,dist[i]);
        }
    }
    return 0;
}
