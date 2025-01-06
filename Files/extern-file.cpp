#include <iostream>

using namespace std;


extern int a;

int a = 0;
// extern: It is used to declare variables or functions that are declared in another source file.

int extern_key()
{
    cout << a << endl;
    return 0;
};

int main(){
    extern_key();
    return 1;
}