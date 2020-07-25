/**
   [PROG]	    : C++ / (Exercise) Operators 

   [AUTHOR]		: Saddam Arbaa <saddamarbaas@gmail.com>  */
   
#include <iostream>

using namespace std;

int main()
{
    int x;
    x = ((5 > 4) || (6 < 3) && (12 & 9)) ^ 7;
    /*
      x = ( T|| F && 8) ^ 7;
      x = (T ||F && T )^ 7;
      x = (T ||F  )^ 7;
      x =  T^ 7;
      x = 1 ^ 7;
      x = 6;
    */
    //result is 6
    cout << x << endl;
    return 0;
}
