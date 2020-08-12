/**
[AUTHOR]: Saddam Arbaa
[Email] : <saddamarbaas@gmail.com>

   C++  Loop Example
   c++ program to Draw Square of stars like blow

********
 ********
********
 ********
********
 ********
********
 ********
*/

#include <iostream>

using namespace std;

int main()
{
    // outer loop acces row
    for(int i = 1; i<= 8; i++)
    {
        /*
         if i index is even cout<<" ";
         before you go inner loop and print stars */
         if (i %2 == 0)
         cout<<" ";

        // inner loop draw square of number
        // each time before back to outer loop
        for(int j = 1; j <= 8; j++)
        {
            // print *
            cout << "*" ;
        }
        cout << endl; // new line after each inner loop
    }

    return 0;// signal to operating system everything works fine

}/** End of main function  */
