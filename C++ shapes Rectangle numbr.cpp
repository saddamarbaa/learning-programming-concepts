/**
[AUTHOR]: Saddam Arbaa
[Email] : <saddamarbaas@gmail.com>

C++  Loop Example
c++ program to Draw Rectangle of numbers like blow
(number of row will entered by user)

1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
6 6 6 6 6 6
7 7 7 7 7 7 7
8 8 8 8 8 8 8 8
9 9 9 9 9 9 9 9 9
10 10 10 10 10 10 10 10 10 10

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
            // print i value each time
          cout <<i<<" " ;
        }
         cout << endl; // new line after each inner loop
    }

     return 0;// signal to operating system everything works fine

}/** End of main function  */

