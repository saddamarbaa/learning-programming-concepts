
/**
   [PROG]	    : C++  Exercise  on Operators

   [AUTHOR]		: Saddam Arbaa <saddamarbaas@gmail.com>  */

#include <iostream>

using namespace std;

int main()
{
    int x = 10 ;
    int m = (6 <1 ) | (20 ^ 16) & x++ + 1;

    /*
    m = F | 4 & 10 + 1
    m = F | 4 & 11
    m = F | 0
    m = 0 | 0
    m = 0
    */

    // result is 0
    cout << m << endl;
    return 0;
}
