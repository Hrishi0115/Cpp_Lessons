// unlike in C, where strings were basically just arrays of char-values, in C++, strings are represented as objects which offer some
// comfortable ways to work with these types of data. C++ strings are implemented in the standard-library - std::string which must be referenced (#include)
// in the program.

#include<iostream>
#include<string> 
using namespace std;

int main() {
    string text = "Sample text"; // declare a string
    cout << "text is originally " << text << endl; // endl only adds a new line at the end (isn't actually needed to show output on console)

    getline(cin, text); // reading textinput from the keyboard

    cout << "text is now " << text << endl;

    return 0;
}

