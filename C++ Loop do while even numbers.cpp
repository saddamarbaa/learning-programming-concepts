/**
[AUTHOR]: Saddam Arbaa
[Email] : <saddamarbaas@gmail.com>

 do while loop examples in C++
 This example will  print even numbers between 2 to 20

*/

#include <iostream>

using namespace std;
// the  Driver Code
int main()
{
    int i = 0;
    do
    {
        i = i + 2;  // i+=2 == i = i +2;

        // print eve numbers from 2 to 20 including 20 its self
        cout << i << "\t";
    }while (i < 20);

    // add end line after loop
    cout << endl;

    return 0;// signal to operating system everything works fine

}/** End of main function */
