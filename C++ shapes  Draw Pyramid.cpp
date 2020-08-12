/**
[AUTHOR]: Saddam Arbaa
[Email] : <saddamarbaas@gmail.com>

C++  Loop Example to Draw  Pyramid  like the one blow

* * * * * * * * * *
 * * * * * * * * *
  * * * * * * * *
   * * * * * * *
    * * * * * *
     * * * * *
      * * * *
       * * *
        * *
         *

number of row will entered by user (user entered 10) */

#include <iostream>
using namespace std;

// the  Driver Code
int main()
{
    int rows; //variable for row

    // asking user input to enter number of rows
    cout << "Enter number of rows : ";
    cin >> rows;
    cout << endl;// new line

    // outer loop need 3  nested loop
    for(int i = 1; i <= rows; i++)
    {
        // first inner loop
        for(int k = 1; k <= i- 1; k++)
        {
           cout << " " ; // print spaces
        }

      // second inner loop
        for(int j = 1; j <= (rows - i + 1 ); j++)
        {
          cout << "* " ; // print stars *
        }

         cout << endl; // new line after each inner loop
    }

     return 0;// signal to operating system everything works fine

}/** End of main function  */
