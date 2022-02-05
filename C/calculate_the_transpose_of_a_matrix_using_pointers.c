#include <stdio.h>
#include <stdlib.h>
void input();
void transpose();
void display(int*,int,int);
int *a,*b,i,j,r,c;
int main()
    {
        printf("Enter the number of Rows and Columns: \n");
        scanf("%d %d",&r,&c);
        a=(int*)(malloc((r*c)*sizeof(int)));
        b=(int*)(malloc((c*r)*sizeof(int)));
        if(a==NULL||b==NULL)
                 {
                     printf("Memory not allocated..!!");
                     exit(0);
                 }
        input();
        transpose();
        printf("The Original Matrix: \n");
        display(a,r,c);
        printf("The Transposed Matrix: \n");
        display(b,c,r);
        free(a);
        free(b);
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

void transpose()
    {
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
                *(b+(j*r)+i)=*(a+(i*c)+j);
        }
    }

void display(int *a,int r,int c)
    {
        for(i=0;i<r;i++)
        {
           for(j=0;j<c;j++)
                printf("%d ",*(a+(i*c)+j));
           printf("\n");
        }
    }
