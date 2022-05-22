#include<stdio.h>
#include<stdlib.h>
int a[20],rchild, lchild, temp,max,index,i;
void Reheapifydown(int heap[], int start, int finish);
void heapsort(int heap[],int n);
void heapify(int heap[], int n);
void main()
{
    int n;
    printf("Enter number of elements to be inserted in the array:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Enter the %d element of the array:\n",i);
        scanf("%d",&a[i]);
    }
    heapsort(a,n);
    printf("The sorted array is:\n");
    for(i=1;i<=n;i++)
        printf("%d ",a[i]);
}
void Reheapifydown(int heap[], int start, int finish)
{
    lchild= 2*start;
    rchild= lchild+1;
    if(lchild<=finish)
    {
        max=heap[lchild];
        index= lchild;
        if(rchild<=finish)
        {
            if(heap[start]>max)
            {
                max= heap[rchild];
                index= rchild;
            }
        }
        if(heap[start]<heap[index])
        {
            temp=heap[start];
            heap[start]=heap[index];
            heap[index]=temp;
            Reheapifydown(heap,index,finish);
        }
    }
}
void heapsort(int heap[],int n)
{
    heapify(heap,n);
    for(i=n;i>=1;i--)
    {
        temp=a[1];
        a[1]=a[i];
        a[i]=temp;
        Reheapifydown(heap,1,(i-1));
    }
}
void heapify(int heap[], int n)
{
    index= n/2;
    for(i=index;i>=1;i--)
        Reheapifydown(heap,i,n);
}
