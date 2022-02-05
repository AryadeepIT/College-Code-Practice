#include <stdio.h>  
#include <stdlib.h>
#include <stdbool.h>
   
struct node{  
    int data;  
    struct node *next;  
};      
   
struct node *head, *tail = NULL;  
   
void insert(int data) {  

    struct node *newNode = (struct node*)malloc(sizeof(struct node)); 
    newNode->data = data;  
    newNode->next = NULL;  
      
    if(head == NULL) {  
        head = newNode;  
        tail = newNode;  
    }  
    else {  
        tail->next = newNode;  
        tail = newNode;  
    }  
}  
   
void display() {  
    struct node *current = head;  
      
    if(head == NULL) {  
        printf("List is empty\n");  
        return;  
    }  
    while(current != NULL) {  
        printf("%d ", current->data);  
        current = current->next;  
    }  
    printf("\n");  
}  

void delete()
{
    struct node *toDelete;

    if(head == NULL)
    {
        printf("List is already empty.");
    }
    else
    {
        toDelete = head;
        head = head->next;

        free(toDelete);

        printf("SUCCESSFULLY DELETED FIRST NODE OF LIST\n");
    }
}
      
int main()  
{  
    int operation, num;
    bool flag = true;
    while(flag){

        printf("Choose an operation: ");
        printf("\t 1.insert\t 2.delete\t 3.display\t\n");
        scanf("%d",&operation);
        
        switch (operation)
        {
        case 1: 
            printf("Enter the number to insert: ");
            scanf("%d",&num);
            insert(num);
            break;
        case 2:
            delete();
            break;
        case 3:
            display();
            flag = false;
        }
    }
   
    return 0;  
}  