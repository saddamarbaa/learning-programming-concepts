/* 
     [AUTHOR]: Saddam Arbaa
     [Email] : <saddamarbaas@gmail.com>
    
     C++ Program that take User Input  */
    

#include <iostream>

using namespace std;

int main()
{
    // char variable
    char a;
    
    //declare integer variable
    int num;
     
    // declare double variable
    double num2 = 256.783;
     
    // Taking input from user
    cout << "Enter a character and an integer: ";
    cin >> a >> num; // Taking input from user
     
    cout << "Character: " << a << endl;  // print char
     
    cout << "Number: " << num  << endl; // print integer
     
    cout << "double: " << num2 << endl;  // print double
     
    return 0;
}
