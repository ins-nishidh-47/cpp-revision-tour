#include <iostream>

using namespace std;

/*
Keywords that are available in C++ and C are:

else: It works in conjunction with the if statement to specify an alternative code snippet that is run if the condition is false.

If: This operator is used to run a block of code only if a certain condition is met.

int: The int keyword is used to declare the integer variables or data types.

long: The long keyword is utilized to declare the integer variables with a wider range than int.

register: The compiler is advised to put the variable in a register for quicker access.

return: This keyword is used to end a function and, if desired, to provide the caller a value back.

short: The short keyword is used to declare an integer short variables.

signed: It is used to declare variables using signed integers.

sizeof: The sizeof keyword is used to calculate the size (in bytes) of a data type or object.

static: The static keyword is used to declare static variables, which keep their values across function calls.

struct: A composite data type with a single name for all its variables is defined with the struct keyword.

switch: It is used to construct a switch statement, which compares an expression to its value and chooses a code block accordingly.

typedef: The typedef keyword is used to give a data type an alias (alternative name).

union: It is used to define a union, which resembles a struct but has one shared memory location for all its members.

Unsigned: The unsigned keyword is used to define unsigned integer variables.

Volatile: This keyword instructs the compiler that a variable's value may change at any point, even if it is not immediately apparent from the logic of the program.

While: This keyword introduces a loop that repeatedly runs a set of state   ments if a certain condition is met.
*/

//auto: In C++, the auto keyword is mainly used for type inference. It enables the compiler to determine a variable's data type from its initializer expression

int auto_key(){
    auto a = 5;
        auto b = 5.5;
    auto c = 'A';
    auto d = "Hello";
    auto e = true;
    // after declaring I can't change the datatype of the variable
    return 0;
};


//break: By using the break keyword, the execution of a loop or switch statement is stopped.
// Continue: This keyword is used to go on to the next iteration of a loop without running the last remaining statements.

int break_key(){
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            break;
        }else if(i == 3){
            continue;
        }
        cout << i << endl;
    }
    return 0;
};

//case: It is used in a switch statement to provide several scenarios in which different code blocks should be run depending on the result of an expression.

int switch_case(){
    int x;
    cout << "Enter a number: ";
    cin >> x;

    switch(x){
        case 1 : cout << "You entered 1" << endl;
        case 2 : cout << "You entered 2" << endl;
        case 3 : cout << "You entered 3" << endl;
// default: When no other case matches, it is used in a switch statement to provide a default case.
        default : cout << "You entered a number greater than 3" << endl;    
    }

    return 0;
};

//char: The char keyword is used to declare character variables or data types.

int char_key(){
    char a = 'A';
    cout << a << endl;
    return 0;
}

//const: Constant values or pointers that refer to constants are declared with the keyword const.

int const_key(){
    const int a = 5;
    cout << a << endl;
    // a = 2; // This will throw an error  as we can't change the value of a constant variable
    return 0;
};

// Do: This keyword initiates a loop that runs a series of statements as long as a certain condition is met.

int do_key(){
    int number = 0;
    
    do{
        cout << "Enter a number" << endl;
        cin >> number;
    }while(number != 5);

    return 0;
};

// double: Double-precision floating-point variables and data types are declared with the double keyword.

int double_key(){
    double a = 5.5;
    cout << a << endl;
    return 0;
};

// enum: An enumeration is defined by the enum keyword. It is a user-defined type that is made up of a collection of named integer constants.

int enum_key(){
    //scoped enum
    enum color {
        red,
        green, 
        blue
        };
    color v = red;
    cout << v << endl;
    
    enum color12 {
        red1 = 1,
        green1 = 12, 
        blue1 = 21
        };

    color12 v1 = red1;
    cout << v1 << endl;
    
    //unscoped enum
    enum class color2 {
        red,
        green, 
        blue
        };
    
    color2 v2 = color2::red;
    cout << static_cast<int>(v2) << endl; //typecasting enum to int

    return 0;
}

//extern: It is used to declare variables or functions that are declared in another source file.

int extern_key(){
    extern int a;
    cout << a << endl;
    return 0;
};

// float: The float keyword is used to declare single-precision floating-point variables or data types.
int float_key(){
    float a = 5.5;
    cout << a << endl;
    return 0;
};

//for: It begins a loop by introducing initialization, condition, and update expressions.
int for_key(){
    for(int i = 0; i < 10; i++){
        cout << i << endl;
    }
    return 0;
};

//goto: The goto keyword is used to give an unconditional jump from the goto to a labeled statement within the same function.

int goto_key() {
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            if (i == 2 && j == 2) {
                goto exitLoops; // Jump to the label
            }
            cout << "i: " << i << ", j: " << j << endl;
        }
    }

exitLoops: // Label to jump to
    cout << "Exited the loops." << endl;

    return 0;
}




int main(){
    extern_key();
    return 0;
};