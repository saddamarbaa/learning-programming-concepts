/**
    [AUTHOR]: Saddam Arbaa
    [Email] : <saddamarbaas@gmail.com>
    Enumeration in C++

    Enum is a user defined data type where we specify a set of values
    for a variable and the variable can only take one out of a small
    set of possible values.

    We use Enum keyword to define a Enumeration.
    It can be used for days of the week
    (SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY and SATURDAY)
     ,directions (NORTH, SOUTH, EAST and WEST) etc.
     The C++ enum constants are static and final implicitly. */

// Defining enum
enum week { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };

#include <iostream>

using namespace std;

// the  Driver Code
int main()
{
    // Creating week type variable
    week day;

    day = Friday;

    cout << "Day: " << day+1<<endl;

    return 0;// signal to operating system everything works fine

}/** End of main function */
