#include <stdio.h>
#include <stdlib.h>
int *ar,*br,e,i;
void enter();
void rev();
void print();
int main()
    {
        printf("Enter the number of elements: \n");
        scanf("%d",&e);
        ar=(int*)(malloc(e*sizeof(int)));
        br=(int*)(malloc(e*sizeof(int)));
        enter();
        rev();
        print();
        free(ar);
        free(br);
        return 0;
    }

void enter()
    {
        printf("Enter the elements: \n");
        for(i=0;i<e;i++)
            scanf("%d",(ar+i));
    }

void rev()
    {
        int t=e;
        for(i=0;i<e;i++)
            {
                br[--t]=*(ar+i);
            }
    }

void print()
    {
        printf("The original array elements are: \n");
        for(i=0;i<e;i++)
            printf("%d ",*(ar+i));
        printf("\nThe reversed array elements are: \n");
        for(i=0;i<e;i++)
            printf("%d ",*(br+i));
    }
