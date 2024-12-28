//. A variable is more than just a memory label dyanmic containers
// typeid().name used to get the datatype of the variable
//decltype() to make copy of variable, used to get the datatype of the variable
#include <iostream>
#include <cstdint>  // For fixed-width integers

using namespace std;

//C++ variables, which allow for the storing, manipulation, and interaction of data inside a program.
int datatypes(){
    /*
    Basic Data Type
    int, char, float, double, etc
    Derived Data Type
    array, pointer, etc
    Enumeration Data Type
    enum
    User Defined Data Type
    structure
    */
    int a = 5;
    double b = 5.5;
    char c = 'A';
    string d = "Hello";
    float scientificNotation = 3.0e5; // Represents 300000.0  
    bool e = true;

    cout << "The datatype of a is: " << typeid(a).name() << endl;
    cout << "The datatype of b is: " << typeid(b).name() << endl;
    cout << "The datatype of c is: " << typeid(c).name() << endl;
    cout << "The datatype of d is: " << typeid(d).name() << endl;
    cout << "The datatype of e is: " << typeid(e).name() << endl;

    return 0;
}

int prescised_size(){
    //variable precision size limit the size of the variable
    //int precision
    int a = 5;
    cout << "The size of int is: " << sizeof(a) << endl;

    int8_t r = -128;   // 8-bit signed integer
    int16_t b = 32767; // 16-bit signed integer
    uint32_t c = 4000000000;  // 32-bit unsigned integer

    cout << "Size of int8_t a: " << sizeof(r) << " bytes" << endl;   // Size: 1 byte
    cout << "Size of int16_t b: " << sizeof(b) << " bytes" << endl;  // Size: 2 bytes
    cout << "Size of uint32_t c: " << sizeof(c) << " bytes" << endl; // Size: 4 bytes


    
    return 0;
}

int main(){
    prescised_size();
    return 0;
}