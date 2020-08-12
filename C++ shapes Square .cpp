/**
[AUTHOR]: Saddam Arbaa
[Email] : <saddamarbaas@gmail.com>

C++  Loop Example to Draw Square  of numbers like blow

1 2 3 4 5
1 2 3 4 5
1 2 3 4 5

*/

#include <iostream>
using namespace std;

// the  Driver Code
int main()
{
    // outer loop
    for(int i = 1; i<= 3; i++)
    {
        // inner loop draw square of number each time before back to outer loop
        for(int j = 1; j <= 5; j++)
        {
          cout << j << " " ;
        }
         cout << endl; // new line after each inner loop
    }
    return 0;// signal to operating system everything works fine

}/** End of main function  */
