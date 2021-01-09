#include <stdio.h>

struct Array
{
    int A[10];
    int length;
    int size;
};

int Get(struct Array arr, int index)
{
    if (index >= 0 && index < arr.length)
        return arr.A[index];

    return -1;
}

void Set(struct Array *arr, int index, int x)
{

    if (index >= 0 && index < arr->length)
        arr->A[index] = x;
}

int Max(struct Array arr)
{
    int max = arr.A[0];
    int i;
    for (i = 1; i < arr.length; i++)
    {
        if (arr.A[i] > max)
            max = arr.A[i];
    }

    return max;
}

int Min(struct Array arr)
{
    int min = arr.A[0];
    int i;
    for (i = 1; i < arr.length; i++)
    {
        if (arr.A[i] < min)
            min = arr.A[i];
    }

    return min;
}

int Sum(struct Array arr)
{
    int total = 0;
    int i;

    for (i = 0; i < arr.length; i++)
    {
        total = total + arr.A[i];
    }

    return total;
}

float Avg(struct Array arr)
{
    return (float)Sum(arr) / arr.length;
}

void Display(struct Array arr)
{
    int i;
    printf("\nElements are:\n");
    for (i = 0; i < arr.length; i++)
        printf("%d", arr.A[i]);
}

int main()
{
    struct Array arr = {{1, 2, 3, 4, 5}, 5, 10};
    // printf("%d\n", Get(arr, 3));
    // Set(&arr,0,25);
    // printf("%d\n", Max(arr));
    // printf("%d\n", Min(arr));
    // printf("%d\n", Sum(arr));
    printf("%f\n", Avg(arr));

    Display(arr);

    return 0;
}
