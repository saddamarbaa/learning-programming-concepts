/**
[AUTHOR]: Saddam Arbaa
[Email] : <saddamarbaas@gmail.com>

 for loop examples in C++
 This example will only print odd numbers between 1 and N:
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

    for(int i = 1; i <= N; i = i + 2)
    {
        // print odd numbers from 1 to N
        cout << i << "\t";
    }

    // add end line after loop
    cout << endl;

   return 0;// signal to operating system everything works fine

}/** End of main function */


