/**
[AUTHOR]: Saddam Arbaa
[Email] : <saddamarbaas@gmail.com>

 for loop examples in C++
 This example will print factorial of number N:
 N will be entered by user
*/

#include <iostream>
using namespace std;

// the  Driver Code
int main()
{
    int n; // number will enter by user

    float fact = 1; // variable for factorial

    // asking user to enter the number

    cout << "please Enter N  :";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        fact =  fact * i;  // calculation  factorial

      //  cout << fact << endl; // only was for testing
    }

    // printing the factorial
    cout <<"factorial of number "<< n << " is =  " << fact << endl;

    return 0;// signal to operating system everything works fine

}/** End of main function */


