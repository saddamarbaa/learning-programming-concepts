/**
[AUTHOR]: Saddam Arbaa
[Email] : <saddamarbaas@gmail.com> 

 do while loop examples in C++
 write c++ program that out number from 100 to 2
 in descending order
*/

#include <iostream>
using namespace std;

// the  Driver Code
int main()
{
    int i = 100; // counter start from 100
    do
    {
        // print numbers from 100 to 2
        cout << i << "\n";

        i--; // i = i -1 // decrement counter

    }  while (i >= 2);

    // add end line after loop
    cout << endl;

    return 0;// signal to operating system everything works fine

}/** End of main function */
