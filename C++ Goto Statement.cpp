/**
    C++ Goto Statement
  [AUTHOR]: Saddam Arbaa
   [Email] : <saddamarbaas@gmail.com>

   The C++ goto statement is also known as jump statement.
   It is used to transfer control to the other part of the program.
   It unconditionally jumps to the specified label.
   It can be used to transfer control from deeply nested loop or switch case label.
*/

#include <iostream>
using namespace std;

// the  Driver Code
int main()
{
     int age;

    // label :
    ineligible:

    // asking user to enter age
    cout<<"You are not eligible to vote!\n";
    cout<<"Enter your age:";
    cin>> age;

    /* if user age less than 18 jamp back to ineligible
    label look like loop */
    if (age < 18)
    {
        goto ineligible;
    }
    else
    {
        cout<<"You are eligible to vote!\n";
    }

    return 0;// signal to operating system everything works fine

}/** End of main function */
