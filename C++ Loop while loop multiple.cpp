/**
[AUTHOR]: Saddam Arbaa
[Email] : <saddamarbaas@gmail.com> 

  while loop example

  c++ program to print out multiple of number from 1 to 10

*/

#include <iostream>
using namespace std;

// the  Driver Code
int main()
{
    int i = 1; // counter
    int fac = 1; // variable for multiplying

    while (i <= 10)
    {
        fac *= i; // fac = fac * 1 //calculation fac
        i = i +1; // increment the counter

    }
    cout << "The multiple of number from 1 to 10 is: " << fac << endl;

    return 0;// signal to operating system everything works fine

}/** End of main function */

