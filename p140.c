#include<stdio.h>
void smallest(int size,int *array);
int main()
{
    int size;
    printf("enter the size of an array:\n");
    scanf("%d",&size);
    int arr[size];
    printf("enter the elements of an array:\n");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    smallest(size,arr);
    return 0;
}
void smallest(int size,int *array)
{
    int small=array[0];
    for(int i=1; i<size; i++)
    {

        if(array[i]<small)
        {
            small=array[i];

        }


    }
    printf("The smallest element is : %d",small);
}
