#include<stdio.h>
#include<stdlib.h>
typedef struct list {
int x;
struct list *next;}l;
l* head,*head1;
void create(l*);
l* delete_first();
l* delete_middle();
l* delete_last();
void display(l*);
int main()
{
    int n;
    char ch;
    head=(l*)malloc(sizeof(l));
     if(head==NULL)
        printf("Memory is not allocated:");
    printf("Creating the list:\n");
    create(head);
    head1=head;
    display(head1);
        do{
      printf("Press 1 for deletion of first node:\n");
      printf("Press 2 for deletion of any middle node:\n");
      printf("Press 3 for deletion of last node:\n");
      printf("Enter choice:\n");
      fflush(stdin);
      scanf("%d",&n);
      switch(n)
      {
      case 1:
        {head1=delete_first();
        printf("Displaying the list:\n");
        display(head1);
        printf("\n");}
        break;
      case 2:
        {head1=delete_middle();
        printf("Displaying the list:\n");
        display(head1);}
        break;
      case 3:
        {head1=delete_last();
        printf("Displaying the list:\n");
        display(head1);}
        break;
      default:
        printf("Wrong choice entered.\n");
      }
      printf("Do you want to continue??\n Press Y or y for continue\n To exit press N or n\n");
      fflush(stdin);
      scanf("%c",&ch);
        }while(ch!='n');
}

void create(l* ptr)
{
    char ch;
    printf("enter the data part of the node:\n");
    scanf("%d",&ptr->x);
    ptr->next=NULL;
    printf("Do you want to continue??\n");
    fflush(stdin);
    scanf("%c",&ch);
    if(ch=='y' || ch=='Y')
    {
        ptr->next=(l*)malloc(sizeof(l));
        ptr=ptr->next;
        return(create(ptr));
    }
}
l* delete_first()
{
   l *ptr;
   ptr=head;
   head=head->next;
   free(ptr);
   return(head);
}
l* delete_middle()
{
    l *ptr,*prev;
    int ele;
    ptr=head;
    printf("enter the element which is to be deleted:\n");
    scanf("%d",&ele);
    while(ptr->x!=ele)
    {
        prev=ptr;
        ptr=ptr->next;
    }
    prev->next=ptr->next;
    free(ptr);
    return(head);
}
l* delete_last()
{
    l *prev,*ptr;
    ptr=head;
    while(ptr->next!=NULL)
    {
        prev=ptr;
        ptr=ptr->next;
    }
    prev->next=NULL;
    free(ptr);
    return(head);
}
void display(l *ptr)
{
    while(ptr!=NULL)
    {
        printf("%d ",ptr->x);
        ptr=ptr->next;
    }
}
