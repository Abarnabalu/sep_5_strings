#include<stdio.h>
#include<string.h>
int main()
{
    int a=2;
    int *ptr=&a;
    printf("The value of address %p is %d",ptr,*ptr);

    return 0;
}
