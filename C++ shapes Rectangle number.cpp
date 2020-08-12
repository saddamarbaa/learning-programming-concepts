/**
[AUTHOR]: Saddam Arbaa
[Email] : <saddamarbaas@gmail.com>

C++  Loop Example to Draw Rectangle of numbers like blow

1  2  3  4  5
1  2  3  4
1  2  3
1  2
1

*/

#include <iostream>
using namespace std;

// the  Driver Code
int main()
{
    // outer loop
    for(int i = 5; i >= 1; i--)
    {
        // inner loop
        for(int j = 1; j <= i ; j++)
        {
          cout << j << "  " ;
        }
         cout << endl; // new line after each inner loop
    }
    return 0;

    // the same can be written different way as code in comment blow

//     // outer loop
//    for(int i = 1; i <= 5; i++)
//    {
//        // inner loop
//        for(int j = 1; j <= 5 - i + 1 ; j++)
//        {
//          cout << j << "  " ;
//        }
//         cout << endl; // new line after each inner loop
//    }

    return 0;// signal to operating system everything works fine

}/** End of main function  */
