#include<stdio.h>
void avg(int size,int *array);
int main()
{
    int size;
    printf("enter the size of the array:\n");
    scanf("%d",&size);
    int arr[size];
    printf("enter the elements of the array:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    avg(size,arr);
    return 0;
}
void avg(int size,int *array)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum=sum+ array[i];
    }
    printf("The sum is: %d\n",sum);
    printf("The average is: %d",sum/size);
}

