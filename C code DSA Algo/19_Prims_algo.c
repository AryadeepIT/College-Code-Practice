#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mincost=0,n,cost[100][100],i,j,ne=1,min,a,b,u,v,visited[100];
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
                visited[1]=1;
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
                    if(visited[i]!=0)
                    {
                        min=cost[i][j];
                        a=u=i;
                        b=v=j;
                    }
                }
            }
        }
        if(visited[u]==0 || visited[v]==0)
        {
            printf("%d %d %d %d\n",ne++,a,b,min);
            mincost+=min;
            visited[b]=1;
        }

        cost[a][b]=cost[b][a]=999;
    }
    printf("Minimum cost=%d",mincost);
    return 0;
}
