//graph coloring

#include<stdio.h>
#include<stdlib.h>
int max=100,a[100][100],color[100],degree[100],NN[100],n,NNcount,unprocessed,scanned[100];

void getinput()
{
    int i,j;
    printf("Enter the number of rows/columns:");
    scanf("%d",&n);
    printf("Enter the adjacency matrix:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
}

void init()
{
    int i,j;
    for(i=0;i<n;i++)
    {
        color[i]=0;
        degree[i]=0;
        for(j=0;j<n;j++)
        {
            if(a[i][j]==1)
                degree[i]++;
        }
    }
    NNcount=0;
    unprocessed=n;
}

int maxdegreevertex()
{
    int max_i,i;
    int max1=-1;
    for(i=0;i<n;i++)
    {
        if(color[i]==0)
        {
            if(degree[i]>max1)
            {
                max1=degree[i];
                max_i=i;
            }
        }
    }
    return max_i;
}

int maxdegreeinNN()
{
    int temp,temp_y,i,j;
    max=0;
    for(i=0;i<=NNcount-1;i++)
    {
        temp=0;
        for(j=0;j<=n-1;j++)
        {
            if(color[NN[j]]==0&&a[i][NN[j]]==1)
                temp++;
        }
        if(temp>max)
        {
            max=temp;
            temp_y=NN[i];
        }
    }
    return temp_y;
}

void coloring()
{
    int x,y,colornumber=0;
    while(unprocessed>0)
    {
        int verticesincommon=0;
        x=maxdegreevertex();
        colornumber++;
        color[x]=colornumber;
        unprocessed--;
        updateNN(colornumber);
        while(NNcount>0)
        {
            y=find(colornumber,verticesincommon);
            if(verticesincommon==0)
                y=maxdegreeinNN();
            color[y]=colornumber;
            unprocessed--;
            updateNN(colornumber);
        }
    }
}

int scannedinit(int scanned[max])
{
    int i;
    for(i=0;i<n;i++)
        scanned[i]=0;
}

int updateNN(int colornumber)
{
    int i,j;
    NNcount=0;
    for(i=0;i<n;i++)
    {
        if(color[i]==0)
            NN[NNcount]=i;
        if(color[i]==colornumber)
        {
            for(j=0;j<NNcount;j++)
            {
                while(a[i][NN[j]]==1)
                {
                    NN[j]=NN[NNcount-1];
                    NNcount--;
                }
            }
        }
    }
}

int find(int colornumber, int verticesincommon)
{
    int temp_y,temp,y,i,x,k;
    verticesincommon=0;
    for(i=0;i,NNcount;i++)
    {
        temp_y=NN[i];
        temp=0;
        scannedinit(scanned);
        for(x=0;x<n;x++)
        {
            if(color[x]=colornumber)
            {
                for(k=0;k<n;k++)
                {
                    if(color[k]==0&&scanned[k]==0)
                    {
                        if(a[x,k]==1&&a[temp_y,k]==1)
                        {
                            temp++;
                            scanned[k]=1;
                        }
                    }
                }
            }
        }
        if(temp>verticesincommon)
        {
            verticesincommon=temp;
            y=temp_y;
        }
    }
    return y;
}

int main()
{
    int i;
    getinput();
    init();
    coloring();
    for(i=0;i<n;i++)
        printf("%d %d\n",i+1,color[i]);
    return 0;
}
