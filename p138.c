#include<stdio.h>
void reverse(int size, int *array);
int main()
{
    int size;
    printf("enter the size of an array:\n");
    scanf("%d",&size);
    printf("enter the elements of an array:\n");
    int arr[size];
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("the reversed elements:\n");
    reverse(size, arr);
    return 0;
}
void reverse(int size, int *array)
{
    int rev[size];
    for(int i=0; i<size; i++)
    {
        rev[i]=array[size-i-1];
        printf("%d\n",rev[i]);
    }

}
