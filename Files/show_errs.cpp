#include <iostream>

using namespace std;

// cerr is used to display error messages

int errors(){
    
    cout << "Press Enter to continue..." << endl;
    //cerr menas standard error it is an unbuffered stream
    cerr << "An error occured" << endl;

    return 0;
}

int clogs(){
    //almost same as cout but it benefical when you multiple msg to disiplay or diagonastic information
    //time-sensitive information
    clog << "This is a clog message" << endl;
    return 0;   

}

int main(){
    errors();
    clogs();
    return 0;

}