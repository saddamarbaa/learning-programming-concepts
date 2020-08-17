/**
    [PROGRAM] : C++ Default Parameters
    [AUTHOR]  :  Saddam Arbaa
    [Email]   :  <saddamarbaas@gmail.com>
    C++ function with  Default Parameters  */

#include <iostream>
using namespace std;

/**
  Function definition / function  with Default Parameter Value
  this function print the given country name but if the user
  don't pass any parameter will print the default value sudden*/

void myFunction(string country = "Sudan")
{
    cout << country << "\n";
}

// the main Function
int main()
{
    // call the function 8 time
    myFunction("Indonesia");
    myFunction("South Africa");
    myFunction(); // will print the Default Parameter
    myFunction("India");
    myFunction();  // will print the Default Parameter
    myFunction("Sweden");
    myFunction("USA");
    myFunction("china");

    // out put will be as blow
     // Indonesia
     // South Africa
     // sudan
     // India
     // sudan
     // Sweden
     // USA
     //china

     return 0;// signal to operating system everything works fine

}/** End of main function */




