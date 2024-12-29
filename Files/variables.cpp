//. A variable is more than just a memory label dyanmic containers
// typeid().name used to get the datatype of the variable
//decltype() to make copy of variable, used to get the datatype of the variable
#include <iostream>
#include <cstdint>  // For fixed-width integers
#include <string> // For wchar_t for fixed wide characters

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
    //numbers
    int a = 5;
    cout << "The size of int is: " << sizeof(a) << endl;

    int8_t r = -128;   // 8-bit signed integer
    int16_t b = 32767; // 16-bit signed integer
    uint32_t c = 4000000000;  // 32-bit unsigned integer

    cout << "Size of int8_t a: " << sizeof(r) << " bytes" << endl;   // Size: 1 byte
    cout << "Size of int16_t b: " << sizeof(b) << " bytes" << endl;  // Size: 2 bytes
    cout << "Size of uint32_t c: " << sizeof(c) << " bytes" << endl; // Size: 4 bytes

    //chars and strings
    wchar_t d = L'a'; // Wide character
    wstring e = L"Hello"; // Wide string

    cout << "Size of wchar_t d: " << sizeof(d) << " bytes" << endl; // Size: 4 bytes
    cout << "Size of wchar_t e: " << sizeof(e) << " bytes" << endl; // Size: 32 bytes

    //fixed size char and string
    char16_t f = u'A'; // 16-bit Unicode character
    char32_t g = U'A'; // 32-bit Unicode character
    u16string h = u"Hellofdfdsfsdfsdffsdfsdfsdfsdfsdfsdfsdf"; // UTF-16 string
    u32string i = U"Hello"; // UTF-32 string

    cout << "Size of char16_t f: " << sizeof(f) << " bytes" << endl; // Size: 2 bytes
    cout << "Size of char32_t g: " << sizeof(g) << " bytes" << endl; // Size: 4 bytes
    cout << "Size of u16string h: " << sizeof(h) << " bytes" << endl; // Size: 32 bytes
    cout << "Size of u32string i: " << sizeof(i) << " bytes" << endl; // Size: 32 bytes


    
    return 0;
}

int main(){
    prescised_size();
    return 0;
}