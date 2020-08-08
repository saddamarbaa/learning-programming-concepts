/**
[AUTHOR]: Saddam Arbaa
[Email] : <saddamarbaas@gmail.com>

 for loop examples in C++
 This example will print sum and average of numbers
 between 0 and N and N will be entered by user
*/

#include <iostream>
using namespace std;

// the  Driver Code
int main()
{
    int N; // N variable
    int sum = 0; // sum variable and give value 0
    float average; // average variable

    // asking user to enter variable n
    cout << "Enter N: ";
    cin >> N;

    for(int i = 0; i <= N; i++)
    {
        sum = sum + i; // calculating the sum
       // cout << sum << "\t";
    }

    average = (float)sum / N; // calculating the agverage  with type casting sum to float

    // print sum and agverage
    cout <<"the sum of numbers between 0 to "<<N <<" = "<<sum<< endl;
    cout <<"the average of numbers between 0 to "<<N <<" = "<<average<< endl;

    return 0;// signal to operating system everything works fine

}/** End of main function */
