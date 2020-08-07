/**
[AUTHOR]: Saddam Arbaa
[Email] : <saddamarbaas@gmail.com>

   while loop example
  c++ program ask user to enter number  then as long
  as user input bigger than 0 prints "**" and ask
  for anther number
*/

#include <iostream>
using namespace std;

// the  Driver Code
int main()
{
    int a;

    // asking user input
    cout << "Enter number :";
    cin >> a;

    while (a > 0)
    {
        cout << "* * \n";
        cout << "Enter another number :";
        cin >> a;
    }

    return 0;// signal to operating system everything works fine

}/** End of main function */
