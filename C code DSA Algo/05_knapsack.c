#include<stdio.h>
#include<stdlib.h>
int i,j,capacity,u;
float x[20],tp;
void main()
{
    int n;
    float ratio[20],temp,temp1,temp2,profit[20],weight[20];
    printf("Enter the number of objects:\n");
    scanf("%d",&n);
    printf("Enter the capacity of knapsack:\n");
    scanf("%d",&capacity);
    for(i=0;i<n;i++)
    {
        printf("Enter the %d profit:\n",i);
        scanf("%f",&profit[i]);
        printf("Enter the %d weight:\n",i);
        scanf("%f",&weight[i]);
    }
    for(i=0;i<n;i++)
        {
            ratio[i]=profit[i]/weight[i];
        }
    for(i=0;i<n;i++){
        for(j=(i+1);j<n;j++)
        {
            if(ratio[i]<ratio[j])
            {
                temp=ratio[j];
                ratio[j]=ratio[i];
                ratio[i]=temp;

                temp1=weight[j];
                weight[j]=weight[i];
                weight[i]=temp1;

                temp2=profit[j];
                profit[j]=profit[i];
                profit[i]=temp2;
            }
        }
    }
    knapsack(n,weight,profit,capacity);
}
void knapsack(int n, float weight[], float profit[], int capacity)
{
    tp=0.0;
    u=capacity;
    for(i=0;i<n;i++)
    {
        x[i]=0.0;
    }
    for(i=0;i<n;i++)
    {
        if(weight[i]>u)
            break;
        else{
            x[i]=1.0;
           tp=tp+profit[i];
            u=u-weight[i];
        }
    }
    if(i<n)
    {
        x[i]=u/weight[i];
        tp=tp+(x[i]*profit[i]);
    }
    for(i=0;i<n;i++)
        printf("%f\n",x[i]);
    printf("The maximum profit is:\n");
    printf("%f\n",tp);
}
