/**  
[AUTHOR]: Saddam Arbaa
[Email] : <saddamarbaas@gmail.com> 

 do while loop examples in C++
 This example will print sum and average of odd numbers
 between 1 and N and N will be entered by user
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
    int i = 1; //counter
    int number_been_loop = 0; //variable to keep trace of number of even numbers
    do
    {
        number_been_loop++; // keeping trake of how many number we between 0 to

        sum = sum + i; // calculating the sum
        i = i + 2; // increment counter
    } while(i <= N);

     cout <<endl<< "the number of the odd number is :"<<number_been_loop <<endl;

     average = (float)sum / number_been_loop; // calculating the average  with type casting sum to float

     // print sum and average
     cout <<"the sum of odd numbers between 0 to "<<N <<" = "<<sum<< endl;
     cout <<"the average of odd numbers between 0 to "<<N <<" = "<<average<< endl;

    return 0;// signal to operating system everything works fine

}/** End of main function */

