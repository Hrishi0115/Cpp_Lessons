// Array declaration

// <type> Name[no of elements];

#include <iostream>

// using namespace std; // so you don't need to include std::cout

void walkthrough_one() {
    int marks[3];

    marks[0] = 98;
    marks[1] = 96;
    marks[2] = 87;

    // Alternatively

    int marks1[3] = {98, 86, 76};

    // or

    int marks2[] = {97,65,89};

    for (int i = 0; i < 3; i++) {
        std::cout << marks[i] << std::endl;
    }
}

