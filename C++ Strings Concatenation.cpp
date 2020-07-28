/**

   [PROG]	    :  C++ Strings

   [AUTHOR]		: Saddam Arbaa <saddamarbaas@gmail.com>

   program for string Concatenation in C++ */


// Include the string library
#include <string>

#include <iostream>

using namespace std;

int main()
{
    // Create a string variables
    string firstName = "John ";
    string lastName = "Doe";

    // Concatenation firstName  and lastName
    string fullName = firstName + lastName;

    // print the full name
    cout << "fullName is " << fullName <<endl;

    // Create a string variables
     string x = "10";
     string y = "20";

     // Concatenation  x and y so z will be 1020 (a string)
     string z = x + y;
     cout << "the value of concatenate  " <<x << " and " <<y<< " is "<<z<<endl;

     // Create a string variables
     string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

     // printing string length using function length from string library
     cout << "The length of the txt string is: " << txt.length()<< endl;

    //Accessing  zero index  Strings in string text and print it
    cout << "first Index on string Tex is " <<txt[0]<< endl;

    //Accessing  first index of string txt and change it 'Q'
    txt[1] = 'Q';

    // print txt
    cout << "the new txt is  "<< txt <<endl;

    /*
    * we often use the getline() function to read a line of text from user
    * It takes cin as the first parameter, and the string variable as second:
    */

    // get user input from the keyboard
    cout << "Type your full name: ";
    getline(cin ,fullName); // get line of text by user input from the keyboard

    cout << "Your name is: " << fullName <<endl;
    cout << "welcome  " <<fullName<<" to programing in c++\n";
     return 0;

}
