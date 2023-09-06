#include<stdio.h>
void add_call_pointer(int *num1,int *num2);
int main()
{
    int a,b;
    printf("Enter the 2 numbers\n");
    scanf("%d %d",&a,&b);
    int *ptr1=&a, *ptr2=&b;
    add_call_pointer(&a,&b);

    return 0;
}
void add_call_pointer(int *num1,int *num2)
{
    int result= *num1 + *num2;
    printf("The result is :%d",result);
}
