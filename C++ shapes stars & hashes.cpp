/**
[AUTHOR]: Saddam Arbaa
[Email] : <saddamarbaas@gmail.com>

C++ Nested Loop Example to Draw different idea of stars * and hashes 
 like the one  blow

 *
 *  *
 *  -  *
 *  -  -  *
 *  -  -  -  *
 *  -  -  -  -  *
 *  -  -  -  -  -  *
 *  *  *  *  *  *  *  *

*/

#include <iostream>

using namespace std;

// the  Driver Code
int main()
{
    // print one start in line one
    cout<<" * \n";

    /* from line 2 to line 7 in loop print one start then
      enter in inner loop and after done from inner loop again
      print one start  then back to outer to loop again */

    // outer loop
    for(int i = 2; i <= 7; i++)
    {
        // print *
        cout<<" * ";

        // (inner loop)
        for(int k = 1; k <= i -2; k++)
        {
          // print - (inner loop)
           cout<<" - ";
        }

       // at end of each line print start
       cout<<" * ";

       // new line first and back to outer loop
       cout << endl;
    }

    // independent loop to print 8 star at last line (line 8)
    for(int j = 1; j <= 8; j++)
        cout<<" * ";

    return 0;// signal to operating system everything works fine

}/** End of main function  */
