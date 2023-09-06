#include<stdio.h>
void maximum(int *num1, int *num2);
int main ()
{
    int a,b;
    int *ptr1=&a, *ptr2=&b;
    printf("Enter the 2 numbers!!!\n");
    scanf("%d %d",&a,&b);
    maximum(ptr1,ptr2);
    return 0;
}
void maximum(int *num1, int *num2)
{
    if(*num1 > *num2)
    {
        printf("The number 1 is greater!!");
    }
    else
    {
        printf("The number 2 is greater!!");
    }
}
