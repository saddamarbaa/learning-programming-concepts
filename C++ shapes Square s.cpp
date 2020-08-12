/**
[AUTHOR]: Saddam Arbaa
[Email] : <saddamarbaas@gmail.com>

C++  Loop Example to Draw square of stars * and hashes -
 like blow

- - - - - - - *
- - - - - - * *
- - - - - * * *
- - - - * * * *
- - - * * * * *
- - * * * * * *
- * * * * * * *
* * * * * * * *

number of row will entered by user
*/

#include <iostream>

using namespace std;

// the  Driver Code
int main()
{
    int rows; //variable for row

    // asking user input to enter number of rows
    cout << "Enter number of rows :";
    cin >> rows;

    // outer loop need 3 nested loop
    for(int i = 1; i <= rows; i++)
    {
        // first inner loop
        for(int k = 1; k <= rows - i; k++)
        {
           cout << "- " ; // print -
        }

      // second inner loop
        for(int j = 1; j <= i ; j++)
        {
          cout << "* " ; // print stars *
        }

         cout << endl; // new line after each inner loop
    }
    return 0;// signal to operating system everything works fine

}/** End of main function  */
