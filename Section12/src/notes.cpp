#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int notes()
{
    /*
    vector<int> vector1 {1,2,3};
    vector<int> *vecPtr {nullptr};

    vecPtr = &vector1;

    cout << "First element of vector1: " << (*vecPtr).at(0) << endl;

    for(auto i: *vecPtr) {
        cout << i << endl;
    }
    */

    /*
    // Dynamic Memory Allocation
    size_t size {0};

    double *tempPtr { nullptr };

    cout << "Size: ";
    cin >> size;

    tempPtr = new double[size];

    cout << "Address of tempPtr: " << tempPtr << endl;

    delete [] tempPtr;
    */
    int newArr[] {100,80};
    int *newArrPtr {nullptr};

    newArrPtr = newArr;

    cout << newArrPtr[0] << endl;
    cout << *newArrPtr << endl;
    cout << *(newArrPtr + 1) << endl;
    cout << newArrPtr << endl;
    cout << (newArrPtr + 1) << endl;
    cout << sizeof newArrPtr << endl;

    return 0;
}