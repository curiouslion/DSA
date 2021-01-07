#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};

int Delete(Array *arr, int index)
{
    if (index < arr->length && index >= 0)
    {
        int x = arr->A[index];
        int i;
        for (i = index; i < arr->length - 1; i++)
            arr->A[i] = arr->A[i + 1];

        arr->length--;
        return x;
    }
    return 0;
}

void Display(Array arr)
{
    int i;
    cout << "\nELEMENTS ARE:\n";
    for (i = 0; i < arr.length; i++)
        cout << arr.A[i] << endl;
}

main()
{

    Array arr = {{2, 3, 4, 5, 6}, 10, 5};

    cout << Delete(&arr, 4) << endl;

    Display(arr);

    return 0;
}