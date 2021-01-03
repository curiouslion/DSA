#include <stdio.h>
#include <stdlib.h>

//! if static array used than
// struct HArray
// {
//     int A[5];
//     int size;
//     int length;
// };
//! in that case dont allocate heap memory

struct HArray
{
    int *A;
    int size;
    int length;
};

void Display(struct HArray arr)
{
    int i;
    printf("\nElements are:\n");
    for (i = 0; i < arr.length; i++)
        printf("%d", arr.A[i]);
}

int main()
{
    struct HArray arr;
    int i, n;
    printf("Enter Size of an Heap Array");
    scanf("%d", &arr.size);
    arr.A = malloc(arr.size * sizeof(int));
    arr.length = 0;

    printf("Enter Number elements for an Heap Array");
    scanf("%d", &n);

    printf("Enter all elements\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr.A[i]);

    arr.length = n;
    Display(arr);
    free(arr.A);
    return 0;
}