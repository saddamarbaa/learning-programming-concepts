/**

   [AUTHOR] :  Saddam Arbaa
   [Email]  :  <saddamarbaas@gmail.com>

   calculate the flowing  math series
   y = 1 - x ^2 + x ^3 + x ^4 + ... x^N
   and N will be entered by user */

#include <iostream>
#include <math.h>
using namespace std;

// the  Driver Code
int main()
{
    int i, j, x, y, N, sum ;

    /*set sum by 0*/
    sum = 0;

    /*set x by 2*/
    x = 2;

    /*read value of N*/
    cout << "Enter the value of N: ";
    cin >> N;

    /*calculate sum of the series*/
    for(i = 2; i <= N; i++)
    {
        // calculate sum
        sum = sum + pow(x,i);
    }
    // calculate y value
    y = 1 - sum;

    /*print the sum*/
    cout << "Result of the series is: " << y << endl;

     return 0;// signal to operating system everything works fine

}/** End of main function  */
