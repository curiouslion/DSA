#include <stdio.h>

struct Array
{
    int A[10];
    int length;
    int size;
};

int isSorted(struct Array arr)
{
    int i;
    for (i = 0; i < arr.length - 1; i++)
    {
        if (arr.A[i] > arr.A[i + 1])
            return 0; // if not sorted
    }
    return 1; // if sorted
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
    struct Array arr = {{9, 2, 4, 5, 6}, 5, 10};

    printf("%d\n", isSorted(arr));

    Display(arr);

    return 0;
}
