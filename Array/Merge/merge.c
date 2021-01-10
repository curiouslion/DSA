#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int A[10];
    int length;
    int size;
};

// ! merge algo ! //
// create array3 with the size of arr1 and arr2
// heree we just need to get space in heap of struct for our arr3
// simulataneously travser arr1 and arr2 , copy smaller element of
// both of the arr1 && arr2. and add smallest element picked from arr1 or arr2
// in position of arr3. move ahead in arr3 and also arr1/2 from which that
// element picked.if there are remaining element in arr1/2 then copy tem in arr3

struct Array *Merge(struct Array *arr1, struct Array *arr2)
{

    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));
    int i, j, k;
    i = j = k = 0;

    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
            arr3->A[k++] = arr1->A[i++]; // add in array3 and increase it's index, adding arr1 value and increase it's index
        else
            arr3->A[k++] = arr2->A[j++]; // add in array3 and increase it's index, adding arr2 value and increase it's index
    }

    for (; i < arr1->length; i++)
        arr3->A[k++] = arr1->A[i];

    for (; j < arr2->length; j++)
        arr3->A[k++] = arr2->A[j];

    arr3->length = arr1->length + arr2->length;
    arr3->size = 10;

    return arr3;
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
    struct Array arr1 = {{11, 53, 55, 77, 89}, 5, 10};
    struct Array arr2 = {{2, 44, 56, 88, 100}, 5, 10};

    struct Array *arr3;
    arr3 = Merge(&arr1, &arr2);

    Display(*arr3);

    return 0;
}
