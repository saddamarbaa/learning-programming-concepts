/**
[AUTHOR]: Saddam Arbaa
[Email] : <saddamarbaas@gmail.com>

C++ Continue Statement Example in While Loop
 will print  1    2    3    4    5    6    8    9    10
*/

#include <iostream>
using namespace std;

// the  Driver Code
int main()
{
    int i = 1; // counter variable star by 1
    while (i <= 10)
    {
          /* if (i == 7) increment i by 1 then
              then skip this iteration */
        if (i == 7)
        {
            i++;
            continue;
        }
        cout << i << "\t"; // print i
        i++; //increment the counter by one
    }
    cout << endl;

    return 0;// signal to operating system everything works fine

}/** End of main function */
