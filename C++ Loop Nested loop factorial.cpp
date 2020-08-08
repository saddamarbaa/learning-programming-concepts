/**
    [AUTHOR]: Saddam Arbaa
    [Email] : <saddamarbaas@gmail.com>

     Nested Loops examples in C++
     write c++ program that calculate factorial of numbers
     from 1 to N and N will be entered by user
*/

#include <iostream>
using namespace std;

/* Driver program to test factorial of numbers */
int main()
{
    int N; // number will enter by user

    float fact ; // variable for factorial

    //asking user to enter the number
    cout << "please Enter number  :";
    cin >> N;

    // outer loop
    for (int i = 1; i <= N; i++)
    {
        fact = 1; //factorial start from 1 because we need count for each number from 1 to that number

        // inner loop to calculate for each number
        for (int j = 1; j <= i ; j++)
        {
            fact =   fact * j;  // calculation  factorial for each number
           // cout << fact << "\t"; // only was for testing
        }

        // print factorial for each number
         cout << "factorial of  " << i << "  = "<<fact;

        cout <<"\n";
    }

    return 0;// signal to operating system everything works fine

}/** End of main function */
