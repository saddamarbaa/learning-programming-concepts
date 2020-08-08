/**
    [AUTHOR]: Saddam Arbaa
    [Email] : <saddamarbaas@gmail.com>

    C++ Break Statement with Inner Loop
    The C++ break statement breaks inner loop only
    if you use break statement inside the inner loop.
    in this if i == 2 && j == 2) break the inner loop
*/

#include <iostream>
using namespace std;

// the  Driver Code
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
                break;
            }
            cout<<i<<" "<<j<<"\n"; // print
        }
    }

    return 0;// signal to operating system everything works fine
/*
 the output
1 1
1 2
1 3
1 4
1 5
2 1
3 1
3 2
3 3
3 4
3 5
4 1
4 2
4 3
4 4
4 5
5 1
5 2
5 3
5 4
5 5

*/

}/** End of main function */
