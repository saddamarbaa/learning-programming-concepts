/**
[AUTHOR]: Saddam Arbaa
[Email] : <saddamarbaas@gmail.com>

 while examples in C++
 This example will print the average grade for N student
*/

#include <iostream>
using namespace std;

// the  Driver Code
int main()
{
    int i = 1; // counter
    float N; // N variable for number of student
    float sum = 0.0; // sum variable and give value 0
    float average , grade; // average  ,grade variable

    // first ask user for number of student
     cout << "Enter number of students : ";
     cin >> N;

    while (i <= N)
    {
        // asking user to enter variable n
        cout << "Enter grade for student "<<i<< " : ";
        cin >> grade;

         sum = sum + grade; // calculating the sum
         i = i + 1; // increment counter by 1
    }

   average = sum / N; // calculating the average  with type casting sum to float

    // print sum and average
    cout <<"the sum is :  "<<sum<< endl;
    cout <<"the average : = "<<average<< endl;

     return 0;// signal to operating system everything works fine

}/** End of main function */
