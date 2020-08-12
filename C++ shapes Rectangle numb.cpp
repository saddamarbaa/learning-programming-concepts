/**
[AUTHOR]: Saddam Arbaa
[Email] : <saddamarbaas@gmail.com>

C++  Loop Example
c++ program to Draw Rectangle of numbers like blow
(number of row will entered by user)

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6
1 2 3 4 5 6 7
1 2 3 4 5 6 7 8
1 2 3 4 5 6 7 8 9
1 2 3 4 5 6 7 8 9 10

(user input 10 this time)

*/

#include <iostream>
using namespace std;

// the  Driver Code
int main()
{
    int row; //variable for number of rows

    //asking user input number of rows
    cout << "enter number of Rows :";
    cin >> row;

    // outer loop
    for(int i = 1; i <= row; i++)
    {
        // inner loop
        for(int j = 1; j <= i; j++)
        {
            // print j value  each time
          cout <<j<<" " ;
        }
         cout << endl; // new line after each inner loop
    }

    return 0;// signal to operating system everything works fine

}/** End of main function  */

