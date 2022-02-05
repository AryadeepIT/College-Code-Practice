#include <stdio.h>
#include <stdlib.h>
int *ar,e,i,s;
void enter();
void search();
int main()
    {
        printf("Enter the number of elements: \n");
        scanf("%d",&e);
        ar=(int*)(malloc(e*sizeof(int)));
        enter();
        printf("Enter the number to be searched: \n");
        scanf("%d",&s);
        search(s);
        free(ar);
        return 0;
    }

void enter()
    {
        printf("Enter the elements: \n");
        for(i=0;i<e;i++)
            scanf("%d",(ar+i));
    }

void search(int s)
    {
        int flag=0;
        for(i=0;i<e;i++)
           {
                if(*(ar+i)==s)
                    {
                         flag=1;
                         break;
                    }
           }
        if(flag==1)
            printf("The number is found in position %d.",i+1);
        else
            printf("The number is not present in the given array.");
    }
