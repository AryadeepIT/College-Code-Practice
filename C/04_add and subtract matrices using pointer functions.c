#include <stdio.h>
#include <stdlib.h>
int *ar,*br,*add,*subs,i,j,r1,r2,c1,c2;
void enter();
void addition();
void substraction();
void print(int*);
int main()
{
     printf("Enter the number of rows and columns of the first matrix: ");
     scanf("%d %d",&r1,&c1);
     printf("\nEnter the number of rows and columns of the second matrix: ");
     scanf("%d %d",&r2,&c2);
     if((r1==r2)&&(c1==c2))
         {
             ar=(int*)(malloc((r1*c1)*sizeof(int)));
             br=(int*)(malloc((r1*c1)*sizeof(int)));
             add=(int*)(malloc((r1*c1)*sizeof(int)));
             subs=(int*)(malloc((r1*c1)*sizeof(int)));
             if(ar==NULL||br==NULL)
                 {
                     printf("Memory not allocated..!!");
                     exit(0);
                 }
             printf("\nEnter the elements of the first matrix: \n");
             enter(ar);
             printf("\nEnter the elements of the second matrix: \n");
             enter(br);
             addition();
             substraction();
         }
     else
        printf("\n\nThe operations are not possible...!!!\n\n");
     free(ar);
     free(br);
     free(add);
     free(subs);
     return 0;
}

void enter(int *ar)
    {
        for(i=0;i<r1;i++)
        {
           printf("Enter the elements of row %d: ",i+1);
           for(j=0;j<c1;j++)
                scanf("%d",(ar+(i*c1)+j));
        }
    }

void addition()
    {
        int s[i][j];
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                s[i][j]=*(ar+(i*c1)+j)+ *(br+(i*c1)+j);
            }

        }
        printf("The added matrix is: \n");
        print(s);
    }

void substraction()
    {
        int a[i][j];
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                a[i][j]=*(ar+(i*c1)+j)-(*(br+(i*c1)+j));
            }

        }
        printf("The substracted matrix is: \n");
        print(a);
    }

void print(int *a)
    {
        for(i=0;i<r1;i++)
        {
           for(j=0;j<c1;j++)
                printf("%d ",*(a+(i*c1)+j));
           printf("\n");
        }
    }
