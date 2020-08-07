/**
[AUTHOR]: Saddam Arbaa
[Email] : <saddamarbaas@gmail.com>

  do while loop example 

  c++ program to print out multiple of number from 1 to 10
*/

#include <iostream>
using namespace std;

// the  Driver Code
int main()
{
    int i = 1; // counter
    int fac = 1; // variable for multiplying
    do
    {
        fac *= i; // fac = fac * 1 //calculation fac
        i = i +1; // increment the counter

    }while (i <= 10);
    cout << "The multiple of number from 1 to 10 is: " << fac << endl;

    return 0;// signal to operating system everything works fine

}/** End of main function */
