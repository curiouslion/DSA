#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int A[10];
    int length;
    int size;
};

struct Array *intersection(struct Array *arr1, struct Array *arr2)
{

    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));
    int i, j, k;
    i = j = k = 0;

    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
        {

            i++;
        } // add in array3 and increase it's index, adding arr1 value and increase it's index
        else if (arr2->A[j] < arr1->A[i])
        {

            j++;
        } // add in array3 and increase it's index, adding arr2 value and increase it's index
        else if (arr1->A[i] == arr2->A[j])
        {

            arr3->A[k++] = arr1->A[i++];
            j++;
        }
    }

    arr3->length = k; // take k's value as it reach last element of arr3. k++ means it's length set properly
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
    struct Array arr2 = {{55, 77, 89, 90, 100}, 5, 10};

    struct Array *arr3;
    arr3 = intersection(&arr1, &arr2);

    Display(*arr3);

    return 0;
}
