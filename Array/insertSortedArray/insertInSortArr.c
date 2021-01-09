#include <stdio.h>

struct Array
{
    int A[10];
    int length;
    int size;
};

void Display(struct Array arr)
{
    int i;
    printf("\nElements are:\n");
    for (i = 0; i < arr.length; i++)
        printf("%d", arr.A[i]);
}

void InsertInSortArray(struct Array *arr, int x)
{
    int index = arr->length - 1;
    if (arr->length == arr->size)
        return;
    while (arr->A[index] > x)
    {
        arr->A[index + 1] = arr->A[index];
        index--;
    }

    arr->A[index + 1] = x;
    arr->length++; // we have to increment our array length for display purpose
}

int main()
{
    struct Array arr = {{1, 2, 4, 5, 6}, 5, 10};
    InsertInSortArray(&arr, 3);

    Display(arr);

    return 0;
}
