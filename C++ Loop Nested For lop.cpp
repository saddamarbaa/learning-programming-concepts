/**
[AUTHOR]: Saddam Arbaa
[Email] : <saddamarbaas@gmail.com>

 Nested Loops examples in C++
 write c++ program that calculate Math table for number
 from 1 to 5
*/

#include <iostream>

using namespace std;

/* Driver program to test Nested Loop */
int main()
{
    // outer loop
    for (int i = 1; i <= 5; i++)
    {
        cout << "Math table for number  : " << i << endl;

        // inner loop to calculate for each number
        for (int j = 1; j <= 12 ; j++)
        {
           cout << i << " * "  <<j << " = : " <<i * j << "\n";
        }

        cout <<"\n";
    }
    return 0;// signal to operating system everything works fine

}/** End of main function */
