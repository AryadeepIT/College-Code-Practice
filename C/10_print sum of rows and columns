#include <stdio.h>
#include <stdlib.h>
int *a,r,c,sr=0,sc=0,i,j;
void input(void);
void sums(void);
int main()
    {
        printf("Enter the number of rows and columns of the matrix: \n");
        scanf("%d %d",&r,&c);
        a=(int*)(malloc((r*c)*sizeof(int)));
        if(a==NULL)
                 {
                     printf("Memory not allocated..!!");
                     exit(0);
                 }
        input();
        sums();
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

void sums()
    {
        printf("The Original Matrix: \n");
        for(i=0;i<r;i++)
        {
           for(j=0;j<c;j++)
                printf("%d ",*(a+(i*c)+j));
           printf("\n");
        }
        for(i=0;i<r;i++)
        {
            sr=0;
            sc=0;
            for(j=0;j<c;j++)
            {
                sr+=*(a+(i*c)+j);
                sc+=*(a+(j*c)+i);
            }
         printf("The sum of the numbers of row %d: %d\n",i+1,sr);
         printf("The sum of the numbers of column %d: %d\n",i+1,sc);
        }
    }
