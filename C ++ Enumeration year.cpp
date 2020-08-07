/**
   [AUTHOR]: Saddam Arbaa
   [Email] : <saddamarbaas@gmail.com>

   Enum year Example
*/

#include <iostream>

using namespace std;

// Defining enum Year
enum year { Jan,
            Feb,
            Mar,
            Apr,
            May,
            Jun,
            Jul,
            Aug,
            Sep,
            Oct,
            Nov,
            Dec };

// the  Driver Code
int main()
{
    // counter
    int i;

    // Traversing the year enum
    for (i = Jan; i <= Dec; i++)
        cout << i << " ";

    return 0;// signal to operating system everything works fine

}/** End of main function */
