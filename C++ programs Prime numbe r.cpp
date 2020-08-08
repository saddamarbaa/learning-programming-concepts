/**
   [AUTHOR] :  Saddam Arbaa

   [Email]  : <saddamarbaas@gmail.com>

   write program to test if the given number is prime or not ? */

#include <iostream>
using namespace std;

// function to test if the number is prime
void isPrime(int num);

// the  Driver Code
int main()
{
    int num;

    //asking user input
    cout << "Please Enter any number to Check for Prime Test ";
    cin >> num;

    // call is prime() function
    isPrime(num);

    return 0;// signal to operating system everything works fine

}/** End of main function */


/**
    function to test if the given number
    is prime number or not

    Prime numbers. Prime numbers are numbers that have only 2 factors:
    1 and themselves.(can by dived only by themselves and 1)
    For example, the first 5 prime numbers are 2, 3, 5, 7, and 11*/

void isPrime(int num)
{
    int flag = 0; // flag variable

    for(int i = 2; i < num; i++)
    {
        if(num % i == 0)
        {
            cout << num << "  not prime and can be divide by : " << i<<endl;
            flag = 1;// change flag to 1
        }
    } /** End for loop */

    // if flag variable  is still equal to zero is mean the given number is prime
    if (flag == 0)
    cout << num << " is prime number" <<endl;


}/** End isPrime */
