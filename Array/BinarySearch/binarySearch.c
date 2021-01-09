#include <stdio.h>

struct Array
{
    int A[10];
    int length;
    int size;
};

/* Algorithm */
// Take Sorted Array
// Decide our Key Value to find in array
// function should return index of desire key
// if desire element is not found return -1
// First take lowest and highest index of array
// Lowest index should be less than or equal to highest index
// Find mid of highest and lowest index.
// Check if mid index value is key than return mid
// if mid index value is not key and it's value is greater than key, set highest = mid - 1
// if mid index value is not key and it's value is less than key, set lowsest = mid + 1

int BinarySearch(struct Array arr, int key)
{
    int i;
    int l = 0;
    int h = arr.length - 1;

    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (arr.A[mid] == key)
            return mid;
        else if (arr.A[mid] > key)
            h = mid - 1;
        else
            l = mid + 1;
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
    struct Array arr = {{1, 2, 3, 4, 5}, 5, 10};
    printf("%d", BinarySearch(arr, 1));

    Display(arr);

    return 0;
}

/*
! Time and Space complexity !
The time complexity of the binary search algorithm is O(log n). 
The best-case time complexity would be O(1) when the central index would directly match the desired value. 
The worst-case scenario could be the values at either extremity of the list or values not in the list. 

The space complexity of the binary search algorithm depends on the implementation of the algorithm. There are two ways of implementing it:

* Iterative method
* Recursive method
Both methods are quite the same, with two differences in implementation. 
First, there is no loop in the recursive method. Second, rather than passing the new values to the next 
iteration of the loop, it passes them to the next recursion. In the iterative method, the iterations can 
be controlled through the looping conditions, while in the recursive method, the maximum and minimum are 
used as the boundary condition. 

In the iterative method, the space complexity would be O(1). While in the recursive method,
the space complexity would be O(log n). 

? Benefits 
A binary search algorithm is a fairly simple search algorithm to implement. 
It is a significant improvement over linear search and performs almost the same in comparison to some of 
the harder to implement search algorithms.
The binary search algorithm breaks the list down in half on every iteration, rather than sequentially 
combing through the list. On large lists, this method can be really useful.
*/