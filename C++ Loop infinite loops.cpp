/**
    [AUTHOR]: Saddam Arbaa
    [Email] : <saddamarbaas@gmail.com>

      C++ program to demonstrate infinite loops
      An infinite loop  is  loop that run forever
      infinite loop occurs when a condition always
      evaluates to true. Usually, this is an error.
*/

#include <iostream>

using namespace std;

// the  Driver Code
int main()
{
    /*  This is an infinite for loop as the condition
        given in while loop is "true"  forever */
    do
    {
        cout << "Hell here is infinite loop run forever.\n";
    }while (true) ;


    //int i;

    // This is an infinite for loop as the condition
    // expression is blank
    /*for ( ; ; )
    {
        cout << "This loop will run forever.\n";
    }
    */


    // This is an infinite for loop as the condition
    // given in while loop will keep repeating infinitely
    /*
    while (i != 0)
    {
        i-- ;
        cout << "This loop will run forever.\n";
    }
    */

    return 0;// signal to operating system everything works fine

}/** End of main function */
