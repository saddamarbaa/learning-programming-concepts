/**
[AUTHOR]: Saddam Arbaa
[Email] : <saddamarbaas@gmail.com>

 for loop examples in C++
 The example below will print the numbers 0 to N:
 N will be entered by user
*/

#include <iostream>

using namespace std;

int main()
{
    int N;
    cout << "Enter N: ";
    cin >> N;
    for(int i = 0; i <= N; i++)
    {
        // print numbers from 0 to N including N its self
        cout << i << "\t";
    }
    // add end line after loop
    cout << endl;

    return 0;// signal to operating system everything works fine

}/** End of main function */
