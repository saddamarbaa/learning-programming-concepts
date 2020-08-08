/**
[AUTHOR]: Saddam Arbaa
[Email] : <saddamarbaas@gmail.com>

 for loop examples in C++
 This example will print sum and average 5 number that entered
 by user
*/

#include <iostream>
using namespace std;

// the  Driver Code
int main()
{
    float N; // N variable
    float sum = 0.0; // sum variable and give value 0
    float average; // average variable

    for(int i = 1; i <= 5; i++)
    {
        // asking user to enter variable n
    cout << "Enter number "<<i<< " : ";
    cin >> N;

        sum = sum + N; // calculating the sum
    }
    average = sum / 5; // calculating the average  with type casting sum to float

    // print sum and average
    cout <<"the sum is :  "<<sum<< endl;
    cout <<"the average : = "<<average<< endl;

    return 0;// signal to operating system everything works fine

}/** End of main function */
