/**
[AUTHOR]: Saddam Arbaa
[Email] : <saddamarbaas@gmail.com>

The C++ continue statement Example

this example print all the number from 1 to 100 expt the
numbers that can be divided by 2,4,6 without remainder */

#include <iostream>
using namespace std;

// the  Driver Code
int main()
{
    int numbers = 1; // counter
    for (numbers = 1; numbers <= 100; numbers++)
    {
        if (numbers % 2 == 0 || numbers % 4 == 0 || numbers % 6 == 0)
         continue;
         cout << numbers << "\n";

         /* the same code can be written in different way
            as the  code comment it down blow */

        /* if (numbers % 2 == 0) skip that iterations*/
       //if (numbers % 2 == 0)  continue;

       /* if (numbers % 4 == 0) skip that iterations*/
       //else if (numbers % 4 == 0) continue;

       /* if (numbers % 6 == 0) skip that iterations*/
       //else if (numbers % 6 == 0) continue;

       //else
       //cout << numbers << "\n";
       //if (numbers % 2 == 0 && numbers % 4 == 0 && numbers % 6 == 0)
       //cout << numbers << "\n";

    }
    return 0;// signal to operating system everything works fine

}/** End of main function */
