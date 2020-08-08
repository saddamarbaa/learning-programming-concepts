/**
    [AUTHOR]: Saddam Arbaa
    [Email] : <saddamarbaas@gmail.com>

     C++ Variables and Data Types:*/

#include <iostream>
using namespace std;

// the  Driver Code
int main()
{
    // Creating variables
    int myNum = 5;                   // Integer (whole number without decimals)
    float myFloatNum = 5.99;         // Floating point number (with decimals)
    double myDoubleNum = 9.98;       // Floating point number (with decimals)
    char myLetter = 'D';             // Character
    bool myBoolean = true;           // Boolean (true or false)
    string myString = "Hello";        // String (text)
    const int minutesPerHour = 60;     // minutesPerHour will always be 60

    //minutesPerHour = 65; //error: assignment of read-only variable minutesPerHour
    const float PI = 3.14;  // PI will always be 3.14

    // Print variable values
    cout << "int: " << myNum << "\n";
    cout << "float: " << myFloatNum << "\n";
    cout << "double: " << myDoubleNum << "\n";
    cout << "char: " << myLetter << "\n";
    cout << "bool: " << myBoolean << "\n";
    cout << "string: " << myString << "\n";
    cout << "constant PI : " << PI << "\n";
    cout << "constant minutesPerHour : " << minutesPerHour << "\n";

    return 0;// signal to operating system everything works fine

}/** End of main function */
