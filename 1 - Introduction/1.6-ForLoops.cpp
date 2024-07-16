// In C++, there are 3 types of for loops, for, while, do-while

// for (same as C)

// foreach:

#include <iostream>
using namespace std;

void foreach() {
    int arr[] = {1,2,3,4,5,6};
    for (int n: arr) {
        cout << n << endl;
    }
}

// Warning: The above will reference the original memory of arr[] and has write-access
// As you often don't need to write to that address-space, you should consider to access it read-only for safety reasons.
// To avoid write-access, consider using a const-reference (shown below), which will create a constant - and therefore unchangable - reference named n
// to each existing value of arr, effectively referencing the values read-only

int main() {
    int arr[] = {1,2,3,4,5,6};

    for (const int& n : arr) {
        cout << n << endl;

        // const int& n: arr - 
        // const means that n cannot be modified within the loop, ensuring the elements of the array remain unchanged
        // int& indicates that n is a reference to the element in that array
    }

    // 
}