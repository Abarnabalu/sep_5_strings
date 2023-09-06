#include<stdio.h>
int main()
{
    int a=3,b=5,result;
    int *ptr1=&a, *ptr2=&b;
    result= *ptr1 + *ptr2;
    printf("The added value is: %d",result);
}
