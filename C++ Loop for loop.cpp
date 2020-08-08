/**
[AUTHOR]: Saddam Arbaa
[Email] : <saddamarbaas@gmail.com>

 for loop in C++
 Loops can execute a block of code as long as a specified
 condition is reached.
 Loops are handy because they save time, reduce errors, and
 they make code more readable
 When we know exactly how many times we want to loop through
 a block of code,  we use the for loop instead of a while loop:

  *Syntax for for  loop
  for (statement 1; statement 2; statement 3) {
      code block to be executed
}
Statement 1 is executed (one time) before the execution of the code block.

Statement 2 defines the condition for executing the code block.

Statement 3 is executed (every time) after the code block has been executed.

*/

#include <iostream>
using namespace std;

// the  Driver Code
int main()
{
    for(int i = 0; i < 5; i++)
    {
        cout << "Hello world lets learn loop!" << endl;
    }
     return 0;// signal to operating system everything works fine

}/** End of main function */
