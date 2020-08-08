/**
[AUTHOR]: Saddam Arbaa
[Email] : <saddamarbaas@gmail.com>

C++ Break Statement Example in While Loop

 This example jumps out of the loop when i is equal to 7:
 will print  1       2       3       4       5       6
*/

#include <iostream>
using namespace std;

// the  Driver Code
int main()
{
    int i = 1; // counter variable
    while (i <= 10)
    {
        cout << i << "\t"; // print i
        i++; //increment the counter by one

        if (i == 7) //as if  i == 7 jump out of while loop we are done
            break;
    }
    cout << endl;

    return 0;// signal to operating system everything works fine

}/** End of main function */
