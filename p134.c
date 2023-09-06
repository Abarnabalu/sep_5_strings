#include<stdio.h>
int main()
{
    int num1,num2;
    printf("enter the numbers:\n");
    scanf("%d %d",&num1,&num2);
    int *ptr1 = &num1, *ptr2=&num2;
    printf("The numbers before swapping: number 1 is %d and number 2 is: %d\n",*ptr1,*ptr2);
    swap(ptr1,ptr2);
    return 0;
}
void swap(int *number1, int *number2)
{
    int temp;
    temp=number1;
    number1=number2;
    number2=temp;
    printf("The numbers after swapping are number 1 is %d and number 2 is %d",*number1,*number2);
}
