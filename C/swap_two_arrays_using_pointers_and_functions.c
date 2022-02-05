#include <stdio.h>
#include <stdlib.h>
int *ar,*br,n,n1,i;
void enter(int*,int);
void swap(int*,int*,int,int);
void print();
int main()
    {
        printf("Enter the number of elements of the first array: \n");
        scanf("%d",&n);
        printf("Enter the number of elements of the second array: \n");
        scanf("%d",&n1);
        ar=(int*)(malloc(n*sizeof(int)));
        br=(int*)(malloc(n1*sizeof(int)));
        printf("Enter the elements of the first array: ");
        enter(ar,n);
        printf("Enter the elements of the second array: ");
        enter(br,n1);
        if(n==n1)
            {
                swap(ar,br,n,n1);
            }
        else if(n>n1)
            {
                br=realloc(br,n*sizeof(int));
                swap(ar,br,n,n1);
            }
        else
            {
                ar=realloc(ar,n1*sizeof(int));
                swap(br,ar,n1,n);
            }
        print();
        free(ar);
        free(br);
        return 0;
    }

void enter(int *ar,int n)
    {
        for(i=0;i<n;i++)
            scanf("%d",(ar+i));
    }

void swap(int *ar,int *br,int n,int n1)
    {
       int t=0;
       for(i=0;i<n;i++)
           {
              t=*(ar+i);
              ar[i]=*(br+i);
              br[i]=t;
           }
    }

void print()
    {
        printf("The elements of the first array after swapping: \n");
        for(i=0;i<n1;i++)
            printf("%d ",*(ar+i));
        printf("\nThe elements of the second array after swapping: \n");
        for(i=0;i<n;i++)
            printf("%d ",*(br+i));
    }
