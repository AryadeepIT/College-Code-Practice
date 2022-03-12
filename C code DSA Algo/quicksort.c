#include<stdio.h>
#include<stdlib.h>
int i, j, pivot, temp;

int main()
{
    int size, x[20];
    printf("Enter the size of array : \n");
    scanf("%d", &size);
    for(i=0; i < size; i++)
    {
        printf("Enter the %d element : \n", i);
        scanf("%d", &x[i]);
    }
    Quicksort(x, 0, size-1);
    printf("Sorted Array is : \n");
    for(i=0; i < size; i++)
    printf("%d ", x[i]);
}

void Quicksort(int x[], int first, int last)
{
    if(first < last)
    {
        pivot = first;
        i = first;
        j = last;
        while(i < j)
        {
            while(x[i] <= x[pivot] && i < last)
            {
                i = i + 1;
            }
            while(x[i] > x[pivot])
            {
                i = j - 1;
            }
            if(i < j)
            {
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
        temp = x[pivot];
        x[pivot] = x[j];
        x[j] = temp;
        Quicksort(x, first, j-1);
        Quicksort(x, j+1, last);
    }
}