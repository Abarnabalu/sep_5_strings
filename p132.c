#include <stdio.h>

void print(int size, int *array);

int main()
{
    int size;
    printf("Enter the size of the array:\n");
    scanf("%d", &size);
    int arr[size];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    print(size, arr);

    return 0;
}

void print(int size, int *array)
{
    printf("Elements of the array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}
