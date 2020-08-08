/** 
[AUTHOR]: Saddam Arbaa
[Email] : <saddamarbaas@gmail.com>

C++ Nested do-while Loop
In C++, if we use do-while loop inside another do-while loop,
it is known as nested do-while loop.
The nested do-while loop is executed fully for each outer do-while loop.

Let's see a simple example of nested do-while loop in C++.

*/

#include <iostream>
using namespace std;

/* Driver program to test Nested do-while Loop */
int main()
{
    // counter
    int i = 1;

         do{
              int j = 1;

              do{

                cout<<i<<"\n";
                  j++;

              } while (j <= 3) ;

              i++;

          } while (i <= 3) ;

    return 0;// signal to operating system everything works fine

}/** End of main function */
