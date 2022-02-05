#include <stdio.h>
#include <stdlib.h>
void input();
void find();
int *a,i,j,r,c;
int main()
    {
        printf("Enter the number of Rows and Columns: \n");
        scanf("%d %d",&r,&c);
        a=(int*)(malloc((r*c)*sizeof(int)));
        if(a==NULL)
                 {
                     printf("Memory not allocated..!!");
                     exit(0);
                 }
        input();
        find(a);
        free(a);
        return 0;
    }

void input()
    {
         printf("Enter the elements of the Matrix: \n");
         for(i=0;i<r;i++)
            {
                printf("Enter the elements of the Row %d: ",i+1);
                for(j=0;j<c;j++)
                    scanf("%d",(a+(i*c)+j));
            }
    }

void find(int *a)
    {
        int s=*a,l=*a;
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(s>*(a+(i*c)+j))
                    s=*(a+(i*c)+j);
                if(l<*(a+(i*c)+j))
                    l=*(a+(i*c)+j);
            }
        }
        printf("The smallest element in the array: %d\n",s);
        printf("The largest element in the array: %d\n",l);
    }
