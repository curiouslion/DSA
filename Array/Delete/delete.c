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

int Delete(struct Array *arr, int index)
{
    if (index >= 0 && index < arr->length - 1)
    {
        int i;
        int x = arr->A[index];
        for (i = index; i < arr->length - 1; i++)
            arr->A[i] = arr->A[i + 1];

        arr->length--;
        return x;
    }
    return 0;
}

//? here arr->length++ is 5 not 6

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
    // Append(&arr, 7);
    printf("%d\n", Delete(&arr, 4));

    Display(arr);

    return 0;
}