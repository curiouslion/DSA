#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int length;
    int size;
};

int LinearSearch(Array arr, int x)
{
    int i;
    for (i = 0; i < arr.length; i++)
    {
        if (arr.A[i] == x)
            return i;
    }

    return -1;
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

    Array arr = {{1, 5, 7, 8, 9}, 5, 10};
    cout << LinearSearch(arr, 9) << endl;
    Display(arr);

    return 0;
}