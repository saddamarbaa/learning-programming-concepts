/*
    [AUTHOR]: Saddam Arbaa
    [Email] : <saddamarbaas@gmail.com>

    C++ Break Statement
     The C++ break is used to break loop or switch statement.
     ("jump out" of a switch statement, The break statement can also be used to jump out of a loop.)
     It breaks the current flow of the program at the given condition.
     if In case of inner loop, it breaks only inner loop.

     This example jumps out of the loop when i is equal to 7:
     will print  1       2       3       4       5       6
*/

#include <iostream>
using namespace std;

// the  Driver Code
int main()
{
    for(int i = 1; i < 10; i++)
    {
        //as soon as i == 7 jump out of loop we are done
        if (i == 7)
            break;
        cout << i << "\t"; // print 1  2  3 4 5 6
    }
    cout << endl;

    return 0;// signal to operating system everything works fine

}/** End of main function */
