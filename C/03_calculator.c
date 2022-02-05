#include<stdio.h>
void Calculator(int,int,int);
int main()
{
    int n,a,b;
    float div,mod;
    printf("enter two numbers :");
    scanf("%d %d",&a,&b);
    printf("enter choice for calculator\npress 1 for addition\npress 2 for subtraction\npress 3 for multiplication\npress 4 for division\npress 5 for modulus:");
    scanf("%d",&n);
    Calculator(a,b,n);
}
    void Calculator(int a, int b, int n)
    {
        int mod;float div;
    switch(n)
    {
    case 1:
        printf("the sum is : %d",a+b);
        break;
    case 2:
        printf("the subtraction is: %d",a-b);
        break;
    case 3:
        printf("the multiplication is: %d",a*b);
        break;
    case 4:
        div=(float)a/(float)b;
        printf("the division is :%.2f",div);
        break;
    case 5:
        mod=a%b;
        printf("the modulus is :%.2f",mod);
        break;
    default:
        printf("wrong choice");

    }
    return 0;
    }
