#include <stdio.h>

struct Array
{
    int A[10];
    int size;
    int length;
};

/* 
NOTE: going to modify array in structure we have to call by address of structure 
void Append(struct Array *arr)
*/

int LinearSearch(struct Array arr, int key)
{
    int i;
    for (i = 0; i < arr.length; i++)
    {
        if (arr.A[i] == key)
            return i;
    }
    return -1;
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
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};

    printf("%d", LinearSearch(arr, 21));
    Display(arr);

    return 0;
}