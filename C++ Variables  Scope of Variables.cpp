/**
    [PROG]	    :  Scope of Variables in C++
   [AUTHOR]		:  Saddam Arbaa
   [Email]      : <saddamarbaas@gmail.com>

   Local , Global variables , Const , Automatic and Static   */

   
#include <iostream>

using namespace std;

void func();

// declaring and initializing global variables x and y
int x = 200, y = 220;

int main()
{
    // changing value of global x  and variable from main function
    x = 333;
    y = 4444;

    // declaring and initializing local variables x and y
    // local variable with same name as that of global variable
    int x = 100, y = 120;

    //print Global variable  x using scope opeartor
    cout << "Print Global variable  x  = " <<::x << endl;

    //print Global variable  y using scope operator
    cout << "Print Global variable  y  = " <<::y << endl;

    //print local variable x
    cout << "Print local variable  x  = " <<x << endl;

    //print local variable  y
    cout << "Print local variable  y  = " <<y << endl;

    {
         // declaring and initializing  variables x and y inside block

          /*
            variables x and  declared in this block is
            completely different from variable
            declared outside.
         */

          int x = 5, y = 15;
          //print local variable x which is in this bloock
          cout << "Print local variable  x  = " <<x << endl;

          //print local variable  y  which is in this bloock
         cout << "Print local variable  y  = " <<y << endl;

         //print Global variable  x using scope operator
         cout << "Print Global variable  x  from inner block  = " <<::x << endl;

        //print Global variable  y using scope operator
        cout << "Print Global variable  y from inner block  = " <<::y << endl;

    }/** End of block */

    // call func() function
     func();

    // signal to operating system everything works fine
    return 0;

}/** End of main*/

void func()
{
    // declaring and initializing local variables x and y inside function
     int x = 2, y = 3;

     /*this variable is local to the function func() and cannot be
      accessed outside this function */

      cout << "Print local variable  x  from inside func() function = " <<x << endl;

      cout << "Print local variable  y  from  inside func() function  = " <<y << endl;

      cout << "Print global variable  x  from inside func() function = " << ::x << endl;

      cout << "Print global variable  y  from  inside func() function  = " << ::y << endl;
}/** End of func() */



