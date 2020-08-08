/**
[AUTHOR]: Saddam Arbaa
[Email] : <saddamarbaas@gmail.com>

C++ Nested While Loop Example
In C++, we can use while loop inside another while loop,
it is known as nested while loop. The nested while loop is
 executed fully when outer loop is executed once.

 Example of nested while loop in C++ programming language.

*/

#include <iostream>
using namespace std;

/* Driver program to test Nested While Loop */
int main ()
 {
    // counter
    int i = 1;

    // outer loop
    while(i<=3)
    {
        int j = 1;

        while (j <= 3)  // inner loop
        {
            cout<<i<<" "<<j<<"\n";

            j++; // increment inner loop counter
        }

           i++; // increment outer loop counter

        }

    return 0;// signal to operating system everything works fine

}/** End of main function */
