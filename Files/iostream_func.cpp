#include <iostream>

using namespace std;

//cin function used for taking input from user

int inputs(){
    int age;

    cout << "Enter your age: ";
    cin >> age;
    
    //endl is used to end the line it is a predefined function
    if (age < 18){
        cout << "You aren't eligible to vote." << endl;
    }else{
        cout << "You are eligible to vote." << endl;
    }

    return 0;
}


int main(){
    inputs();
    return 0;
}