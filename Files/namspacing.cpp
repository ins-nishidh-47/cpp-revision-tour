#include <iostream>


// avoid writing std:: before cout and cin by using namespace

//before using namespace

int without_namespace(){
    std::cout << "Hello World" << std::endl;
    return 0;
}

using namespace std;

int with_namespace(){
    cout << "Hello with namspace std " << endl;
    return 0;
}

int main(){
    
    cout << "Without namespace" << endl;
    without_namespace();
    
    cout << "With namespace" << endl;
    with_namespace();


    return 0;
}