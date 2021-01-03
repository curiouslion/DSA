#include <iostream>
using namespace std;

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
    cout << "\nElements are:\n";
    for (i = 0; i < arr.length; i++)
        cout << arr.A[i] << endl;
}

int main()
{
    HArray arr;
    int i, n;
    cout << "Enter Size of an Heap Array";
    cin >> arr.size;

    arr.A = new int[arr.size];
    arr.length = 0;

    cout << "Enter Number elements for an Heap Array";
    cin >> n;
    cout << "Enter all elements\n";

    for (i = 0; i < n; i++)
        cin >> arr.A[i];

    arr.length = n;
    Display(arr);
    delete[] arr.A;
    return 0;
}