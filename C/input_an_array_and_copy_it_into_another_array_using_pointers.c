
#include <stdio.h>
#include <stdlib.h>
int *ar,*br,e,i;
void enter();
void cpy();
void print();
int main()
    {
        printf("Enter the number of elements: \n");
        scanf("%d",&e);
        ar=(int*)(malloc(e*sizeof(int)));
        br=(int*)(malloc(e*sizeof(int)));
        enter();
        cpy();
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

void cpy()
    {
        for(i=0;i<e;i++)
            br[i]=*(ar+i);
    }

void print()
    {
        printf("The original array elements are: \n");
        for(i=0;i<e;i++)
            printf("%d ",*(ar+i));
        printf("\nThe copied array elements are: \n");
        for(i=0;i<e;i++)
            printf("%d ",*(br+i));
    }
