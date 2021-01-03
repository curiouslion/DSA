#include <iostream>
using namespace std;

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

void Append(struct Array *arr, int x)
{
    if (arr->length < arr->size)
        arr->A[arr->length++] = x;
}

//? here arr->length++ is 5 not 6

void Display(struct Array arr)
{
    int i;
    cout << "\nElements are:\n";
    for (i = 0; i < arr.length; i++)
        cout << arr.A[i] << endl;
}

int main()
{
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};
    Append(&arr, 8);

    Display(arr);
   
    return 0;
}