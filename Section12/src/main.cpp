#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

/*
    Write a C++ function named apply_all that expects two arrays of integers and their sizes and dynamically allocates a new array of integers whose size is the product of the 2 array sizes.

    The function should loop through the second array and multiply each element across each element of array 1 and store the product in the newly created array.

    The function should return a pointer to the newly allocated array.

    You can also write a print function that expects a pointer to an array of integers and its size and display the elements in the array.

    For example,

    Below is the output from the following code which would be in main:

    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};

    cout << "Array 1: ";
    print(array1,5);

    cout << "Array 2: ";
    print(array2,3);

    int *results = apply_all(array1,5,array2,3);
    cout << "Result: ";
    print(results,15);

    cout << endl;

    delete [] results;

    Sample Output:

    Array 1: [ 1 2 3 4 5 ]
    Array 2: [ 10 20 30 ]
    Result: [ 10 20 30 40 50 20 40 60 80 100 30 60 90 120 150 ]

*/

void print(int *arr, int size) {
    cout << "[";
    for(int i=0;i<size;i++) {
        cout << *(arr + i) << " ";
    }
    cout << "]";
}

int* apply_all(int* arr1, int *arr2, int size1, int size2) {
    int *arr3 = new int[size1 * size2];
    
    for(int i=0;i<size1;i++) {
        for(int j=0;j<size2;j++) {
            arr3[i + j*size1] = arr1[i] * arr2[j];
        }
    }

    return arr3;
}

int main()
{
    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};

    cout << "Array 1: ";
    print(array1,5);

    cout << endl << "Array 2: ";
    print(array2, 3);

    int *results = apply_all(array1, array2, 5, 3);
    cout << endl << "Result: ";
    print(results, 15);

    return 0;
}
