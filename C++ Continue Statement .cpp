/**
[AUTHOR]: Saddam Arbaa
[Email] : <saddamarbaas@gmail.com>

The C++ continue statement is used to continue loop.
It continues the current flow of the program and skips
the remaining code at specified condition.
In case of inner loop, it continues only inner loop.
we can say continue statement breaks one iteration (in the loop),
if a specified condition occurs, and continues with the next iteration in the loop.

C++ Continue Statement Example
in this example skips the value of 5:
*/

#include <iostream>
using namespace std;

// the  Driver Code
int main()
{
    for (int i = 1; i <= 10; i++)
    {
       if (i == 5)
       {
           continue;
       }
       cout << i << "\n";
    }

    return 0;// signal to operating system everything works fine

}/** End of main function */
