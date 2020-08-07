/**
[AUTHOR]: Saddam Arbaa
[Email] : <saddamarbaas@gmail.com>

  while loop in C++
  In C++, while loop is used to iterate a part of the program
  several times as long as a specified condition is true:
  If the number of iteration is not fixed, it is recommended
  to use while loop than for loop.

while loop Syntax :-

while (condition)
{
  // code block to be executed
}
In the example below, the code in the loop will run,
over and over again, as long as a variable (i) is less than 15:

*/

#include <iostream>
using namespace std;

// the  Driver Code
int main()
{
    // counter
    int i = 0;
    while (i< 15)
    {
        cout << i << endl; // out number from 0 to 14
        i +=1; // same as (i++ ) same i = i +1
    }
    return 0;// signal to operating system everything works fine

}/** End of main function */
