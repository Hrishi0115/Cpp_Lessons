// C++ provides a rich set of built-in as well as user defined data types:

// Built-in

// 1. Boolean - `boolean` - either true or false
// 2. Characters - `char` - alpahbets and all the symbols
// 3. Integers - `int` (4 bytes) or `short int` (2 bytes) or `long int` (8 bytes) - positive/negative whole numbers
// 4. Floating point numbers - `float` or `double` - real numbers
// 5. Valueless - `void`
// 6. Wide character using the `wchar_t` keyword

// Type Modifiers

// The above types can be modified using the following type modifiers: signed and unsigned short and long

// User defined

// Structures - struct - explained later ...
// Classes - class - covered later

// C++ allows an array of characters to define strings. It also provides an extensive string library for manipulating strings - explained later

// Typedefs

// Typedef allow for creating new names (think of them as aliases) for existing types.

#include <iostream>

typedef int counter;
counter tick_c = 100; // tick_c is a valid integer variable

// Enumerated types

// To create an enumeration () requires the use of the keyword enum.

void walk_through_one() {

    enum enum_name { list_of_names } var_list;
    // enum_name is the enumeration's type name
    // the list of names is comma separated

    // For example, the following defines an enumeration of colours called colours and the variable a_colour of type colour. Finally, a_colour is assigned
    // the value "green"

    enum colour {red, green, blue}; // define an enumeration type colour with three named constants

    // by default, the constants are assigned integers values starting from 0, so red is 0, green is 1, and blue is 2.

    colour a_colour, another_colour; // declare two variables of colour type
    
    // these variables can only hold of the values defined in the colour enumeration

    a_colour = green; // a_colour will be assigned value of '1'

    // here green is an enumerator that represents the integer value 1. 
}

// Defining variables

int foo;

int bar = 1;




