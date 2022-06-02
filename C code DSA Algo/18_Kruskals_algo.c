#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mincost=0,n,cost[100][100],i,j,ne=1,min,a,b,u,v,parent[100];;
    printf("Enter the no. of vertices:");
    scanf("%d",&n);
    printf("Enter the adjacency matrix:");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            {
                scanf("%d",&cost[i][j]);
                if(cost[i][j]==0)
                {
                    cost[i][j]=999;
                }
            }
    }
    while(ne<n)
    {
        for(i=1,min=999;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(cost[i][j]<min)
                {
                    min=cost[i][j];
                    a=u=i;
                    b=v=j;
                }
            }
        }
        while(parent[u]!=0)
        {
            u=parent[u];
        }
        while(parent[v]!=0)
        {
            v=parent[v];
        }
        if(u!=v)
        {
            ne++;
            printf("%d %d %d",a,b,min);
            mincost+=min;
            parent[v]=u;
        }
        cost[a][b]=cost[b][a]=999;
    }
    printf("Minimum cost=%d",mincost);
    return 0;
}
