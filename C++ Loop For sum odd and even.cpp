/**
[AUTHOR]: Saddam Arbaa
[Email] : <saddamarbaas@gmail.com>

 for loop examples in C++
 This example  accept 10 number from user then print the sum of
 even number and sum of odd numbers */

#include <iostream>
using namespace std;

// the  Driver Code
int main()
{
    int n; // for number
    int sumeven = 0; // sum of even number
    int sumodd = 0; // sum of odd number

    for(int i = 1; i <= 10; i++)
    {
       // asking user to enter  numbers
       cout << "Enter number  "<<i<< " : ";
       cin >> n;
       if (n % 2 == 0) // its even add to even  numbers
       {
         sumeven =  sumeven + n;
       }
       else // its odd add to odd numbers
       {
           sumodd = sumodd + n;
       }
    }

    // print sum of even numbers
    cout <<"the sum of even numbers is :  "<< sumeven << endl;
    // print sum of odd numbers
    cout <<"the sum of odd numbers is :  "<< sumodd << endl;
    return 0;// signal to operating system everything works fine

}/** End of main function */
