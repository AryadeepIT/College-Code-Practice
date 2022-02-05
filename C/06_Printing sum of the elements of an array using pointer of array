#include<stdio.h>
int main()
{
    int a[20],i,n,s;
    printf("enter elements of an array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the %d element of the array :",i);
        scanf("%d",(a+i));
    }
    s=sum((a+0),n);
    printf("the sum of elements of array is : %d",s);

}
int sum(int *x,int n)
{
    int s=0,i;
    for(i=0;i<n;i++)
    {
       s+=(*x);
       *x++;
    }
    return(s);
}
