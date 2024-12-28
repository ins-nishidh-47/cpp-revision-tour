#include <iostream> // for std::cout, std::cin, std::endl
#include <iomanip>  // for std::setprecision
#include <fstream>  // for std::ofstream, std::ifstream  to write and read files

// #include <iostream>
int inp_oup()
{
// clearing screen is optional
std:
    system("clear");

    int num;

    // displaying message
    std::cout << "Enter a number: ";
    std::cin >> num; // getting the number inputted by the user

    // displaying the number
    std::cout << "The number you gave is : " << num << std::endl;

    return 0;
}

// #include <iomanip>
int floatnum()
{
    // Defining a float variable
    double pi = 3.14159;

    // fixed is used to set the precision to a fixed number of decimal places
    std::cout << std::fixed << std::setprecision(2) << pi << std::endl; // setting the precision to 2 decimal places

    return 0;
}

// #include <fstream>

int file_manupulations()
{
    std::ofstream output_file("output.txt"); // creating a file named output.txt

    if (output_file.is_open())
    {
        std::cout << "File created successfully" << std::endl
                  << "Hello to the output file" << std::endl;
        output_file.close(); // closing the file
    }
    else
    {
        std::cout << "Some error occured while creating the file" << std::endl;
    }

    return 0;
}

int main()
{
    // inp_oup();     //input-output file
    // floatnum();     //floating point number
    // file_manupulations(); //file manupulations

    return 0;
}