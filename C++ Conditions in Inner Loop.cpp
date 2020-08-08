/**
[AUTHOR]: Saddam Arbaa
[Email] : <saddamarbaas@gmail.com>

C++ Continue Statement with Inner Loop

C++ Continue Statement continues inner loop only if you
use continue statement inside the inner loop.
in this example if i (== 2 && j == 2) continoue
*/

// the  Driver Code
#include <iostream>
using namespace std;

int main()
{
    // outer loop
    for(int i = 1; i <= 5; i++)
    {
        // inner loop
        for(int j = 1; j <= 5; j++)
        {
            if(i == 2 && j == 2)  // break at inner loop and back to outer loop
            {
                continue;
            }
            cout<<i<<" "<<j<<"\n"; // print
        }
    }

    return 0;// signal to operating system everything works fine

}/** End of main function */
