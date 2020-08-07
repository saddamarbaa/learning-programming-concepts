/**
    [AUTHOR]: Saddam Arbaa
    [Email] : <saddamarbaas@gmail.com>

    C++ Do/While Loop
    The C++ do-while loop is used to iterate a part of the program
    several times.If the number of iteration is not fixed and you
    must have to execute the loop at least once, it is recommended
    to use do-while loop.

    do-while loop will execute the code block at least once before
    checking if the condition is true, then it will repeat the loop
    as long as the condition is true.
    because condition is checked after loop body.

    Syntax :-
    do
    {
      // code block to be executed
    }
    while (condition);

    The example below uses a do/while loop.
    The loop will always be executed at least once,
    even if the condition is false, because the code
    block is executed before the condition is tested:
*/

#include <iostream>

using namespace std;
// the  Driver Code
int main()
{
   // counter
   int i = 0;
   do
    {
        cout << i << endl; // out number from 0 to 14
        i +=1; // same as (i++ ) same i = i +1
    }while (i< 15);

    return 0;// signal to operating system everything works fine

}/** End of main function */
