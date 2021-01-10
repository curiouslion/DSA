#include <stdio.h>

struct Array
{
    int A[10];
    int length;
    int size;
};

void Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void negativeRight(struct Array *arr)
{
    int i = 0;
    int j = arr->length;
    while (i < j)
    {
        while (arr->A[i] < 0)
            i++;
        while (arr->A[j] >= 0)
            j--;
        if (i < j)
        {
            Swap(&arr->A[i], &arr->A[j]);
            i++;
            j--;
        }
    }
}

void Display(struct Array arr)
{
    int i;
    printf("\nElements are:\n");
    for (i = 0; i < arr.length; i++)
        printf("%d\t", arr.A[i]);
}

int main()
{
    struct Array arr = {{9, 2, 4, -5, -6, -9, -8}, 7, 10};

    negativeRight(&arr);

    Display(arr);

    return 0;
}
