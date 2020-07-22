/* 
     [AUTHOR]: Saddam Arbaa
     [Email] : <saddamarbaas@gmail.com>
    
     C++ Input/Output/endl  */
    

#include <iostream>

using namespace std;

int main()
{
    
    char a;
    int num;
    double num2 = 256.783;
    cout << "Enter a character and an integer: ";
    cin >> a >> num; // Taking input from user
    cout << "Character: " << a << endl;  // print char
    cout << "Number: " << num  << endl; // print integer
    cout << "double: " << num2 << endl;  // print double
    return 0;
}
