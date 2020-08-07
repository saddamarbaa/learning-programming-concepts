/**
[AUTHOR]: Saddam Arbaa
[Email] : <saddamarbaas@gmail.com>

 while loop examples in C++
 This example will  print even numbers between 2 to 20 */

#include <iostream>
using namespace std;

// the  Driver Code
int main()
{
    int i = 0;
    while (i < 20)
    {
        i = i + 2;  // i+=2 == i = i +2;

        // print eve numbers from 2 to 20 including 20 its self
        cout << i << "\t";
    }

    // add end line after loop
    cout << endl;

    return 0;// signal to operating system everything works fine

}/** End of main function */
