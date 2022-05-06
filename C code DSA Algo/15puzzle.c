#include<stdio.h>
#include <stdlib.h>
int table[100][100],i,j,temp;
void moveright()
{
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(table[i][j]==0 && j!=0)
            {
                temp=table[i][j-1];
                table[i][j-1]=0;
                table[i][j]=temp;
            }
        }
    }
}
void moveleft()
{
    for(i=3;i>=0;i--)
    {
        for(j=3;j>=0;j--)
        {
            if(table[i][j]==0 && j!=3)
            {
                temp=table[i][j+1];
                table[i][j+1]=0;
                table[i][j]=temp;
            }
        }
    }
}
void moveup()
{
    for(i=3;i>=0;i--)
    {
        for(j=3;j>=0;j--)
        {
            if(table[i][j]==0 && i!=3)
            {
                temp=table[i+1][j];
                table[i+1][j]=0;
                table[i][j]=temp;
            }
        }
    }
}
void movedown()
{
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(table[i][j]==0 && i!=0)
            {
                temp=table[i-1][j];
                table[i-1][j]=0;
                table[i][j]=temp;
            }
        }
    }
}
void displaytable()
{
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(table[i][j]==0)
                printf("   ");
            else if(table[i][j]<10)
                printf("%d  ",table[i][j]);
            else
                printf("%d ",table[i][j]);
        }
        printf("\n");
    }
}
int checkforfinish()
{
    int result=0;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(table[i][j]==temp)
            {
                temp=temp+1;
            }
        }
    }
    if(temp==16 || temp==15)
    {
        result=1;
    }
    return result;
}
void movenumbers()
{
    char key;
    int s;
    printf("Your choices are:");
    printf("\nr - To move right.");
    printf("\nl - To move left.");
    printf("\nu - To move up.");
    printf("\nd - To move down.");
    printf("\nc - To check whether the game is completed or not");
    printf("\ne - To exit the game.\n");
    while(key!='e')
    {
        again:
        fflush(stdin);
        printf("Enter the key:");
        scanf("%c",&key);
        switch(key)
        {
            case 'l':moveleft();
                    displaytable();
                    break;
            case 'r':moveright();
                    displaytable();
                    break;
            case 'u': moveup();
                    displaytable();
                    break;
            case 'd':movedown();
                    displaytable();
                    break;
            case 'c':s=checkforfinish();
                    if(s==1)
                    {
                        printf("Game Completed successfully\n");
                        exit(0);
                    }
                    else
                    {
                        printf("Game is not Completed.Continue with move.\n");
                        goto again;
                    }
        }

    }
    if(key=='e')
    {
        printf("Game exited successfully.Thank You!");
    }
}
void ownsetup()
{
    printf("Enter the elements:");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&table[i][j]);
        }
    }
    printf("The elements entered by you:\n");
    displaytable();
    movenumbers();
}
int main()
{
    ownsetup();
    return 0;
}
