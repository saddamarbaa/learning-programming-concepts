
/*
 simple if - else statement
 write program that accept an integer from the user and
 print out whether it is positive or Negative number

*/

#include <iostream>

using namespace std;

int main()
{
    int number;

    // asking number from user
    cout << "enter number !  :" ;
    cin >> number;

    // checking condition
    if (number > 0)
    {
        cout << "number " <<  number <<" : is positive number \n";
    }
    else
    {
        cout << "number " <<  number <<" : is positive number \n";
    }
}
