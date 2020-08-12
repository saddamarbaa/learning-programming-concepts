/**
[AUTHOR]: Saddam Arbaa
[Email] : <saddamarbaas@gmail.com>

C++ Nested Loop Example to Draw square of hashes - and stars *
 like blow

*  *  *  *  *  *  *  *
-  *  *  *  *  *  *  *
-  -  *  *  *  *  *  *
-  -  -  *  *  *  *  *
-  -  -  -  *  *  *  *
-  -  -  -  -  *  *  *
-  -  -  -  -  -  *  *
-  -  -  -  -  -  -  *

number of row will entered by user (user enter 8 only for test)
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
        for(int k = 1; k <= i - 1 ; k++)
        {
           cout << "-  " ; // print -
        }

      // second inner loop
       for(int j = 1; j <= rows - i +1 ; j++)
       {
          cout << "*  " ; // print stars *

          /* this second for condition can we written in different
             way like blow but the result is same
             for(int j = rows; j >= i ; j--) */
        }

         cout << endl; // new line after each inner loop
    }
    return 0;// signal to operating system everything works fine

}/** End of main function  */
