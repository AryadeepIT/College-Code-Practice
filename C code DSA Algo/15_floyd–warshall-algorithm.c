#include<stdio.h>
#include<limits.h>
#define MAX 10
#define inf 999

int minimum(int a, int b)
{
    if(a <= b)
        return a;
    else
        return b;
}

void display(int matrix[MAX][MAX], int n)
{
    int i,j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }
}

int main()
{
    int n,adj[10][10],path[10][10];
    int i,j,k;
    printf("Enter the no. of values : ");
    scanf("%d", &n);
    printf("Enter Matrix : ");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            scanf("%d", &adj[i][j]);
    }
    printf("Original Matrix : \n");
    display(adj,n);
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            path[i][j] = adj[i][j];
        }
    }
    for(k=0; k<n; k++)
    {
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
                path[i][j] = minimum(path[i][j], path[i][k] + path[k][j]);
        }
    }
    printf("Required Matrix : \n");
    display(path,n);
    return 0;
}
