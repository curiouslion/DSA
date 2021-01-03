#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};

void Insert(struct Array *arr1, int index, int x)
{
    int i;
    if (index >= 0 && index <= arr1->length)
    {
        for (i = arr1->length; i > index; i--)
            arr1->A[i] = arr1->A[i - 1];

        arr1->A[index] = x;
        arr1->length++;
    }
}

void Display(struct Array arr)
{
    int i;
    cout << "\nElements are:\n";
    for (i = 0; i < arr.length; i++)
        cout << arr.A[i] << endl;
}

int main()
{
    struct Array arr1 = {{2, 3, 4, 5, 6}, 10, 5};

    Insert(&arr1, 5, 12);
    Display(arr1);

    return 0;
}