/**
[AUTHOR]: Saddam Arbaa
[Email] : <saddamarbaas@gmail.com>

 for loop examples in C++
 This example will only print even values between 0 and N:
 N will be entered by user
*/

#include <iostream>
using namespace std;

// the  Driver Code
int main()
{
    int N;
    cout << "Enter N: ";
    cin >> N;

    for(int i = 0; i <= N; i = i + 2)
    {
        // print eve numbers from 0 to N including N its self
        cout << i << "\t";
    }

    // add end line after loop
    cout << endl;

    return 0;// signal to operating system everything works fine

}/** End of main function */
