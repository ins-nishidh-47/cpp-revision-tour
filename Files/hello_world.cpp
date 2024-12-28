#include <iostream> // Use this instead of <iostream.h>
// <conio.h> is omitted

int main() {
    // Screen clearing is optional
    // Uncomment if needed (platform-dependent)
    // system("cls"); // For Windows
    system("clear"); // For Linux/Mac
    std:: string userInput;

    std::cout << "Hello in CPP world" << std::endl;

    std::cout << "Type how you are feeling : " << std::endl;

    // Wait for user input before exiting
    // userInput = std::cin.get();
    
    std::getline(std::cin, userInput);

    std::cout << userInput << std::endl;

    std::cout << "Goodbye!" << std::endl;


    return 0;
}
