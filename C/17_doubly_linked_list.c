#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#include <stdlib.h>

typedef struct node
{
    struct node *next;
    int data;
    int x;
    struct node *prev;
}dl;

dl *head = NULL;
void create(dl *);
void display(dl *);
dl *insert_beg(dl *);
void insert_end(dl *);
void insert_before(dl *);
void insert_after(dl *);
void del_beg(dl *);
void del_end(dl *);
void del_before(dl *);
void del_after(dl *);
void del_any(dl *);

int main()
{
    int choice;
    system("cls");

    do
    {
        printf("\t***MAIN MENU***\n");
        printf("\t---------------------\n");
        printf("\n 1. Create the list.");
        printf("\n 2. Display the list.");
        printf("\n 3. Insert at beginning.");
        printf("\n 4. Insert at end.");
        printf("\n 5. Insert before a node.");
        printf("\n 6. Insert after a node.");
        printf("\n 7. Delete from beginning.");
        printf("\n 8. Delete from end.");
        printf("\n 9. Delete before a node.");
        printf("\n 10. Delete after a node.");
        printf("\n 11. Delete from any position.");
        printf("\n 12. End.");
        printf("\n Enter your choice:");
        fflush(stdin);
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: head=(dl *)malloc(sizeof(dl));
                    head->prev = NULL;
                    create(head);
                    printf("\n DOUBLY LINKED LIST CREATED.");
                    break;
            case 2: display(head);
                    break;
            case 3: head = insert_beg(head);
                    break;
            case 4: insert_end(head);
                    break;
            case 5: insert_before(head);
                    break;
            case 6: insert_after(head);
                    break;
            case 7: del_beg(head);
                    break;
            case 8: del_end(head);
                    break;
            case 9: del_before(head);
                    break;
            case 10: del_after(head);
                     break;
            case 11: del_any(head);
                     break;
            default: exit(1);
        }
    }while(choice != 12);
  getch();
  return 0;
}

void create(dl *ptr)
{
    char ch='y';
    printf("Enter the element of the current node:");
    scanf("%d", &ptr->x);
    ptr->next=NULL;
    fflush(stdin);
    printf("\n Do you want to create more nodes?");
    scanf("%c", &ch);

    if(ch=='y')
    {
        ptr->next=(dl *)malloc(sizeof(dl));
        ptr->next->prev=ptr;
        ptr=ptr->next;
        fflush(stdin);
        create(ptr);
    }
    else
        return;
}

void display(dl *ptr)
{
    while(ptr->next)
    {
        printf("%d->",ptr->x);
        ptr=ptr->next;
    }
    do
    {
        printf("%d->", ptr->x);
        ptr=ptr->prev;
    }while(ptr!=NULL);
    return;
}

dl *insert_beg(dl *ptr)
{
    dl *new1;
    new1=(dl *)malloc(sizeof(dl));
    printf("\n Enter the data part of new:");
    scanf("%d", &new1->x);
    new1->prev=ptr->prev;
    new1->next=ptr;
ptr->prev=new1;
return(new1);
}

void insert_end(dl *ptr)
{
    dl *new1;
    new1=(dl *)malloc(sizeof(dl));
    printf("\n Enter the data part of new:");
    scanf("%d", &new1->x);
    while(ptr->next!=NULL)
        ptr=ptr->next;
    new1->prev=ptr;
    new1->next=ptr->next;
    ptr->next=new1;
}

void insert_after(dl *ptr)
{
    dl *new1; int ele;
    printf("\n Enter the ele after which to be inserted:");
    scanf("%d", &ele);
    while(ptr!=NULL)
    {
        if(ptr->x==ele)
        {
            new1=(dl *)malloc(sizeof(dl));
            printf("\n Enter the data part of new:");
            scanf("%d",&new1->x);

            new1->prev=ptr;
            new1->next=ptr->next;
            ptr->next->prev=new1;
            ptr->next=new1;
        }
        ptr=ptr->next;
    }
}

void insert_before(dl *ptr)
{
    dl *new1; int ele;
    printf("\n Enter the ele before which to insert:");
    scanf("%d",&ele);

    while(ptr!=NULL)
    {
        if(ptr->x==ele)
        {
            new1=(dl *)malloc(sizeof(dl));
            printf("\n Enter the data part of new:");
            scanf("%d",&new1->x);

            new1->prev=ptr->prev;
            new1->next=ptr;
            ptr->prev->next=new1;
            ptr->prev=new1;
        }
        ptr=ptr->next;
    }
}

void del_beg(dl *ptr)
{
    dl *ptr1;
    if(ptr==NULL)
        printf("\n The list is empty.");
    else
    {
        ptr1=ptr->next;
        ptr1->prev=ptr->prev;
        head=ptr1;
        free(ptr);
    }
}

void del_end(dl *ptr)
{
    dl *ptr1;
    if(ptr==NULL)
        printf("\n The list is empty.");
    else
    {
        while(ptr->next!=NULL)
            ptr=ptr->next;

        ptr->prev->next=ptr->next;
        free(ptr);
    }
}

void del_after(dl *ptr)
{
    dl *ptr1; int val;
    printf("\n Enter the value of the element after which to be deleted:");
    scanf("%d", &val);
    if(ptr==NULL)
        printf("\n The list is empty.");
    else
    {
        while(ptr->data!=val)
            ptr=ptr->next;

        ptr1=ptr->next;
        ptr->next=ptr1->next;
        ptr1->next->prev=ptr;
        free(ptr1);
    }
}

void del_before(dl *ptr)
{
    dl *ptr1;int val;
    printf("\n Enter the value of the element before which to be inserted:");
    scanf("%d", &val);
    if(ptr==NULL)
        printf("\n The list is empty.");
    else
    {
        while(ptr->data!=val)
            ptr=ptr->next;

        ptr1=ptr->prev;
        ptr->prev=ptr1->prev;
        ptr1->prev->next=ptr;
        free(ptr1);
    }
}

void del_any(dl *ptr)
{
    dl *ptr1;int val;
    printf("\n Enter the value of the element after which to be inserted:");
    scanf("%d", &val);
    if(ptr==NULL)
        printf("\n The list is empty.");
    else
    {
        while(ptr->data!=val)
            ptr=ptr->next;

        ptr1=ptr;
        if(ptr->next!=NULL)
        {
            ptr->prev->next=ptr->next;
            ptr->next->prev=ptr->prev;
        }
        else
        {
            ptr->prev->next=ptr->next;
        }
        free(ptr1);
    }
}