/**
 [AUTHOR]: Saddam Arbaa
 [Email] : <saddamarbaas@gmail.com>

 C++ While Loop
 Example sum of number from 1 to 100
*/

#include <iostream>
using namespace std;

// the  Driver Code
int main()
{
    int i = 1; //variable
   int sum =  0; // variable for sum;
   while (i <= 100)
    {
        cout << sum <<" + " << i << " = " << sum <<  endl; // out number from 0 to 14

        sum +=i; // sum = sum +1
        i +=1; // same as (i++ ) same i = i +1
    }
    cout << "The sum is of number from 1 to 100  : " << sum << endl;

     return 0;// signal to operating system everything works fine

}/** End of main function */
