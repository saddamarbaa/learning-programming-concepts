/**
    Enumeration in C++

    [AUTHOR]: Saddam Arbaa
    [Email] : <saddamarbaas@gmail.com>  */


#include <iostream>

using namespace std;

// Defining enum Gender
enum Gender { Male,  Female };

// the  Driver Code
int main()
{
    // Creating Gender type variable
    Gender gender = Male;

    switch (gender) {
    case Male:
        cout << "Gender is Male";
        break;
    case Female:
        cout << "Gender is Female";
        break;
    default:
        cout << "Value can be Male or Female";
    }

    return 0;// signal to operating system everything works fine

}/** End of main function */
