#include<stdio.h>
void factorial(int *number);
int main()
{
    int num;
    printf("enter the number:\n");
    scanf("%d",&num);
    int *ptr = &num;
    factorial(ptr);
    return 0;
}
void factorial(int *number)
{
    int factorial=1;
    for(int i=1; i<=*number; i++)
    {
        factorial*=i;
    }
    printf("The factorial is:%d", factorial);
}
