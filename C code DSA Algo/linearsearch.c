#include<stdio.h>
#include<stdlib.h>
void main(){
    int i,n,a[20],x;
    printf("Enter the number of elements of the array : \n");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        printf("Enter the %d element of the array :\n", i);
        scanf("%d", &a[i]);
    }
    printf("Enter the element to be searched : \n");
    scanf("%d", &x);
    for(i=0; i<n; i++){
        if(a[i] == x){
            printf("The %d element found at %d position. ", x,i);
        }
        
    }
}